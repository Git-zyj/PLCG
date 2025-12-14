/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((11987013808857387047 ? ((max(var_12, var_8))) : (min(var_3, var_14))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 ^= (((!(!var_8))) ? ((var_8 ? (min(7495626628259543915, (arr_0 [9]))) : (((-(arr_1 [i_0] [i_0 + 1])))))) : var_6);
        var_17 = ((!((((arr_1 [i_0 + 1] [i_0]) ? (arr_1 [i_0 - 1] [i_0 - 1]) : 6459730264852164569)))));
        arr_2 [i_0] [i_0] = (!var_8);
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (arr_3 [i_1] [i_1]);
        var_18 = ((var_0 ? 6459730264852164544 : (arr_3 [13] [i_1])));
        arr_6 [i_1] [i_1] = (((var_2 || var_7) ? (((0 / (arr_4 [i_1] [4])))) : ((-((var_12 ? 1810433021 : -3361533318053377812))))));
        var_19 = (((arr_4 [i_1] [i_1]) ? ((((((arr_4 [i_1] [i_1]) ? var_14 : var_2))) ? ((var_3 ? 0 : var_9)) : ((((arr_3 [7] [i_1]) ? var_12 : var_7))))) : ((((var_9 - 255) >> (var_6 - 18446744073496960484))))));
    }
    #pragma endscop
}
