/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = (max(var_3, ((0 ? (min(var_9, var_4)) : 1513126809))));
    var_14 = var_4;
    var_15 = ((max(((var_4 ? var_5 : var_0), 7549174833811906770))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (max(var_16, (((((((5258743121021155520 ? (arr_1 [i_0] [15]) : (arr_0 [i_0] [i_0]))))) ? (((!((max(-126, var_5)))))) : (max((~-126), (((arr_2 [i_0]) ? var_7 : -618823412)))))))));
        var_17 *= min((arr_3 [11] [i_0]), (((((max(14075, 0))) ? (arr_1 [19] [i_0]) : (((!(arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 = (((((~(arr_4 [i_1])))) ? ((127 ? ((min(63, 48))) : (arr_2 [i_1]))) : (((536870911 ? (arr_4 [i_1]) : 1801941343)))));
        var_19 = (((!(arr_3 [i_1] [i_1]))));
    }
    #pragma endscop
}
