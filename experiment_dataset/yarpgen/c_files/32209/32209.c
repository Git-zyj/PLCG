/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = 631;
        arr_4 [i_0] = (((((arr_1 [i_0]) - (arr_1 [i_0])))) ? ((min((var_7 | 1), (((arr_1 [i_0]) ? var_4 : var_4))))) : (arr_0 [i_0]));
        var_17 = (min(var_17, ((((!-19929) ? (min(((var_3 ? var_8 : 18446744073709551615)), -9223372036854775807)) : ((min(((-9223372036854775786 ? (arr_2 [7]) : (arr_0 [i_0]))), (arr_0 [i_0])))))))));
    }
    var_18 += var_4;
    var_19 = var_2;
    #pragma endscop
}
