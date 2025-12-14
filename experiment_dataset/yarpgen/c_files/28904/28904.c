/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = ((arr_0 [i_0]) || (arr_1 [i_0] [i_0]));
        var_11 = ((var_8 != (arr_1 [10] [i_0])));
        var_12 = (max(var_12, ((((((var_0 % (arr_1 [i_0] [i_0])))) <= (var_4 ^ var_5))))));
        arr_2 [i_0] = (((arr_1 [2] [i_0]) * 74));
        var_13 ^= (arr_0 [i_0]);
    }
    var_14 = (max(1527699364623714959, ((((!18446744073709551610) ^ -var_9)))));
    #pragma endscop
}
