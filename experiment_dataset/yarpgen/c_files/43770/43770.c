/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 22481;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_11;
                arr_5 [9] [i_0] = max((min((!var_13), 9930442819365969891)), (((((~(arr_1 [i_0] [i_0]))) >= ((min(var_19, 6284503684527672665)))))));
            }
        }
    }
    #pragma endscop
}
