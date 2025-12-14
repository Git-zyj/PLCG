/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (!7478369698589554676);
                var_12 = ((234881024 - (arr_3 [i_0 - 1])));
            }
        }
    }
    var_13 = var_8;
    var_14 = ((-16 ? ((0 ? (min(234880993, var_7)) : -340422132)) : (((-(~1))))));
    #pragma endscop
}
