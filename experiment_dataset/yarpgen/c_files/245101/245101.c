/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = 491405761;
        var_19 |= (!2229637276);
        var_20 = 48483;
        arr_5 [2] = 48472;
    }
    var_21 = 0;
    var_22 = (max(((48483 ? (83 & 1073741823) : var_6)), var_8));
    #pragma endscop
}
