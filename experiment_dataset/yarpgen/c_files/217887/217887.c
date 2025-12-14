/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((-1722376589 ? -911727593 : ((-1756427217 ? 11 : var_0))))))));
    var_18 = 243;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (min(var_19, 2));
        arr_2 [i_0] = (((((3418770358 ? (((var_7 ? var_2 : 1699))) : (var_16 / var_4)))) ? ((max(var_10, 19920))) : (((1889627531 ? (min(var_6, var_14)) : (var_4 - 252))))));
        var_20 &= (max(((-((var_6 ? 226 : (arr_0 [i_0]))))), ((-(max(10371657546099556625, var_10))))));
    }
    var_21 = 3511154904;
    #pragma endscop
}
