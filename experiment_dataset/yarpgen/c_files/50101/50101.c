/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_15 ? (!-33) : ((var_7 ? var_5 : var_3))))) ? (((min(-33, var_15)))) : (min(32, 3418342037))));
    var_17 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = 93916173;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [6] [8] [1] [14] [14] |= (~22492);
                                var_19 = (min(var_19, ((min((arr_2 [i_0] [i_1] [i_3 - 2]), (arr_2 [i_0] [i_3] [i_3 - 2]))))));
                                arr_15 [i_0] [12] [5] = (max((((!(((116 ? 1 : 31338)))))), (((((~(arr_11 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (arr_7 [i_4] [i_1] [i_1] [i_1] [i_1] [i_0]) : (arr_7 [i_3 + 1] [i_1] [i_0 + 2] [i_0 + 2] [13] [i_1])))));
                                var_20 = (max(-28558, 1021795043));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
