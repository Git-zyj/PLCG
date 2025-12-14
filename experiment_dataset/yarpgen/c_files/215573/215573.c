/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_20 = ((((+((var_16 ? (arr_1 [i_0]) : (arr_1 [i_0]))))) > ((max(1, (!var_4))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_21 += (min((max(((4041433574 ? 1686025998 : var_14)), -783072371)), var_2));
            var_22 = ((-1686025991 ? var_16 : ((1686025998 ? ((var_19 ? var_4 : (arr_3 [i_0]))) : (min(1686025990, (arr_3 [i_0])))))));
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_23 = (((((arr_0 [i_0 + 1]) | (arr_2 [i_0 - 2] [i_0 - 2] [i_2]))) >= ((((arr_2 [i_0] [i_2 - 1] [4]) ? (arr_2 [0] [i_2] [i_0]) : -510413474)))));
            arr_10 [i_0] = var_7;
        }
        var_24 = (max((((!1) ? -1 : var_10)), ((((max(1651833322, var_13)) > (arr_6 [i_0 + 2]))))));
    }
    var_25 = 253533721;
    #pragma endscop
}
