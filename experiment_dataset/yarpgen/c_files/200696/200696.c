/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((+((var_2 * (((var_10 ? (arr_0 [i_0] [i_0]) : var_3)))))));
        arr_3 [i_0] [i_0] = var_13;
        arr_4 [i_0] = ((((min(var_12, var_0))) || ((!(arr_0 [i_0] [i_0])))));
        arr_5 [i_0] [i_0] = var_14;
    }
    var_15 = ((var_13 * (((min(var_2, var_6)) * var_3))));
    var_16 = ((var_3 && (((~((var_10 << (var_2 - 16985791535268589454))))))));
    #pragma endscop
}
