/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(-var_2, ((min(var_6, var_4)))))) ? ((var_10 ? var_7 : var_11)) : var_6));
    var_14 = var_3;
    var_15 = 1;
    var_16 = (max(((((~var_8) <= var_7))), var_7));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (min((!255), ((~(arr_1 [i_0])))));
        var_18 = -267819499;
        var_19 = (min(var_19, (((var_3 | ((((((arr_0 [i_0]) | -1061154032))) & (min((arr_1 [6]), 255)))))))));
        var_20 = (((max((arr_1 [i_0]), var_4)) - (arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_21 = (arr_3 [i_1] [i_1]);
        var_22 ^= (((((!(1 || 53702)))) + (min((min((arr_3 [i_1 - 3] [i_1]), (arr_2 [0] [i_1]))), 11832))));
        var_23 ^= (arr_3 [i_1 - 1] [i_1 - 2]);
    }
    #pragma endscop
}
