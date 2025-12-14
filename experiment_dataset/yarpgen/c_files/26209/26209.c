/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~(((((var_18 ? var_15 : (arr_2 [i_0]))) != (!var_3)))));
        var_19 = (max((((((~(-32767 - 1)))) ? var_15 : (((-21340 ? (arr_0 [i_0]) : var_5))))), var_7));
        arr_4 [i_0] = (((((-var_4 + (arr_1 [i_0])))) ? (((arr_2 [i_0]) ? 1 : var_2)) : ((((var_17 < 1099511627775) ? var_11 : ((max(-69, (arr_2 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 = (min((((arr_7 [i_1]) / (arr_7 [i_1]))), ((max(1, var_8)))));
        arr_8 [i_1] = (arr_7 [i_1]);

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 = ((32745 ? var_12 : (((arr_6 [i_1] [i_2]) * var_17))));
            var_22 = (((!(arr_11 [i_1]))));
        }
    }
    var_23 = -32764;
    #pragma endscop
}
