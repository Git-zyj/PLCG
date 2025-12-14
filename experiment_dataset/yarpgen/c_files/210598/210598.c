/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_12 = (min(var_12, ((~(min(((var_6 ? (arr_0 [0]) : var_7)), ((min(232, var_3)))))))));
        arr_2 [i_0 - 1] [6] |= ((((min((arr_1 [i_0 + 4]), 670421615231997322))) ? (((arr_1 [i_0 - 1]) / (arr_1 [i_0 + 2]))) : (min((arr_1 [i_0 + 3]), (arr_1 [i_0 + 3])))));
        var_13 = (max(var_13, ((((min((min((arr_0 [i_0]), 250)), (var_4 && var_2))) != var_10)))));
    }
    #pragma endscop
}
