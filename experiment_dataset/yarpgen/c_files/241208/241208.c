/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 ^= 18446744073709551595;
        var_12 += ((((arr_0 [i_0]) == ((~(arr_0 [i_0]))))) && (~3793086502));
    }
    var_13 = var_2;
    var_14 -= var_1;
    #pragma endscop
}
