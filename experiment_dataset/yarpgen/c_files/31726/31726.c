/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((var_9 ? var_12 : ((((((var_4 ? -1 : -1133624534)) + 2147483647)) << (((var_3 + 1340912717) - 19))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (min(1956916877, -1));
        var_18 = ((((((arr_0 [i_0]) ? (max(-1133624534, (arr_1 [i_0]))) : (arr_1 [i_0])))) ? (((((7 ? 1 : -5))) ? 5 : ((min(1, (arr_1 [i_0])))))) : (arr_1 [i_0])));
    }
    var_19 = ((~((var_6 >> ((((-571347395 ? -1284862215 : var_12)) + 1284862241))))));
    #pragma endscop
}
