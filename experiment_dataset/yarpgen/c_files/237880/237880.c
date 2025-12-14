/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~((var_3 ? var_10 : 127)))));
    var_17 = ((-6587750915176720624 ? (min(var_1, (min(211, 1446784587687966046)))) : (!var_14)));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 *= 0;
        var_19 = (241 ? ((((arr_2 [i_0]) ? 18446744073709551607 : (arr_0 [i_0] [i_0])))) : var_11);
        var_20 &= (((((-(max(var_4, var_6))))) ? (min((arr_0 [0] [8]), (arr_2 [0]))) : (min((arr_1 [4]), (arr_1 [18])))));
        arr_3 [i_0] = (((((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))) != (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [3])));
        var_21 *= (((arr_5 [16] [i_1]) > var_5));
        var_22 = (~(arr_5 [19] [i_1]));
    }
    var_23 = max(((var_7 ? var_3 : -var_0)), 225);
    var_24 = ((var_13 ? var_9 : var_9));
    #pragma endscop
}
