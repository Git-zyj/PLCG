/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 12444183382176518832;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, (((-(((~var_5) & var_11)))))));
                        var_21 ^= (-20 & (((-(min(81, 4269183310))))));
                        var_22 = (min(var_22, (((+(((~9120807357669897064) ^ (4294967275 | -1254917554104850485))))))));
                    }
                }
            }
        }
        var_23 = 1495993720486579376;
        arr_11 [3] = ((~(((~var_11) ? var_13 : 60614))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_24 = ((~(~1)));
                var_25 = (max(var_25, (((!(((-(arr_10 [i_4] [i_5])))))))));
                var_26 = -1542586340201306190;
            }
        }
    }
    var_27 = (min(var_27, var_11));

    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        var_28 |= max(24, 44994);

        /* vectorizable */
        for (int i_7 = 4; i_7 < 13;i_7 += 1)
        {
            arr_22 [i_6] [6] [13] = ((~(arr_1 [i_6 + 2])));
            arr_23 [i_6] [i_7] = (-(arr_9 [i_6] [i_7 - 2] [i_6 - 2] [i_6 - 2]));
            arr_24 [i_6] [i_7] = ((var_15 % (arr_18 [i_7 + 1] [i_7])));
            var_29 = (~55389);
            arr_25 [12] = (((((arr_1 [1]) + var_3)) - (arr_3 [i_6] [i_6])));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_30 = (max(var_30, (((~(((!(!-13472)))))))));
            var_31 = 24;
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_32 = (((((max(1254209692048991198, var_6)) / 29779)) / (arr_15 [i_9])));
            var_33 = (((arr_13 [i_9]) * 4294967275));
        }
    }
    for (int i_10 = 1; i_10 < 22;i_10 += 1)
    {
        var_34 = ((+(max((-1882496456363675367 ^ 644542870033129342), (~var_5)))));

        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            var_35 = (max(var_35, (((((((-(arr_34 [i_10 + 1] [i_10 - 1]))) + 2147483647)) >> (arr_34 [i_10 + 1] [i_10 + 2]))))));
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    {
                        arr_40 [22] [i_12] [i_13] = (((min(((((arr_38 [i_10 + 2] [i_10 + 2] [2] [2]) & 11))), (((arr_39 [i_10] [i_10] [i_10] [i_10] [i_10]) ^ var_3)))) | 4026531840));
                        var_36 = (max(var_36, (((-2619134936 == (~1254209692048991187))))));
                        var_37 -= ((~(!var_9)));
                        var_38 = var_8;
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
        {
            var_39 = ((-4294443008 << (min(28, (508 ^ 478812982400723)))));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 4; i_16 < 21;i_16 += 1)
                {
                    {
                        var_40 = (max(var_40, (((~((-24888 - ((~(arr_45 [6] [6] [6] [0] [i_16]))))))))));
                        var_41 = 1254917554104850484;
                        var_42 += var_3;
                    }
                }
            }
        }
    }
    #pragma endscop
}
