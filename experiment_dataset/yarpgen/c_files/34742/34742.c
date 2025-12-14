/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((min(var_4, var_2)))));
    var_13 += ((var_5 > ((((var_2 ? var_1 : var_3)) * var_7))));
    var_14 = (min(((((((var_7 ? var_3 : var_7))) ? (var_3 > var_7) : var_4))), ((-var_11 ? (var_9 | var_9) : -var_1))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_15 &= (max((~0), ((238 ? (arr_0 [i_0] [i_0 + 2]) : 32200))));
        arr_2 [i_0] = max((max((((var_4 || (-2147483647 - 1)))), (arr_1 [i_0 - 1]))), (((((arr_1 [i_0]) + 2147483647)) << ((((var_9 ? var_10 : var_11)) - 18446744072424712673)))));
    }
    #pragma endscop
}
