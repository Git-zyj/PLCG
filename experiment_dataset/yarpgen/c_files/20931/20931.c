/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (~1782);
        var_18 = ((((!(arr_0 [i_0])))));
        arr_3 [i_0] |= (min(45237, 8730313381826302458));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_19 &= (max(var_2, (168 && 1334144711)));
        var_20 |= ((-((min((arr_6 [i_1 - 1]), var_7)))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_21 = (arr_5 [19]);
        arr_10 [i_2] [i_2] = ((var_14 || (((var_6 ? var_2 : (max(-340362491, var_2)))))));
        var_22 = var_0;
        var_23 = (max((arr_0 [i_2]), (((var_17 > (((arr_7 [i_2]) % (arr_8 [0]))))))));
        var_24 = (((arr_0 [i_2]) >= (((var_10 || (var_5 & var_16))))));
    }
    var_25 = ((94 || (((var_1 * ((var_12 ? var_16 : var_9)))))));
    var_26 = (max((((-9223372036854775799 ? 20209 : var_15))), var_6));
    var_27 |= (((-(var_5 / var_7))) ^ var_8);
    var_28 = (((((-var_8 ? (var_5 + var_3) : (var_2 + var_13)))) ? (max(1, (((var_13 ? var_8 : var_8))))) : (max(((var_3 ? var_13 : var_4)), ((max(4600131476026050121, 3934667869991532768)))))));
    #pragma endscop
}
