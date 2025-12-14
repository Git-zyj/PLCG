/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (min(var_16, ((+(((arr_4 [i_0] [i_0]) - (arr_1 [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, var_4));
                            var_19 = (min(var_19, (arr_8 [i_0 - 1] [i_0 - 1] [16] [16] [i_0 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_20 &= ((!((min(((var_6 ? var_16 : 5902241738245063652)), (~var_11))))));
    #pragma endscop
}
