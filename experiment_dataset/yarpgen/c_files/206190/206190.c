/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        arr_2 [i_0] = ((((arr_1 [i_0]) ? ((-94 ? 85 : (arr_0 [i_0]))) : ((-4880 ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
    }
    var_20 ^= ((var_3 ? (((((8028392492568548725 ? var_8 : var_1))) ? (((var_5 ? 79 : var_11))) : -7978793591308979437)) : var_9));
    var_21 = var_7;
    var_22 ^= -1;
    #pragma endscop
}
