/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = -1344883345953299030;
        arr_2 [i_0] [i_0] = (-3130881571329903027 ^ 3130881571329903031);
        arr_3 [i_0] = 2147483647;
    }
    var_15 = var_5;
    #pragma endscop
}
