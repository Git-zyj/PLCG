/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? 181 : (arr_0 [i_0])));
        var_18 = (20538 + var_0);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 = var_4;
        var_20 *= (((max((((arr_3 [i_1]) | var_7)), (max(var_0, 9616459533587734796)))) & (((((var_16 ? var_0 : (arr_3 [i_1]))) * (arr_3 [19]))))));
        arr_5 [i_1] [11] = (((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))) >= ((((!(var_7 == var_4)))))));
        arr_6 [i_1] [i_1] = (((((~2221693190207561370) + (arr_4 [8] [i_1])))) ? ((((var_9 != (((451612803 ? var_1 : var_10))))))) : (max((arr_3 [i_1]), (arr_4 [i_1] [i_1]))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_9 [2] [i_2] = (min((((var_12 + (arr_8 [i_2])))), ((-((-1570961984 / (arr_8 [i_2])))))));
        arr_10 [i_2] = (i_2 % 2 == zero) ? (((((((1570961983 <= 3843354492) >> (((arr_8 [i_2]) - 38))))) ? (((((-(arr_0 [i_2])))) ? (var_12 % var_8) : (arr_7 [i_2 - 1]))) : (~var_9)))) : (((((((1570961983 <= 3843354492) >> (((((arr_8 [i_2]) - 38)) - 47))))) ? (((((-(arr_0 [i_2])))) ? (var_12 % var_8) : (arr_7 [i_2 - 1]))) : (~var_9))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_15 [i_3] |= ((((3843354492 + (arr_13 [13] [i_3]))) % (((~(arr_3 [i_3]))))));
        var_21 -= (min((((min(var_12, 1570961984)) < (var_9 % 82))), ((!((min(1570961990, 3538)))))));
        arr_16 [i_3] = (arr_12 [20]);
    }
    var_22 = var_16;
    var_23 = ((((var_7 / var_4) + (var_1 / var_14))));
    var_24 = (!var_1);
    #pragma endscop
}
