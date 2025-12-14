/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((((((arr_1 [i_0]) / ((2147483620 ? var_0 : -1554463951))))) ? ((-24 ? (arr_3 [i_0 - 1] [i_0 - 2]) : ((23 ? var_2 : 0)))) : ((((arr_1 [i_1]) / var_12)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_0] = ((((((arr_6 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2]) == 2147483614))) - (arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                            var_18 -= var_5;
                            var_19 = ((~(arr_5 [1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_20 = (~(((max(249, (arr_1 [i_4]))))));
                            var_21 = ((((((arr_5 [i_0]) / (arr_1 [i_0 - 1])))) ? ((64502 ? (var_16 / 9223372036854775798) : 511)) : var_16));
                            var_22 = var_5;
                        }
                    }
                }
                var_23 = (max(-24, 1554463950));
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_24 ^= -13;
                    var_25 = var_8;
                    var_26 = (arr_3 [i_6] [i_7]);
                }
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_27 = (arr_21 [i_6 + 1] [i_9] [i_6 + 1] [i_6 + 1]);
            var_28 = (((arr_18 [i_6] [i_6 - 1] [i_6]) ? (arr_18 [i_6] [i_6 - 1] [i_6 - 1]) : (arr_18 [i_9] [i_6 - 1] [i_9])));
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_29 *= (arr_17 [i_6 + 1]);
            arr_28 [i_6] [i_10] [i_6] = (((arr_25 [i_6] [i_6] [2]) ? (((var_6 < (arr_27 [i_6] [i_6])))) : (arr_15 [i_6] [i_6] [12])));
            var_30 = 861129792;
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            var_31 = (min(var_31, var_7));
            arr_33 [i_6] [i_6] = var_15;
        }
        var_32 = (((arr_20 [i_6]) ? 65535 : (arr_7 [i_6 - 1])));
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                {
                    arr_40 [i_14] [i_14] [i_12] [i_12] = (max((arr_12 [i_12] [i_13] [i_13 - 1] [i_14]), (arr_22 [i_12] [i_13 + 1] [i_12])));
                    var_33 = var_13;
                    var_34 *= (((max((arr_22 [i_13 + 1] [i_13 + 1] [i_13 + 1]), (arr_22 [i_13 - 1] [7] [i_13]))) ? (arr_22 [i_13 + 1] [i_13] [i_12]) : (arr_22 [i_13 + 1] [i_13 + 1] [i_13 + 1])));
                    var_35 = ((!((((arr_8 [i_12] [i_13] [i_14]) ? (arr_34 [i_12]) : (arr_3 [i_12] [0]))))));
                }
            }
        }
    }
    var_36 = ((((((((46 ? var_11 : 4625)) < var_8)))) / var_2));
    #pragma endscop
}
