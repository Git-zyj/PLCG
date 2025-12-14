/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (max(var_10, (((!(arr_0 [i_0] [i_0]))))));
                var_12 = (((arr_4 [i_1] [i_1] [i_1]) <= ((min(-1, 166)))));
                arr_6 [i_0] = ((!(arr_4 [i_0] [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 = ((((((max((arr_1 [1]), (arr_12 [i_3] [i_2] [i_2] [i_1] [i_0]))) + (((arr_0 [i_2] [i_1]) ? var_3 : var_5))))) ? ((192 ? ((-4395442901759877018 ? 7762069392801730129 : 9650071695117004710)) : (arr_3 [i_0] [i_0]))) : 16387095482973833112));
                            var_14 = var_1;
                            var_15 = (min(var_15, (((~(((7407101537031651965 != ((((-9223372036854775807 - 1) + 156)))))))))));
                            var_16 = (max(((min(192, var_5))), var_2));
                        }
                    }
                }
                var_17 = arr_0 [i_1] [i_1 + 1];
            }
        }
    }
    var_18 = ((((((((var_10 ? var_3 : var_9))) ? var_10 : (max(var_5, var_6))))) ? var_8 : ((min(var_6, ((max(-112, var_2))))))));
    #pragma endscop
}
