/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((23597 ? 23600 : 23597));
        var_10 = (((((var_4 ? var_6 : var_8))) ? (!4294967295) : var_2));
        var_11 *= (~(arr_1 [i_0 - 1] [i_0 - 1]));
        arr_4 [i_0] = (4294967295 ? 4423075632503884576 : -1996632936405769628);
    }
    var_12 = (4294967295 & 4294967295);
    #pragma endscop
}
