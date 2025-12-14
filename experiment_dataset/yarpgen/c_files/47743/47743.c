/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 += (min(((((1357443205 ? -108 : (arr_1 [i_0]))))), ((~(min((arr_0 [i_0]), 4294967286))))));
        arr_3 [i_0] = 4294967292;
        var_18 = ((176061239 ? var_4 : -176061239));
    }
    var_19 = 1;
    var_20 += var_12;
    #pragma endscop
}
