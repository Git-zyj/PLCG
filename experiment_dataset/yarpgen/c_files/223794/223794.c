/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max(((var_8 ? 3536480245 : var_13)), (((var_10 ? var_3 : var_0))))), ((var_0 ? var_8 : (var_13 + 3461185788)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 - 1] [i_0] [i_2] [i_4] = ((-(arr_9 [i_2] [i_2] [i_2] [i_2])));
                                arr_15 [i_0] [i_2] [i_2 - 3] [i_2 - 3] [i_2] = arr_12 [i_3] [1] [i_1 + 1] [11];
                                arr_16 [i_0] [i_2] [i_2] [i_4] [7] [5] [i_4] = ((arr_2 [i_0] [i_0]) | ((((((arr_11 [i_2] [i_2] [11]) ? (arr_10 [i_0]) : (arr_0 [i_0])))) & ((var_13 & (arr_5 [i_0]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_18 = (max(((((!var_14) - (max(var_1, var_15))))), (max((arr_2 [i_0] [i_0]), (max((arr_1 [i_0] [i_0]), var_5))))));
                                arr_23 [i_2] [i_2 - 4] [i_2] = max((arr_7 [i_2] [i_2] [i_6]), (((42 + ((var_15 ? var_12 : (arr_12 [i_1] [i_2 - 1] [i_5] [i_6])))))));
                                arr_24 [i_0] [i_0] [i_2] [i_0] [i_0] = (arr_22 [i_1] [i_1 + 1] [i_2] [i_2 - 3] [i_2 - 2]);
                            }
                        }
                    }
                    var_19 = (((((3 ? 146 : 31823742))) ? ((((((arr_19 [i_2] [i_1] [i_2] [i_2]) << (((arr_11 [i_0] [i_0] [i_0]) - 23668)))) >= (51512 && 4294967295)))) : (((max(var_6, (arr_13 [i_0] [8] [8] [i_1] [i_2])))))));
                }
            }
        }
    }
    var_20 = max((((var_2 ? var_6 : 26911))), (((max(var_7, var_1)) / (max(var_14, var_16)))));
    #pragma endscop
}
