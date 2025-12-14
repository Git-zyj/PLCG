/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max(((((min(612990698, 6655403133692127988)) > ((max(3681976600, 3640462399)))))), ((~(min(1516750943, -62))))));
        arr_3 [8] |= (!-75);
        var_16 = (!var_11);
        var_17 = 12001678753158992576;
        arr_4 [i_0] [i_0] = ((var_6 ? var_15 : (min(((-91 ? 32767 : (arr_1 [15]))), var_2))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = arr_7 [i_1];
        arr_9 [i_1] = (i_1 % 2 == zero) ? ((((!44813) << ((((var_8 ? (arr_7 [i_1]) : var_10)) - 14225))))) : ((((!44813) << ((((((var_8 ? (arr_7 [i_1]) : var_10)) - 14225)) - 25701)))));
        arr_10 [i_1] = (((((((arr_0 [i_1 + 1]) < (arr_0 [i_1 + 2]))))) | (min((arr_6 [i_1]), var_0))));
    }
    var_18 = var_12;
    #pragma endscop
}
