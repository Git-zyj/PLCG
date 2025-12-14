/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] &= (min((min(43437, (((arr_2 [i_0]) ? (arr_0 [i_0]) : var_5)))), ((((((var_1 ? var_8 : var_12))) ? ((min((arr_2 [i_0]), (arr_2 [i_0])))) : ((min(var_13, var_13))))))));
        arr_5 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_15 *= (min(var_2, var_8));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] [i_2] [i_4] [i_1] = var_13;
                                arr_22 [i_1] [i_2] [i_3] [7] [i_5] = (arr_16 [i_2] [i_1] [i_1]);
                                arr_23 [i_1] [i_2 + 2] [i_3] [i_2] [i_4] [21] [i_5] = ((((var_5 ? var_9 : var_3))));
                            }
                        }
                    }
                    var_16 = (min((max(((max(var_10, (arr_11 [i_1] [i_1] [i_1] [i_2])))), var_5)), ((max(var_10, (arr_14 [i_1]))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_27 [i_6] = (max(((((max(var_13, var_2))) ? (arr_14 [i_6]) : (arr_15 [i_6] [i_6] [i_6] [i_6]))), ((min((min(var_12, var_9)), var_11)))));
        arr_28 [i_6] [16] = (min(((min(var_0, (max(var_2, var_4))))), (arr_20 [i_6] [i_6])));
        var_17 = (max(var_17, var_13));
    }
    #pragma endscop
}
