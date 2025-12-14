/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [11] [i_0] [i_0] [i_0 - 1] = ((var_7 ? (min((!var_11), (min(var_15, 1)))) : ((min((arr_0 [i_0] [18]), 12)))));
                            arr_13 [19] [i_0] [i_2] [0] [i_2] = var_2;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_22 [i_0 + 1] [i_1] [i_1] [i_0] [i_5 - 4] [i_4] [i_5 - 4] = (((arr_10 [i_0 + 1] [i_5 - 2] [i_0] [i_6 + 3]) || var_12));
                                var_20 = (min(var_20, var_7));
                                var_21 = (min(var_21, var_15));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_35 [i_7] [i_8] [0] [i_10] = (arr_0 [i_9] [i_8]);
                            var_22 = (max(var_22, var_19));
                            var_23 += (((((~(max((arr_2 [i_7] [i_10] [i_7]), (arr_7 [i_7])))))) != 2511407849));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_42 [i_7] [11] [i_11] &= (max(var_18, (arr_2 [i_11] [i_11] [i_11])));
                            var_24 = (max(var_24, (arr_1 [i_12])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_25 *= ((((min(-28227, var_16))) ? (min((max(var_18, 18)), (arr_0 [i_8] [i_8]))) : (min((((arr_5 [i_8] [i_8] [i_8] [i_8]) ? 4294967290 : var_1)), ((((arr_1 [i_8]) <= (arr_17 [2] [i_8] [i_14] [14]))))))));
                            var_26 = ((((max((min((arr_4 [i_14] [i_14] [i_14] [i_14]), (arr_37 [i_8] [8] [1] [8]))), ((8 ? var_4 : (arr_6 [i_8] [i_8] [i_8] [i_8])))))) < (min(4294967267, -20816))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
