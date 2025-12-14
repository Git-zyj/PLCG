/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_15 ? (max(var_13, var_2)) : ((((((var_0 ? var_9 : var_13))) ? (!var_5) : (max(var_8, var_13))))));
    var_17 = var_5;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (min((arr_1 [1]), (((((-9223372036854775807 - 1) ? (-9223372036854775807 - 1) : var_14)) % var_4))));
        var_18 = (max(var_18, (((arr_2 [i_0]) ? ((min((arr_0 [1]), (arr_2 [5])))) : (min((((!(arr_0 [4])))), (min(4294967288, (arr_0 [1])))))))));
        var_19 = (((((~((var_3 ? var_6 : (arr_0 [9])))))) ? (min((max(var_12, (arr_0 [i_0]))), (arr_0 [i_0]))) : -2147483647));
    }
    #pragma endscop
}
