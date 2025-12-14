/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((var_10 ? var_13 : ((min(var_10, var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = (max(var_15, (!65535)));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [10] = -31623;
                    var_19 = (!5952735204427330849);
                    var_20 = ((!(!255)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    var_21 = var_9;
                    var_22 = (((arr_9 [i_0] [i_0 - 2] [i_1 - 3] [i_3 - 1]) >= ((var_16 ? 35683 : var_12))));
                }
            }
        }
    }
    #pragma endscop
}
