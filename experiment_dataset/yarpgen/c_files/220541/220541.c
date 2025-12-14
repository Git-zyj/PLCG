/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = -1;
        var_19 = (min(var_19, (((var_7 ? (-10 || 124) : (arr_2 [i_0 - 2]))))));
        arr_5 [i_0] = (arr_1 [i_0 + 2]);
    }
    var_20 += var_17;
    #pragma endscop
}
