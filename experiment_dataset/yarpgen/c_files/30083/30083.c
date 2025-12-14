/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!(((1 ? var_10 : var_0))))) ? (((2265464972 ? 255 : 1))) : ((~(~var_12)))));
    var_19 = (((((((225 ? -1018361597 : var_14)) % (~225)))) ? (((var_13 || -421819324) ? (15342612534374338511 | 225) : (3083156962 & -27230))) : (((((18010000462970880 ? var_5 : var_14))) ? var_11 : (19 - var_17)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_20 = ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_1))) ? (15500142727179567751 % 97) : (((180 ? 159 : 2921658119)))));
        var_21 = (max(var_21, ((((150 || var_15) ? (((arr_0 [i_0 + 2]) % var_5)) : ((1 ? var_11 : (arr_1 [i_0]))))))));
    }
    #pragma endscop
}
