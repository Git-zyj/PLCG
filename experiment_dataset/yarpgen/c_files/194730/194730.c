/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(34682 | 5232)));
                                var_16 = ((var_8 ? (((arr_8 [2] [i_3 + 1] [i_2] [i_1] [i_0]) ? (!7686) : var_0)) : (arr_6 [i_0] [12] [i_0])));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] = (((max((!var_6), (arr_5 [i_0] [i_0] [i_1] [i_2]))) ? (arr_10 [i_0] [i_0] [1] [i_0 + 1]) : var_10));
                }
            }
        }
    }
    var_17 = (max(var_7, (((((var_3 ? var_13 : var_7))) ? ((60253 ? var_7 : var_6)) : ((max(-9697, -27939)))))));
    var_18 = var_1;
    #pragma endscop
}
