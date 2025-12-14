/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_13 >= var_7) ? ((var_12 ? var_6 : var_3)) : (max(var_3, var_12))))) || ((((((var_4 ? var_0 : var_6))) / (var_3 % var_2))))));
    var_15 = var_4;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(((((arr_1 [i_0]) > (arr_1 [i_0 - 1])))), ((max((((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))), ((max((arr_2 [i_0]), (arr_2 [i_0])))))))));
        arr_3 [14] = (arr_2 [i_0 - 2]);
    }
    var_17 = var_4;
    #pragma endscop
}
