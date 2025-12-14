/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!(!var_1))));
    var_19 = (max(var_19, (((~(-var_12 != -10105))))));
    var_20 = var_0;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = (~var_6);
        arr_3 [i_0] &= (arr_1 [i_0] [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 *= (((((-3719920454789663029 ? (arr_1 [i_1] [i_1]) : var_8))) ? (((!((min(var_13, var_16)))))) : (min(10105, ((min((arr_0 [23]), var_11)))))));
        var_22 = (min(var_22, var_9));
        var_23 = (max(var_23, -1508867015));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_8 [i_2] = ((((arr_0 [i_2]) ? var_10 : (arr_0 [i_2]))) | (((arr_0 [i_2]) | ((-(arr_0 [i_2]))))));
        arr_9 [i_2] = (var_1 == 10093);
    }
    var_24 = (((0 ? var_7 : (var_4 != var_10))));
    #pragma endscop
}
