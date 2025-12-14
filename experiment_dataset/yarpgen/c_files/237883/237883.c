/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = (((((arr_0 [i_0 + 2]) || (32748 || var_3))) && (arr_0 [i_0 + 1])));
        var_19 = ((~(((arr_1 [i_0 - 2]) & (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((((~(arr_3 [i_1] [i_1]))) >> (((arr_0 [i_1]) - 56838)))))));
        var_21 *= (arr_0 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_22 = (((((-(arr_1 [i_2])))) ? (arr_6 [i_2] [i_2]) : (arr_6 [3] [8])));
        var_23 = (!(arr_2 [i_2] [4]));
        var_24 = ((-(arr_5 [i_2] [i_2])));
        var_25 = (min(var_25, ((((arr_8 [i_2]) ? ((32745 & (arr_7 [i_2]))) : (arr_7 [i_2]))))));
    }
    var_26 += var_7;
    var_27 = ((var_9 <= (105 % -var_12)));
    var_28 = ((((((18902 ? var_10 : var_0))) ? var_16 : ((var_12 << (var_7 - 30976))))) | ((-var_15 / ((var_5 ? 13263303462363042395 : var_8)))));
    var_29 += (-var_14 / -var_5);
    #pragma endscop
}
