/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(((var_0 ? 846767201 : 1049738892)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_21 = (max(var_21, ((max(((((((arr_0 [6]) ? (arr_0 [0]) : var_13))) ? (((arr_0 [2]) % (arr_1 [i_0]))) : (min((arr_1 [6]), (arr_1 [i_0 + 2]))))), ((((((arr_0 [0]) ? var_0 : (arr_1 [i_0 + 2])))) ? (846767192 | 16025571944286438752) : 14646)))))));
        var_22 -= ((((~((~(arr_1 [i_0]))))) + (((((((arr_0 [6]) * (arr_1 [i_0 + 2])))) ? -1107 : 1)))));
        var_23 = (arr_1 [i_0]);
    }
    var_24 = var_5;
    #pragma endscop
}
