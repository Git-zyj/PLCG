/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_15));
    var_20 = var_9;
    var_21 = (max(var_21, (((((var_4 ? var_12 : (((var_6 ? var_11 : var_2))))) * (~var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_2] [i_2] = (((((var_13 ? (arr_9 [i_0] [i_3] [i_4 - 2]) : 61497))) & ((((((arr_2 [i_1] [i_2] [i_1]) ? var_11 : 61484)))))));
                                var_22 = (max(var_22, (((+(((arr_0 [i_4 + 1]) ? (arr_0 [i_2]) : (arr_0 [i_1]))))))));
                                var_23 = -536870912;
                            }
                        }
                    }
                    var_24 += (((max((arr_4 [i_2] [i_0] [i_1] [i_2]), (arr_3 [i_2] [i_1]))) <= ((max((~254), (2413159531 / var_11))))));
                    var_25 = ((((arr_8 [i_0] [i_0] [i_0]) / 61504)));
                }
            }
        }
    }
    var_26 = var_6;
    #pragma endscop
}
