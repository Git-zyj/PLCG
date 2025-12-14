/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 ^= 4;
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
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = 1;
                                var_19 = (min(var_19, (((((((~1) ? var_3 : (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_0]) ? 0 : var_6))))) ? ((((arr_6 [i_2]) >= (arr_6 [i_2])))) : (((arr_3 [i_1]) | (((!(arr_10 [i_2] [i_2])))))))))));
                            }
                        }
                    }
                    var_20 = ((((var_0 >= var_12) ? ((max((arr_0 [i_1]), var_4))) : (max(36028797018963967, var_11)))));
                    var_21 = (min(var_21, (arr_1 [i_0])));
                }
            }
        }
    }
    var_22 = (max((var_4 / var_7), var_0));
    var_23 = ((((var_6 ? var_14 : var_1)) << (((max(var_10, var_14)) - 2776536477))));
    #pragma endscop
}
