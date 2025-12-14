/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] = max(var_14, ((-((min(var_0, var_4))))));
                            var_17 ^= (min(-1474410381, ((-((min(var_2, var_4)))))));
                        }
                    }
                }
                var_18 = (max(1474410359, (max(1474410381, var_14))));
                arr_12 [i_0] [i_0] [i_1] = (var_0 && var_7);
            }
        }
    }
    var_19 = (max((max(var_7, (min(var_10, var_12)))), var_6));
    var_20 = -227;
    #pragma endscop
}
