/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = 46;

                /* vectorizable */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_0] = ((32443 * (arr_9 [i_2 - 3] [i_1])));
                    arr_11 [i_0 - 1] [i_1] [i_1] [i_0 - 1] = ((-47 ? 28 : -25));
                }
                var_18 = (max(var_18, (arr_1 [i_1 - 1] [i_1])));
            }
        }
    }
    var_19 = (max(-45, var_3));
    var_20 = (max(var_20, var_3));
    #pragma endscop
}
