/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (min(((((min(23, var_6)) < var_6))), ((((max(var_6, var_0))) ? ((var_6 ? var_10 : var_6)) : (min(var_10, var_6))))));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        var_14 &= ((((min((arr_0 [i_0 + 1]), (arr_3 [i_0 - 3])))) ? (arr_3 [i_0 + 1]) : var_6));
        var_15 -= ((!(((((min((arr_3 [i_0]), (arr_2 [1])))) ? var_9 : (min((arr_0 [i_0]), (arr_2 [2]))))))));
        arr_5 [i_0] = min((max(((-(arr_0 [i_0]))), ((var_7 ? var_8 : (arr_2 [i_0 + 1]))))), (max((min(var_6, var_0)), ((1687559687 ? var_1 : (arr_1 [2]))))));
        arr_6 [i_0 + 1] [i_0 + 1] = (arr_3 [i_0]);
    }
    #pragma endscop
}
