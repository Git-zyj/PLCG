/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = ((-(((arr_2 [i_0]) ? 13 : var_7))));
        arr_5 [i_0] [i_0] = ((~(arr_1 [1])));
        var_11 ^= ((-(max(((1 ? (arr_2 [i_0]) : 0)), 63983))));
    }
    var_12 = (max(var_12, (36 == 15969)));
    #pragma endscop
}
