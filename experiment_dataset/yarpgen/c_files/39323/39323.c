/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(((var_10 ? ((12942028797105871050 ? 554373932 : 24)) : (!11))), ((min(var_9, var_5))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 &= (arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = arr_1 [i_0] [i_0];
    }
    var_20 *= var_5;
    #pragma endscop
}
