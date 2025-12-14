/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -8952;
    var_12 = (!var_5);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 |= (max((((min(73, 52)))), var_7));
                                var_14 = (min(var_14, (((-(22131 % -103))))));
                            }
                        }
                    }
                    arr_11 [i_0] [19] [i_0] = ((max(12, 1)));
                    var_15 = (max(((-22127 ? var_2 : (!var_8))), (arr_2 [i_2] [i_0])));
                    var_16 = (min(var_16, (((((((arr_6 [i_0 + 2] [i_0 - 1]) && (arr_0 [i_2])))) | ((-((var_8 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [21]) : var_4)))))))));
                    var_17 = ((((((arr_8 [i_0] [i_1] [i_1 + 2] [i_0] [i_0 - 1]) & -var_10))) ? ((min(((var_0 ? var_8 : var_10)), ((var_0 ? var_3 : (arr_5 [i_0])))))) : (max((((arr_10 [i_0] [i_0 + 1] [i_2] [i_1] [i_0] [4] [15]) ? var_5 : -119)), -1))));
                }
            }
        }
    }
    var_18 = ((+(((22126 >= 14) ? -14 : -103))));
    #pragma endscop
}
