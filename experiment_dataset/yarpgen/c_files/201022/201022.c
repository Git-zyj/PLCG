/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = ((max((((var_17 / (arr_4 [i_0] [i_0] [i_0])))), (min((arr_0 [i_1]), (arr_9 [i_0] [i_1] [i_2] [i_0]))))));
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_0] = ((~((~(!var_0)))));
                            }
                        }
                    }
                    var_22 = (max(var_6, ((~(max((arr_8 [i_0] [i_0] [i_1] [i_2]), var_16))))));
                    arr_14 [i_0] = (max((arr_2 [i_0]), (((((arr_8 [i_1] [i_0] [i_2] [i_1 - 1]) - var_14)) - (max(var_6, (arr_10 [i_0] [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_23 = (((~(min(var_15, var_3)))));
    var_24 = var_16;
    #pragma endscop
}
