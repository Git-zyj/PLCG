/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = arr_0 [i_0] [i_0];
        arr_4 [i_0] = (max(((min(577121629, var_12))), (max((((arr_1 [i_0] [4]) ? (arr_1 [i_0] [i_0]) : (arr_3 [4]))), (arr_2 [1])))));
    }
    #pragma endscop
}
