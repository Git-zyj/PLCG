/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] &= 2147483647;
        arr_4 [i_0] = (!18446744073709551608);
    }
    #pragma endscop
}
