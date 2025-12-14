/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((var_11 + 2147483647) << (((var_10 + 1470722889412856763) - 19))))) | ((var_7 << (var_10 + 1470722889412856800))))) | ((52 & (max(var_2, var_7))))));
    var_14 = (min(var_14, var_8));
    var_15 *= var_11;

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_1 [i_0 + 3]);
        var_17 = 1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((-47 ? -139 : var_2));
        arr_7 [i_1 + 2] [i_1 + 2] = (((!var_11) ? ((var_8 ? (arr_5 [i_1] [i_1]) : 165)) : (arr_5 [i_1] [i_1 + 3])));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_18 = (max(var_18, ((max((var_7 & 12434117881988155587), var_0)))));
        var_19 = (max(var_19, (((1 ? ((max((arr_0 [1]), 0))) : ((var_9 - ((~(arr_9 [1]))))))))));
        var_20 = (max(0, -1));
    }
    #pragma endscop
}
