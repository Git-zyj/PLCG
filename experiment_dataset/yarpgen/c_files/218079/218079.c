/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (3 ? ((((var_10 == var_3) == ((-1754625623 ? 1 : 1751884438))))) : var_12);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [13] = ((((arr_1 [i_0]) == (arr_1 [9]))) ? (arr_2 [3] [13]) : ((((997260388 ? (arr_1 [6]) : var_2)) - (arr_1 [3]))));
        var_17 = (arr_1 [0]);
    }
    #pragma endscop
}
