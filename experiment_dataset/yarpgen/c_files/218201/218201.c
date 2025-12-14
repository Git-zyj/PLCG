/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((-var_10 << (-64 == var_10)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_12 = (max(var_12, (arr_0 [i_0] [14])));
            var_13 = (min(var_13, var_0));
        }
        var_14 = (max(var_14, (arr_1 [i_0 + 3])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    var_15 = (min(var_15, (((var_4 ? (arr_4 [i_4] [i_2 + 1]) : -1765295901)))));
                    var_16 *= var_7;
                    var_17 += -var_0;
                }
            }
        }
        var_18 = (min(var_18, ((((~247) ? ((41 ? 1765295895 : var_5)) : var_9)))));

        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            var_19 = (max(var_19, var_1));
            var_20 = (min(var_20, ((0 ? (var_2 * 65521) : (arr_12 [i_2 + 2] [i_5 - 1])))));
            var_21 |= 3925463491334739799;
            var_22 &= (6637836594929866379 ? (arr_13 [i_2 + 2] [i_5 + 2] [i_5 - 1] [i_2 - 1]) : (arr_13 [i_2 + 1] [i_5 + 1] [i_5 + 1] [i_2 + 2]));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_23 = (max(var_23, (arr_22 [6] [i_5 + 1] [i_6] [i_7])));
                            var_24 -= var_9;
                            arr_25 [i_2] [i_5] [2] [1] [0] [2] [i_2] |= ((1077243502 != (arr_17 [i_2] [i_2 + 3] [i_5 - 1])));
                            var_25 = (min(var_25, var_5));
                        }
                    }
                }

                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    var_26 += (((111 && var_0) ? (arr_10 [i_2 - 1] [i_9 + 1] [i_6] [i_5 - 1]) : ((var_8 ? (arr_18 [i_2 - 1] [i_5 - 2] [i_6] [i_9 - 3] [i_2 - 1]) : var_0))));
                    var_27 -= var_10;
                    var_28 = (min(var_28, (((-1 || (0 << 15))))));
                }
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_29 = (min(var_29, (((var_3 % (((8141453264649606700 ? (arr_14 [i_2] [i_10]) : 3925463491334739789))))))));
                var_30 = (max(var_30, (~5697381181444598393)));
            }
            for (int i_11 = 2; i_11 < 16;i_11 += 1)
            {
                arr_34 [i_2 + 2] [i_2 + 2] [i_11] [0] |= ((-1 ? (arr_31 [i_2 + 3] [i_2] [i_2] [i_2]) : 1));
                var_31 = (min(var_31, 1771216846));
                var_32 ^= ((var_10 ? (arr_29 [i_2 + 2] [i_5 + 1] [i_5 - 1] [i_11 - 1]) : (arr_29 [i_2 + 1] [13] [i_5 - 1] [i_11 - 2])));
                var_33 ^= var_8;
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                var_34 = (max(var_34, (var_6 ^ -15248)));
                var_35 += (arr_14 [i_12] [i_5]);
                var_36 ^= -0;
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_37 |= var_4;
            var_38 += (arr_15 [i_2] [i_2] [1]);
            var_39 += var_0;
        }
    }
    var_40 = (max(var_40, ((max((max(40, ((var_3 ? var_3 : var_6)))), -1771216841)))));
    #pragma endscop
}
