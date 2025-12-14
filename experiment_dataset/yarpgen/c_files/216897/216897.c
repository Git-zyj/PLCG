/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = ((((min(((var_2 ? var_0 : var_8)), ((max(var_8, (arr_0 [1]))))))) % (min((arr_2 [i_0]), (max(var_7, (arr_2 [i_0])))))));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = (((min(12019100254499055610, 1)) == 4149));
            arr_8 [i_1] = var_0;
            var_14 = (((arr_5 [2] [i_1]) ? (arr_3 [i_1] [i_0]) : var_6));
            arr_9 [i_0] = var_6;
            arr_10 [i_0] [i_1] = (max((arr_3 [i_0] [i_1]), (min(var_4, (arr_3 [i_1 + 1] [i_1])))));
        }
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            var_15 -= ((arr_3 [i_2] [i_2]) ? (((((((var_12 ? var_0 : (arr_0 [i_2 - 3])))) != (((arr_3 [i_0] [i_0]) + var_1)))))) : ((+((var_12 ? (arr_12 [i_0]) : var_7)))));
            arr_14 [i_0] = min((max(var_5, (((arr_3 [i_0] [i_2]) ? (arr_2 [i_2]) : (arr_3 [i_0] [i_2]))))), (arr_3 [i_0] [i_0]));
            arr_15 [i_0] = var_3;
        }
        arr_16 [i_0] = var_7;
        var_16 -= (arr_5 [i_0] [i_0]);

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            arr_19 [i_3] [i_0] [i_0] &= (((arr_18 [i_3 - 2] [i_3] [i_3 - 2]) ? (((arr_0 [i_3 - 2]) | (arr_0 [i_3 - 1]))) : 3));
            var_17 = var_0;
            arr_20 [i_3] = var_1;
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_27 [i_4] [i_5] = (((arr_23 [i_5]) ? ((((((arr_21 [i_5]) ? (arr_26 [i_4] [i_5] [i_4]) : 252))) ? (((var_3 ? var_1 : var_5))) : var_7)) : (arr_24 [i_5] [i_5] [i_4])));
            var_18 = (min(var_18, ((min((max(((12019100254499055610 ? var_4 : 252)), -45)), 0)))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_19 = 13260750024786470182;
            arr_31 [i_4] [i_6] [i_4] = (((((((var_7 ? var_11 : var_0))) && ((max((arr_21 [i_4]), (arr_30 [i_6] [i_6] [i_4])))))) ? var_8 : ((-(min(var_5, (arr_26 [7] [9] [i_6])))))));
            arr_32 [i_6] [i_6] [i_4] = 127;
            var_20 -= var_6;
        }
        arr_33 [i_4] = max(0, ((((min(var_0, 1))) ? (arr_22 [i_4]) : (var_0 / var_1))));
        var_21 = -1691612809;
        arr_34 [i_4] = (arr_28 [i_4] [i_4]);
    }

    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        var_22 = (((arr_35 [i_7 + 1]) == 1191269736));
        arr_37 [i_7] = (((((!(arr_26 [i_7] [i_7 - 2] [i_7])))) * var_12));
    }
    var_23 = var_13;
    var_24 = (var_1 ? var_5 : 11395156153316390464);
    #pragma endscop
}
