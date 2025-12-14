/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (max(65535, 53));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = 65535;
        var_16 = ((2577366994 ? var_0 : 1));
    }
    #pragma endscop
}
