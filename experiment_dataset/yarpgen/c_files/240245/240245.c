/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(((max(var_14, var_6))), var_19)) & (((max((var_16 && var_0), (min(var_1, var_3))))))));
    var_21 = (min(((min((var_19 && var_6), (min(var_0, var_5))))), (min(var_10, (min(var_19, var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 1] = (max(((((((arr_2 [i_1]) ? (arr_3 [i_0]) : (arr_4 [i_0] [i_0])))) ? ((var_12 ? (arr_3 [i_0 + 2]) : (arr_1 [i_1]))) : (arr_4 [i_0] [i_0 - 1]))), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_1] [i_3] [i_0 + 1] = (max(0, 32767));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (min((arr_7 [i_0 + 1]), ((max(var_10, (arr_1 [i_0 + 1]))))));
                                arr_17 [i_0 + 1] [i_3] = (max(((min((min((arr_12 [i_3] [i_3] [i_2] [i_1] [i_3]), (arr_10 [i_0] [i_0] [i_0] [i_0]))), ((max((arr_13 [i_4] [i_3] [i_2] [i_0 - 1] [i_0 - 1]), var_17)))))), (max((((var_5 ? var_12 : var_1))), ((var_15 ? var_8 : var_0))))));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_20 [i_0 + 1] [i_1] [i_0 + 1] [i_2] [i_5] &= ((-var_16 || ((min((((arr_18 [i_0] [i_1]) / (arr_6 [i_0] [i_0] [i_0] [i_0]))), var_15)))));
                                arr_21 [i_3] [i_1] [i_2] = ((!((((((arr_18 [i_3] [i_3]) + 2147483647)) >> (((max(var_16, var_16)) - 7053900313346703425)))))));
                            }
                            arr_22 [i_3] [i_2] [i_3] = (min((min(((min((arr_19 [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_0 - 1] [i_3] [i_1] [i_1] [i_2] [i_3] [i_2])))), (min((arr_14 [i_0 + 2] [i_3] [i_2] [i_3] [i_0] [i_0] [i_3]), (arr_1 [i_2]))))), (min((min(var_14, var_8)), ((min((arr_13 [i_0] [i_0] [i_2] [i_3] [i_0 + 2]), var_1)))))));
                            arr_23 [i_0] [i_3] [i_0 - 1] [i_0 + 2] = (max((min(var_17, (max((arr_8 [i_3] [i_2] [i_3]), (arr_11 [i_3] [i_1] [i_2] [i_2]))))), (((~((max(var_15, var_15))))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((+(((var_17 & var_15) / ((var_13 ? var_7 : var_6))))));
    #pragma endscop
}
