/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ? (((min((!4294967295), 12)))) : (min(4294967279, -7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = (max((((27108 / 22) * (var_8 < var_4))), (!-24203)));
                var_14 ^= (min(((((var_3 ? var_2 : var_3)))), (min((~var_5), (~var_2)))));
                arr_8 [i_1] = (min((!4294967262), (max((4294967295 ^ 0), 7))));
                arr_9 [9] = var_1;
            }
        }
    }
    var_15 = (max((((var_10 - var_8) ? ((min(var_0, var_3))) : -15155)), (~var_11)));
    var_16 = ((((((var_11 | 4294967279) ? var_11 : 0))) ? (max(((21573 ? 1152921504606846975 : var_12)), var_6)) : (26 && 1)));
    #pragma endscop
}
