/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_12 ? (((((var_1 + 2147483647) << (var_0 - 167))))) : var_6));
    var_17 = (min((max(var_2, 3247033403)), ((max((~var_13), var_1)))));
    var_18 = 1;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = (min((~4138796067), ((+((var_6 ? (arr_1 [i_0 + 1] [i_0]) : 4138796067))))));
        arr_3 [i_0 + 1] = (arr_2 [i_0]);
    }
    #pragma endscop
}
