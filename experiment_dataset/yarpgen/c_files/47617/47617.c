/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_7, (min(var_2, 0))));
    var_13 = var_2;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [19] [20] = var_9;
        var_14 = (min(var_8, var_11));
        arr_4 [i_0] = var_8;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                var_15 += (min(((min(var_6, var_6))), 33062));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_16 &= 22;
                            var_17 = (min(var_7, 1350198059));
                            var_18 += (min(1, var_4));
                            var_19 = (min(var_19, var_4));
                        }
                    }
                }
                var_20 = 79;
            }
        }
    }
    #pragma endscop
}
