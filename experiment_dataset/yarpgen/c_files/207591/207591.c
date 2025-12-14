/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -65535;
        arr_4 [i_0] = 1;
    }
    var_20 = (max(1, 1));
    #pragma endscop
}
