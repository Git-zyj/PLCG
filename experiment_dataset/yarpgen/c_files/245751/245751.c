/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((0 ? 0 : (arr_2 [i_0] [i_0])));
        arr_5 [11] = ((((!(((~(arr_3 [i_0])))))) ? ((((!255) / ((var_11 ? var_12 : 245))))) : (max((var_0 * 234), ((var_1 ? var_9 : (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_9 [9] = (!1);
        arr_10 [i_1] = (arr_1 [i_1]);
        var_14 += (max(((max(var_6, (arr_2 [i_1] [i_1])))), 87));
        var_15 += ((((max((var_6 & -31802), ((min(1, var_12)))))) | ((65535 ? var_12 : ((1 & (arr_1 [i_1])))))));
        arr_11 [i_1] = (~9223372036854775807);
    }
    var_16 = ((var_1 ? (((max(var_7, var_0)) ? var_11 : (var_1 / var_3))) : ((min(var_10, var_13)))));
    #pragma endscop
}
