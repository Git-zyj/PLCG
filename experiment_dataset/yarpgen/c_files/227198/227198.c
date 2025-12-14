/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((var_15 ^ (33375 == 18446744073709551615)))), ((max(0, var_7)))));
    var_18 = (min(var_18, ((((!var_10) ? (((max(var_7, var_0)))) : var_14)))));
    var_19 = ((~(~var_0)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (max((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [1])));
        arr_4 [i_0] = (((((((18446744073709551605 + (arr_1 [i_0])))) ? (var_13 - var_12) : (arr_0 [i_0])))) ? (min((arr_1 [i_0]), (max(18446744073709551615, (arr_0 [1]))))) : (((var_16 ? ((var_12 & (arr_0 [i_0]))) : (min(var_1, (arr_2 [i_0])))))));
        var_20 -= 0;
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (max((arr_6 [i_1 - 2] [i_1 - 1]), (((((var_0 ? var_3 : var_16))) ? ((1 ? var_3 : 0)) : (((var_12 ? var_10 : var_1)))))));
        var_21 = ((((max((!var_6), var_16))) || (((((min(var_14, var_1))) ? ((max(var_15, (arr_6 [i_1] [i_1])))) : (var_10 && var_13))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [2] = (((arr_9 [i_2]) >= 1));
        arr_11 [i_2] = 1;
    }
    var_22 = (1 ^ 1060781587);
    #pragma endscop
}
