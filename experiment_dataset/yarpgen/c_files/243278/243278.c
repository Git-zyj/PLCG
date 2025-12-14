/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = (max((((44 ? 2283539497 : 2011427826))), (arr_1 [i_0])));
        var_22 = ((-((43869 ? ((1 & (arr_2 [i_0 - 1] [i_0 - 1]))) : (max(-427147392, -20223))))));
        var_23 = (((min((arr_1 [i_0]), 1))));
    }
    #pragma endscop
}
