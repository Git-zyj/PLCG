/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = var_13;
        arr_2 [i_0] = ((101 * ((24 ? (((-1 ? -2058116345 : 106))) : (arr_1 [i_0] [i_0])))));
    }
    var_17 = ((((max((max(var_5, var_11)), var_5))) ? 8191 : var_1));
    #pragma endscop
}
