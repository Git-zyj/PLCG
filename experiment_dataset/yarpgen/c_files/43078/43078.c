/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((arr_1 [i_0] [i_0]) ? (((arr_0 [5]) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0] [i_0 + 1]))) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = (max((((arr_1 [i_0] [i_0]) || ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [14])))))), ((((((arr_1 [i_0] [i_0 - 3]) ? (arr_0 [i_0 - 3]) : (arr_1 [i_0] [i_0])))) || (arr_1 [i_0] [i_0])))));
    }
    var_18 = var_5;
    #pragma endscop
}
