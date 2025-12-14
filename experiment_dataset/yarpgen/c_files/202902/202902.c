/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = ((var_8 / ((min(1, 3519073287)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_2] [i_2] [i_1] [i_0] = (min(var_1, (~5260)));
                            var_13 = (arr_6 [i_3] [12] [i_0]);
                            var_14 = (-((min((arr_0 [i_0 - 1]), 27573))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (var_7 + 1307325431);
    #pragma endscop
}
