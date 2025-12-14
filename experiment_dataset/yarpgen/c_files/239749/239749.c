/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 63305;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = ((var_11 ? ((59452 ? -20666 : 6802107371622319670)) : (arr_1 [i_0])));
        var_14 = (arr_0 [i_0] [i_0]);
        var_15 = (min(var_15, -var_5));
        arr_2 [i_0] = (6802107371622319680 ? -32 : -15475342765307125051);
    }
    var_16 = 4575657221408423936;
    #pragma endscop
}
