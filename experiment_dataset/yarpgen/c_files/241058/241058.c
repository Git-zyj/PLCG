/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_20 = ((~(~5083229825683427936)));
        var_21 += var_5;
        var_22 = (min(var_22, ((((-var_19 ? ((min(25501, 220)) : 34)))))));
        var_23 = (max(((max((min(-1808922717, var_15)), (var_4 <= 127)))), ((5083229825683427918 ? ((13363514248026123683 >> (13363514248026123700 - 13363514248026123673))) : 217))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_24 = ((~((25501 << (((arr_4 [i_1 + 4]) + 3422867554426946070))))));
        var_25 &= (max((25518 > 14073600458693346801), -1134907106097364992));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2] = (~var_14);
        arr_9 [0] [0] &= ((-25502 ? (arr_1 [i_2]) : 737080820969161158));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_26 *= 0;
        arr_12 [1] &= (((var_12 > var_4) ? -180 : ((((-25501 ? 7251086510589378156 : 1166317897))))));
        var_27 = (max(var_27, (((64 ? ((((var_14 ? var_11 : var_3)) / var_6)) : var_6)))));
    }
    var_28 = min((((!((max(var_3, var_4)))))), ((-var_16 ? var_13 : var_7)));
    var_29 = ((var_2 ? (((((((729135574010919052 ? var_7 : 1))) > ((var_13 ? 1456806360 : 0)))))) : var_12));
    #pragma endscop
}
