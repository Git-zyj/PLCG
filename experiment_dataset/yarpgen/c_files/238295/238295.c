/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (-1014393679 > 21844);
                        var_21 = var_14;
                        var_22 = (0 > 0);
                    }
                    var_23 = (max(var_23, var_19));
                }
            }
        }
    }
    var_24 = (max(-512871227, var_5));
    #pragma endscop
}
