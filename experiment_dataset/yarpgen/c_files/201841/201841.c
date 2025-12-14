/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = ((-(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = 17200647555585944516;
    }
    var_22 = ((-(((((125 ? var_17 : var_5))) ? 177 : var_17))));
    #pragma endscop
}
