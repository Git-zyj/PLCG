/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (max(var_10, (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [2]) : (arr_1 [i_0])))) ? 1958784926 : (arr_0 [i_0] [i_0])));
    }
    var_11 = 1958784918;
    var_12 ^= var_0;
    #pragma endscop
}
