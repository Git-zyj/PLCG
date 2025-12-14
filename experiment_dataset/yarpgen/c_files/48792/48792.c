/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_0;
    var_19 = var_2;
    var_20 = (max((min(((min(var_4, var_4))), var_1)), ((max(var_7, ((max(var_15, var_15))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] [1] = (min(var_0, (max(var_15, var_13))));
                            arr_10 [i_1] = var_7;
                            var_21 ^= max((min(var_2, ((max(var_14, var_0))))), ((min((max(var_13, var_0)), var_0))));
                            var_22 *= max(var_14, (max(var_8, ((min(var_0, var_13))))));
                            var_23 ^= var_1;
                        }
                    }
                }
                var_24 = var_13;
            }
        }
    }
    var_25 ^= (max(var_7, ((min(var_3, (max(var_16, var_0)))))));
    #pragma endscop
}
