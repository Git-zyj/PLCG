/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = var_7;
    var_16 += var_1;
    var_17 = (max(var_17, ((min(var_12, (min(var_13, var_4)))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [4] |= var_9;
        var_18 -= ((((4 / (arr_0 [i_0 - 2]))) << ((((-4 ? (arr_0 [i_0 + 1]) : (((arr_1 [i_0]) | 240)))) - 30917))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 += 22;
        var_20 = (((arr_5 [i_1] [i_1]) ? ((min(23107, 15))) : ((((arr_0 [i_1]) && (((-(arr_4 [i_1] [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_21 = (((var_3 > (arr_4 [0] [1]))));
        var_22 = ((((!(arr_5 [i_2] [i_2]))) || (((~((4137875410 ? 18446744073709551609 : var_10)))))));
        var_23 = 1;
    }
    #pragma endscop
}
