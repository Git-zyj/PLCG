/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_13 = (min(var_13, ((min((((1 ? (!var_11) : ((max(var_10, (arr_1 [i_0]))))))), var_8)))));
        var_14 = (min(4294967295, (((~(arr_1 [i_0 + 2]))))));
        var_15 -= ((((((arr_1 [i_0 + 1]) * var_7))) ? (((arr_2 [10] [i_0 + 3]) ? ((1 ? 1819773003 : var_11)) : (55 % -49))) : ((((((arr_1 [i_0]) ? var_7 : (arr_1 [i_0]))) * 1234282862)))));
    }
    #pragma endscop
}
