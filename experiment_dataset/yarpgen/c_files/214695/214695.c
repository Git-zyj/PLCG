/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0])))) / ((255 ? 262143 : 0))));
        arr_2 [i_0] [14] = ((18446744073709551615 ? ((~(((arr_0 [i_0]) ? var_7 : 18446744073709551590)))) : (max(((var_5 ? (arr_0 [i_0]) : var_13)), 23))));
    }
    var_20 = ((((8 | (!var_10)))) ? (var_2 % 18446744073709551606) : ((((var_6 ? var_14 : 18446744073709551597)) * ((1 ? var_14 : 0)))));
    #pragma endscop
}
