/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 + 3] [i_2] [i_3] [i_0] = (min((max((var_0 / var_3), (var_12 * var_9))), ((min((var_8 / var_13), (var_11 / var_10))))));
                                var_15 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 &= var_9;
    var_17 = (min(var_2, ((((max(var_12, var_1)) != (var_3 ^ var_2))))));
    #pragma endscop
}
