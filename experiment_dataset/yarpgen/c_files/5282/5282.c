/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_0 < var_4);

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_13 = var_6;
        arr_2 [i_0] = ((((min((max(106, 8829224659036522919)), (arr_1 [i_0])))) ? (((max(32767, 32765)))) : (max(((min(32748, -32767))), var_9))));
    }

    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_14 = (min(var_14, (((!(((var_11 ? var_10 : (~8829224659036522900)))))))));
        var_15 = (min(var_15, (((9617519414673028709 ? -32453 : 106)))));
        var_16 += ((~(min(((max((arr_3 [i_1]), (arr_4 [2])))), -var_7))));
        var_17 = (min(var_17, (((-(((var_9 || var_2) ? 2 : (arr_4 [6]))))))));
        var_18 = ((!((((!-32453) ? var_1 : 55)))));
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] = (arr_5 [i_2]);
        var_19 = (((((((32761 ? var_2 : var_8))) ? (~-4) : ((var_4 ? (arr_6 [i_2]) : -23640)))) & var_6));
        var_20 = (~40179);
        var_21 = (min((((-((max((arr_6 [i_2]), (arr_6 [i_2]))))))), ((((var_3 ? var_7 : (arr_7 [i_2] [i_2]))) | var_7))));
        var_22 += (!var_11);
    }
    #pragma endscop
}
