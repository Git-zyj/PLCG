/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (-(~5557101876524184555));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_14 |= (min(5557101876524184555, (((~(arr_1 [i_0]))))));
                            var_15 = ((~((((((arr_4 [i_0]) ? 255 : (arr_9 [i_0] [i_0] [i_3])))) ? ((5557101876524184555 ? 198 : -1375791397)) : (((arr_9 [i_3] [i_0] [i_0]) ? var_3 : (arr_11 [13] [13] [i_2] [10] [i_3] [i_0])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 -= (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4]);
                                var_17 = (arr_11 [i_0] [4] [i_4] [i_5 + 1] [11] [i_0]);
                                arr_20 [11] [i_1] [i_1] [i_1] [i_1] [i_0] = max(0, 1351088060);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_25 [i_0] = ((((min((arr_14 [i_8] [i_0] [i_8 - 2]), (arr_14 [i_8] [i_0] [i_8 - 2])))) ? ((~(arr_14 [i_8 + 1] [i_0] [i_8 + 1]))) : (arr_14 [i_8] [i_0] [i_8 - 2])));

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 25;i_9 += 1)
                            {
                                var_18 ^= ((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_10 : -1609759580)) << (((((arr_14 [i_8 + 1] [i_8] [i_8 + 1]) + 86)) - 24)));
                                var_19 = (arr_21 [i_0] [i_0]);
                            }
                            for (int i_10 = 1; i_10 < 24;i_10 += 1)
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0] [20] [i_0] = (arr_14 [i_8 + 1] [i_0] [i_8 + 2]);
                                var_20 = (min(var_20, (arr_9 [i_0] [i_7] [i_7])));
                                var_21 = (((((((arr_2 [i_10 - 1]) ? (arr_6 [i_1]) : (arr_10 [i_0] [i_1] [i_0] [i_0] [i_8 - 2] [i_8 - 2]))))) ? (((((15808 ? 4294967290 : (arr_14 [i_7] [i_0] [i_7])))) ? (((((arr_10 [i_0] [i_1] [i_0] [i_0] [i_10] [i_10]) && (arr_12 [i_8] [i_10]))))) : (arr_7 [i_0] [i_1] [i_8 - 2] [4]))) : (min(0, var_5))));
                                arr_31 [i_0] = (min((((arr_3 [9] [i_1] [i_0]) ? (((arr_16 [i_7] [i_1] [i_7] [i_8 + 2] [i_1] [i_10]) ? (arr_24 [i_10 - 1] [i_0] [i_0] [i_0]) : (arr_6 [0]))) : var_1)), (arr_29 [i_10 + 1] [i_1] [i_7] [23] [i_10] [i_8 + 2])));
                            }

                            for (int i_11 = 1; i_11 < 22;i_11 += 1)
                            {
                                var_22 ^= (((10507418857119451837 ? 107 : 15)));
                                var_23 |= ((+((min((arr_22 [i_8 - 1] [i_8 - 2] [i_7]), (arr_22 [i_8 + 1] [i_8 + 1] [i_8]))))));
                                var_24 = (((((((min(var_10, 1))) ? (arr_34 [i_8 - 1] [i_8 - 2] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11]) : -1351088060))) ? ((var_9 ? var_3 : (arr_26 [i_0] [i_1] [i_0] [i_8] [i_0]))) : (arr_15 [i_0] [i_8] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            {
                arr_40 [i_12] [i_12] = ((((((arr_36 [i_13] [1]) ? 16249 : (arr_0 [i_12] [i_12])))) ? 8 : ((max((arr_32 [22] [22] [i_13] [22] [i_12] [i_13]), (arr_33 [i_12] [i_12] [i_12] [i_12] [i_12]))))));
                var_25 ^= (min((min((arr_15 [i_12] [0] [i_13]), var_3)), (arr_21 [i_12] [i_13])));
            }
        }
    }
    var_26 = (min((((((var_3 ? var_5 : var_3))) ? var_11 : 16250)), var_1));
    var_27 = ((((((((var_2 ? var_3 : var_10))) ? var_9 : var_0))) ? var_10 : var_0));
    #pragma endscop
}
