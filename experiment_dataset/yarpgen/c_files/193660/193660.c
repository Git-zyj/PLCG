/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [11] = (var_11 >> 16);
        var_14 = ((8990 ? 1 : 1412));
        var_15 += ((1412 ? (arr_1 [i_0]) : var_12));
    }
    #pragma endscop
}
