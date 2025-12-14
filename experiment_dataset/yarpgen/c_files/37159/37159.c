/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((255 ? ((var_5 ? ((255 ? var_7 : var_11)) : (((var_0 ? 34481 : -14174))))) : var_13));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 ^= ((((((((var_0 ? (arr_1 [i_0] [i_0]) : 31054))) ? var_10 : ((-14174 ? var_9 : var_3))))) ? ((max(31054, var_3))) : (((-14174 ? 33693557 : (!-32747))))));
        arr_2 [i_0] = (min((!3666479221), (((var_1 ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_16 = ((((((31054 ? (arr_0 [i_0]) : 3894877095388561854))) ? ((1 ? 17 : -7695762875229219226)) : ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_17 = ((((((((-(arr_5 [i_1] [i_1])))) ? -250 : (((arr_4 [i_1]) ? (arr_0 [i_1 + 1]) : (arr_4 [i_1 + 1])))))) ? (((~(arr_5 [i_1 - 1] [i_1])))) : ((var_6 ? (~-68722468) : ((31054 ? -14174 : var_0))))));
        var_18 ^= ((((((!-30100) ? (arr_5 [i_1 + 1] [i_1]) : 1923055309))) ? ((((max(-68722468, 255))))) : ((((((arr_0 [6]) ? 255 : (arr_1 [i_1 - 1] [i_1 - 1])))) ? (arr_3 [i_1] [i_1]) : ((32746 ? var_11 : -68722461))))));
        var_19 -= ((((((-888960868 ? 1 : 32746))) ? 177 : ((72 ? 2035696863 : 2147483642)))));
        var_20 += (((arr_3 [i_1 - 1] [i_1 - 2]) ? ((((arr_3 [i_1 - 1] [i_1]) ? var_10 : 127003507))) : ((var_5 ? var_1 : 1))));
    }
    #pragma endscop
}
