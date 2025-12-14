/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (4294967295 > 127);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [0] = (((arr_1 [2]) >> (var_1 - 14250)));
        arr_3 [i_0] = ((var_9 ^ (((0 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_4 [2] [2] = (arr_1 [10]);
        arr_5 [12] = (var_15 + 125);
    }
    #pragma endscop
}
