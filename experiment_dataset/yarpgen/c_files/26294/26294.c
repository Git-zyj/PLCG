/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 -= 8388604;
        var_21 *= 314285296;
        var_22 = (((arr_0 [i_0]) == 55728));
    }
    var_23 = (max(var_23, (9830 * var_19)));
    #pragma endscop
}
