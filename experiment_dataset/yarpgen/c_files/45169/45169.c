/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2] [12] [12] = (((var_3 != 13935) != ((((((arr_3 [i_2 + 2] [i_1] [i_0]) ? 4494291538874467271 : (arr_2 [i_0])))) ? -71 : 63))));
                    var_11 = (65529 ^ 247);
                }
            }
        }
        var_12 ^= (arr_1 [i_0]);
        arr_9 [i_0] [i_0] = var_1;
        var_13 = 127;
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            var_14 = 3217696388;

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                arr_18 [i_4 - 1] [i_4 + 1] [14] [14] = 65531;
                var_15 = (((76 * (arr_11 [i_4]))));
                var_16 = 70;
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    var_17 = (((arr_6 [i_4 + 4]) <= (arr_4 [i_4 + 2] [i_4 + 3] [i_7 + 1])));
                    arr_25 [i_7] = ((247 << (-1 + 22)));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_18 = (120 && 1183765027216549429);
                    var_19 = (((arr_26 [i_4 + 3] [i_4 - 2] [i_4 - 2] [i_4 + 2]) ? (arr_5 [i_3] [i_4] [i_3] [i_4 + 1]) : (!-73)));
                }
                var_20 *= 70;
                var_21 = (34119 - 247);
            }
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                var_22 *= (-37 * -73);
                var_23 = ((var_10 << (((arr_24 [i_4 + 1] [i_9 + 2] [i_9] [i_3]) + 24))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_24 = (arr_6 [i_10]);
                            var_25 += (((arr_7 [i_4 + 2] [i_10 - 1] [i_10] [i_11 - 2]) || (arr_7 [i_4 - 2] [i_10 + 2] [i_4 - 2] [i_11 + 2])));
                        }
                    }
                }
                arr_39 [i_3] [i_3] [i_3] [i_3] = var_5;
            }
            var_26 = (((arr_6 [i_3]) ? (((arr_28 [i_3] [i_3]) >> 0)) : (arr_33 [i_4] [i_4 + 3] [i_4 - 2] [i_4 + 4])));
        }
        for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
        {
            var_27 = (((arr_36 [i_12 + 2] [i_12 + 1] [15] [i_3] [i_3] [4]) != 64));
            var_28 = var_5;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    {
                        var_29 |= ((var_6 & ((((((arr_43 [i_13] [i_13] [i_13] [i_13]) + 2147483647)) << (((arr_1 [i_3]) - 147895492)))))));
                        arr_49 [i_3] [i_12] [i_13] [i_14] = (((2899664901 * 0) & (!-23)));
                    }
                }
            }
            var_30 = (min(var_30, ((((((var_2 ? 38475964 : var_2))) ? 254 : (arr_42 [i_3]))))));
        }
        for (int i_15 = 1; i_15 < 16;i_15 += 1) /* same iter space */
        {
            var_31 -= (((arr_12 [i_15 - 1]) >= (arr_38 [i_3] [i_3] [i_3] [i_15 - 1] [i_15 + 2])));
            var_32 = (min(var_32, (((55727 * (arr_36 [i_15] [7] [i_15] [i_15 + 1] [i_15 - 1] [i_15 + 1]))))));
        }
        arr_53 [7] [7] = ((~((214 ? -113 : 30))));
        var_33 = (var_9 & var_1);
        arr_54 [i_3] [i_3] &= 255;
    }
    #pragma endscop
}
