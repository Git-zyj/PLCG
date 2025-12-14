/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0]) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : ((((arr_1 [i_0]) ? (arr_0 [i_0]) : 117)))));
        arr_2 [i_0] = (((min(((var_8 || (arr_0 [i_0])), ((var_2 && (arr_0 [i_0]))))))));
        var_13 = (((var_3 ? var_2 : 59901)));
        var_14 = (min(var_14, var_1));
    }
    var_15 = (max(var_15, ((max(((((max(-26911, var_7))) ^ 43388)), (!-1592510443))))));
    var_16 = (((((302443907 ? var_10 : var_1))) ^ var_0));
    var_17 = var_7;
    #pragma endscop
}
