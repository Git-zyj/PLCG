/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((((((0 ? var_2 : var_10))) ? var_5 : ((var_2 ? var_7 : 18446744073709551596))))) ? (((var_13 - var_10) ? (max(var_6, var_1)) : ((min(0, 4423852507957941108))))) : 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (0 <= 0)));
                                var_22 = (min(var_22, ((((max((arr_9 [i_3 - 2] [i_3] [i_3 - 3] [i_3] [i_3 + 1] [i_3 - 1]), ((1 ? 18446744073709551615 : (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [0]))))) <= ((18446744073709551606 ? 18446744073709551615 : (((min(var_8, (arr_2 [i_4]))))))))))));
                            }
                        }
                    }
                }
                var_23 = (((min(var_4, (arr_7 [i_1]))) ? 1 : (((arr_7 [i_1]) ? (arr_7 [i_0]) : var_16))));
                var_24 = var_7;
            }
        }
    }
    var_25 = var_14;
    var_26 = ((var_16 ? (((var_12 <= var_5) ? (var_15 / var_0) : ((max(1, 79))))) : ((18446744073709551615 ? var_14 : ((0 ? var_10 : var_19))))));
    #pragma endscop
}
