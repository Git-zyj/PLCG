/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (-9223372036854775807 - 1);
        var_18 = (arr_0 [i_0]);
    }
    var_19 = min(1766112142, var_4);
    var_20 = 32767;
    #pragma endscop
}
