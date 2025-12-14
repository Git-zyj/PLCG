/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] &= ((!(((7026554664255305185 ? (arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : 7026554664255305169)))));
                    arr_9 [i_2] = -7026554664255305174;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = var_9;
                                var_19 += (min(((((arr_1 [i_4]) == var_0))), var_14));
                                var_20 = (((((var_6 ? 7026554664255305174 : ((var_8 ? var_11 : (arr_10 [i_0] [i_2])))))) ? var_15 : (max((min(var_3, var_2)), ((max(25, var_2)))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2] = ((var_10 ? var_14 : (((((((arr_4 [i_0] [i_2]) + var_12))) ? (-200518670 + var_16) : var_2)))));
                    var_21 = ((~(((arr_5 [i_2 - 1] [i_2] [i_2] [0]) ? ((max(var_11, var_5))) : (min((arr_10 [i_2] [i_2]), var_14))))));
                }
            }
        }
    }
    var_22 = (min(var_22, (((min(var_13, (min(var_3, var_5))))))));
    var_23 += var_10;
    #pragma endscop
}
