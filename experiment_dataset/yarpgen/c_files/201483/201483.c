/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_10 = ((((min((arr_1 [i_0] [i_0 + 3]), (arr_1 [i_0] [i_0 + 3])))) | (max((((arr_1 [24] [i_0]) + (arr_1 [i_0 - 2] [i_0]))), (!280467306)))));
        var_11 = (arr_0 [i_0 + 2]);
        arr_2 [i_0] [i_0] = (((min((arr_0 [i_0]), (arr_0 [i_0 + 3]))) <= (arr_0 [i_0])));
    }
    var_12 = (min(var_3, var_7));
    var_13 = 22;
    #pragma endscop
}
