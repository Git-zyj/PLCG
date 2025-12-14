/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (4294967168 + var_13);

    /* vectorizable */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_15 = var_11;
        var_16 ^= (((arr_0 [i_0 - 2]) ? 128 : (arr_1 [i_0 - 1] [i_0 - 4])));
    }
    #pragma endscop
}
