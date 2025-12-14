/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = 137;
        var_13 &= (((arr_0 [i_0]) ? (var_5 | var_11) : var_10));
    }
    var_14 = ((var_1 ? var_8 : var_7));
    var_15 = ((((0 ? 50041 : 17186205721546302176)) ^ var_7));
    #pragma endscop
}
