/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [2] |= (((arr_0 [i_0] [i_0]) ? (min((arr_0 [i_0] [i_0]), (((arr_1 [6]) ^ (arr_1 [1]))))) : (min((min(var_7, (arr_0 [i_0] [i_0]))), (min((arr_0 [i_0] [i_0]), var_1))))));
        var_10 |= (min((((min(var_9, (arr_1 [1]))) ^ var_2)), ((((((arr_1 [4]) ? var_4 : (arr_1 [0])))) ? (arr_1 [0]) : ((((arr_0 [3] [i_0]) || var_9)))))));
    }
    var_11 = ((((4982581270631256328 ? (min(3042155609, -18145)) : var_6))) ? (max(((max(1174815495, -18145))), -9223372036854775804)) : (((var_3 ? var_1 : var_2))));
    var_12 = (min(var_12, (((~((-2124963781 ? 37755676 : 2124963762)))))));
    var_13 = (max(var_1, var_3));
    var_14 = ((((max((var_6 | var_9), (var_6 & var_6)))) ? var_1 : (((var_6 & var_1) & 31))));
    #pragma endscop
}
