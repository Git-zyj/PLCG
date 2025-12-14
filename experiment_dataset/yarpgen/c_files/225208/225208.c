/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (65535 - -1);
                var_21 = ((-(arr_0 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (((arr_12 [i_3] [i_0] [i_4 - 2] [i_4 - 1] [i_4 - 2]) ? (min(var_17, (((arr_10 [i_0] [i_1] [i_1] [i_3]) | var_2)))) : ((min((arr_12 [i_3] [i_4] [i_4 - 1] [i_4 - 2] [i_3]), (arr_12 [i_3] [i_4] [i_4 - 2] [i_4 - 2] [i_3]))))));
                                var_23 = (max((((arr_6 [i_4] [i_4 - 2]) ? (var_0 / var_15) : (((var_2 ? var_16 : 0))))), (((-(arr_7 [2]))))));
                                var_24 = 65521;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_12;
    var_26 = (max(var_1, ((16776960 ? -7055365517681821354 : 0))));
    #pragma endscop
}
