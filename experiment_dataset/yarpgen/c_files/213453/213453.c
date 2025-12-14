/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (((max((arr_4 [i_0] [i_1] [i_0]), var_8)) >> (((~var_0) - 1985096996896542800))));
                var_14 *= (arr_0 [19] [1]);
                var_15 = ((var_4 ? (arr_2 [i_0]) : 236851863201143928));
                var_16 = min(var_8, (~var_5));
                arr_6 [i_1] = ((-(min((arr_3 [i_0]), (max(var_4, var_8))))));
            }
        }
    }
    var_17 = (min(var_2, (max((min(var_6, var_2)), var_2))));
    #pragma endscop
}
