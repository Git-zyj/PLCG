/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((~41301) + ((var_9 ? 1 : 40053))))) ? -4931 : 138));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (min((min((min(var_9, var_6)), var_7)), ((min(var_4, (arr_3 [i_0] [i_0 + 1]))))));
        var_12 = (min((((((var_2 ? (arr_1 [i_0 - 1]) : 4503599623176192))) ? ((var_7 ? var_9 : -14947)) : ((((arr_3 [15] [i_0]) >= var_4))))), ((min(127, 1)))));
        arr_5 [i_0] = (max((((((-(arr_3 [i_0 + 1] [i_0 + 2])))) ? (var_3 / var_10) : (((max((arr_1 [i_0]), var_5)))))), ((((arr_2 [i_0]) ? ((var_0 ? var_8 : 14932)) : (((arr_3 [i_0] [i_0]) ? var_4 : var_0)))))));
        var_13 = -4171;
    }
    #pragma endscop
}
