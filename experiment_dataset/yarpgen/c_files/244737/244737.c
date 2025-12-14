/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-((1 ? var_11 : var_12)))) != (!4288942663)));
    var_15 += (min((((max(var_7, var_3)))), var_12));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 += (arr_1 [i_0]);
        var_17 *= ((var_10 ? (((((arr_0 [i_0]) - var_13)))) : (max(((6024633 ? var_1 : 1)), ((1 ? var_13 : var_2))))));
    }
    #pragma endscop
}
