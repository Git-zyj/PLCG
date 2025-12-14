/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((1 ? -872553595 : (arr_1 [i_0])));
        var_17 = (max(var_17, -4696879501276941861));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                arr_10 [i_1 + 2] = ((-(max(((~(arr_8 [i_1] [6] [6]))), (!32736)))));
                arr_11 [i_1] [i_1] = (min((min(6730342754245060755, (!-4696879501276941871))), (((arr_9 [i_1] [2] [i_2]) ? 4696879501276941847 : (max(6730342754245060764, 4696879501276941853))))));
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
