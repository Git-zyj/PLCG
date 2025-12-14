/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_6, (((2047 ? -2047 : var_6)))))) ? ((~(var_0 ^ var_5))) : var_1));
    var_12 = (min(var_12, (-660352625 <= 72057594037927872)));
    var_13 = (max((+-24), 190));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = (((((arr_2 [i_0 + 1] [i_0]) + var_5)) <= (((+(((var_0 + 2147483647) >> (-10621 + 10634))))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        var_14 += 42;
                        var_15 = (min((max(0, (arr_5 [i_0]))), (((14045 + (arr_5 [i_0]))))));
                    }
                }
            }
            arr_13 [i_0] [i_0] = (+((+(((arr_5 [i_0]) ? 6 : var_4)))));
        }
        var_16 = 9223372036854775807;
        var_17 ^= (max((((~var_10) ? ((18273 ? 255 : 2022266025)) : -18274)), ((((var_2 && var_2) ? var_4 : ((504 ? -12730 : 167)))))));
        var_18 = ((max((arr_3 [i_0 - 2] [i_0] [i_0 - 1]), (arr_3 [i_0] [i_0] [i_0 - 1]))));
    }
    for (int i_4 = 4; i_4 < 7;i_4 += 1)
    {
        arr_17 [i_4] [i_4 + 1] = ((((max((((arr_0 [i_4] [i_4]) >> (var_4 + 4533000803300822140))), 1023))) ? (arr_10 [i_4] [i_4] [i_4]) : (min((min(var_5, 12777579617655807036)), 231))));
        arr_18 [i_4] [i_4] = ((2686270911 ? (min(15, ((40995 ? 34262 : (arr_15 [i_4]))))) : (~var_5)));
        var_19 = (arr_9 [i_4 - 1] [i_4] [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_20 = (((var_4 ? 34262 : 18446744073709551615)));
        arr_22 [i_5] = -var_4;
        arr_23 [i_5] [i_5] = (!var_5);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    arr_32 [1] [i_6] [i_6] = ((51490 >> (var_0 + 75)));

                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        var_21 = (((((var_10 ? (arr_4 [i_6] [i_6] [i_6]) : var_0))) ? (((arr_27 [13] [i_7] [i_8 + 1]) ? var_9 : var_3)) : (arr_0 [i_5] [i_6])));

                        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, 5669164456053744595));
                            var_23 ^= (-((var_4 ? (arr_2 [i_5] [i_5]) : var_9)));
                            var_24 = (min(var_24, (!var_10)));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, ((((arr_10 [i_8 - 2] [i_5] [i_7 - 1]) ? var_7 : var_4)))));
                            arr_44 [i_5] [i_6] [i_6] [i_6] [1] = ((-39 ? (~-122) : -40));
                            arr_45 [i_5] [i_5] [i_7] [i_8 - 1] [i_10] |= var_6;
                        }
                        var_26 = (max(var_26, var_7));
                    }
                }
            }
        }
    }
    #pragma endscop
}
