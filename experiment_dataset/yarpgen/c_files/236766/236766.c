/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_0));
    var_13 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (max(var_14, (!33552384)));
        arr_3 [i_0] [i_0] &= (~13471);
    }
    #pragma endscop
}
