/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(var_3, var_16))) ? (((((((var_5 ? var_15 : var_9))) < (max(18446744073709551595, 3469640972333912615)))))) : (max(((var_13 >> (var_12 + 2029518539))), (var_13 < var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) != (~var_2)));
        var_18 -= (((var_8 & -6558) & (arr_2 [i_0])));
        var_19 = ((var_16 ? var_1 : (var_14 != 3469640972333912615)));
        arr_4 [i_0] [i_0] = -var_0;
    }
    var_20 ^= var_12;
    var_21 = var_11;
    #pragma endscop
}
