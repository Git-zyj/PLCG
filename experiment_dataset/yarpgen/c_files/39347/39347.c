/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 250;
    var_17 = (-2147483647 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] = 676078918;
                var_18 = 3;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] = -733394663381149402;
                            var_19 = 5;
                        }
                    }
                }
                arr_14 [i_1] [i_1] = 1884086996924529120;
            }
        }
    }
    var_20 = -1051755513;
    #pragma endscop
}
