/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(var_6, var_16));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 -= (arr_2 [i_0]);
        var_20 = -82;
        var_21 = (min(var_21, (146 && -64)));
    }
    #pragma endscop
}
