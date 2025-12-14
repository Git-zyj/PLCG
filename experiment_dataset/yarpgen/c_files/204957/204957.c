/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = (min(((((!var_0) && ((min(var_17, var_10)))))), ((max(var_11, var_13)))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_20 = 105;
        arr_3 [i_0] = (min((((arr_0 [i_0 - 3]) ? 1 : (~100))), (((((((arr_1 [13]) | var_8))) ? (1 | var_11) : ((var_16 ? 5736 : (arr_2 [i_0]))))))));
    }
    #pragma endscop
}
