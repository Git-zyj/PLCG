/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_1;
    var_17 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (!var_2);
        var_19 |= (arr_1 [i_0]);
    }
    #pragma endscop
}
