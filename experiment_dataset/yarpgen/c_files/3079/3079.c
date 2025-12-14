/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= max(((-var_1 ? (min(var_6, var_7)) : var_4)), (~2074766888445220796));

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((((~var_6) ? var_3 : ((18446744073709551603 ? 15862621528238215196 : -2074766888445220796))))) ? (((!var_2) ? (var_10 > 2074766888445220796) : var_1)) : ((-9223372036854775794 ? 14093668233393498694 : (max(var_8, var_2)))));
        var_18 *= ((!(((((min(var_12, (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? var_10 : var_1)) : (((arr_1 [i_0]) ? (arr_1 [i_0 - 1]) : var_12)))))));
    }
    #pragma endscop
}
