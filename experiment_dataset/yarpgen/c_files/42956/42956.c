/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_6 ? var_7 : (((var_17 ? var_0 : 18446744073709551609))));
    var_19 = ((((var_11 ? var_1 : (max(var_15, var_0)))) >= 6982271845702571372));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = ((~((-(max(1, (arr_1 [i_0])))))));
        arr_4 [i_0] [13] = ((+(max(((((arr_3 [i_0] [i_0]) ? var_16 : var_10))), (~18446744073709551593)))));
    }
    #pragma endscop
}
