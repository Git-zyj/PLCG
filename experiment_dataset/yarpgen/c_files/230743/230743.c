/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = ((!((var_0 && (arr_6 [i_0 + 4] [i_0] [i_0 + 4])))));
                                var_18 = var_7;
                                var_19 = (4128927046 || 4128927032);
                            }
                        }
                    }
                    arr_12 [i_0] [i_0 + 4] [i_1] [i_0] = (arr_5 [i_0] [i_1] [i_0]);
                    var_20 *= (((((((arr_5 [21] [i_1] [5]) + var_4))) ? var_8 : ((min(var_7, var_10))))));
                    var_21 *= ((3721256454 ? (arr_5 [i_0 + 2] [7] [i_0]) : ((var_12 ? (((-(arr_3 [i_0 - 1] [i_2])))) : (arr_9 [i_1] [i_1])))));
                }
            }
        }
    }
    var_22 = 1693765876723992722;
    #pragma endscop
}
