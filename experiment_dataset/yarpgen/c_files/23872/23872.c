/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 20908));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 = (((~159) ? var_6 : (((arr_2 [i_0 + 3] [i_1]) ? 8878 : ((88 ? 20907 : -8878))))));
                            var_20 = (((max(var_14, ((min((arr_4 [i_0] [i_1] [i_2 - 2] [i_0]), -26891))))) | (((min(-20914, var_12))))));
                            var_21 |= ((-15 ? 33 : var_12));
                            var_22 = (!((min(var_15, (arr_1 [i_0 + 1])))));
                            var_23 = var_17;
                        }
                    }
                }
                var_24 = (((var_7 + 2147483647) << ((((var_7 ? 20908 : (arr_7 [i_0 - 1]))) - 20908))));
            }
        }
    }
    #pragma endscop
}
