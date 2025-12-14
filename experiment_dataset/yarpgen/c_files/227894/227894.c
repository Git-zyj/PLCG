/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(-1, ((max(1, 0)))))) ? (((!(((var_9 ? var_10 : 1023)))))) : 1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [7]);
        var_12 = ((!(arr_1 [i_0 + 1])));
    }
    #pragma endscop
}
