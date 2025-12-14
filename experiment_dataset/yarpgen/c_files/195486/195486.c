/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((max((arr_5 [i_0] [i_0] [i_4]), (((arr_5 [i_4] [i_2] [i_0]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [i_1] [7] [i_3 + 2]))))))));
                                var_21 = (max(var_21, ((((((arr_12 [i_3 + 2] [i_3 - 1] [i_3 - 1] [6] [i_3 - 1]) ? var_7 : ((((arr_9 [i_1]) ? (arr_7 [11] [i_1] [i_0]) : (arr_0 [i_0])))))) <= (arr_9 [i_3 + 2]))))));
                                arr_15 [i_1] [i_4] = (((arr_11 [i_0] [i_0] [i_2] [i_3]) ? var_19 : ((((arr_7 [i_0] [i_0] [i_4]) ? (arr_13 [i_4] [i_4]) : var_8)))));
                            }
                        }
                    }
                }
                var_22 += (((max((arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]), (((arr_6 [i_0] [i_0] [12] [i_0]) ? (arr_10 [i_1] [i_1] [i_1] [i_0] [i_0]) : (arr_3 [i_0] [i_0])))))) ? var_2 : ((((1 >> 1) <= ((1 ? (arr_1 [i_1] [i_0]) : -23446))))));
                var_23 = (min(var_23, ((((arr_13 [i_0] [18]) ? (max(2073255912, 516050602268934862)) : ((min(-9151692251993053128, 3546005544))))))));
            }
        }
    }
    var_24 = var_8;
    var_25 = (min(var_25, (var_1 || var_12)));
    var_26 -= (((((var_19 * ((var_5 ? var_14 : var_18))))) ? ((((min(var_11, var_6))) ? ((var_10 ? var_4 : var_18)) : var_2)) : (((var_6 / var_19) ? var_7 : var_5))));
    #pragma endscop
}
