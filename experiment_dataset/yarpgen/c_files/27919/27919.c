/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? (arr_0 [12]) : (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) : -7528659374406371072));
        var_17 = (min(var_17, ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) == (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = (max(var_18, (((((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? ((((arr_5 [i_1]) || (arr_5 [i_1])))) : ((((arr_5 [i_1]) || (arr_5 [i_1])))))))));
        arr_6 [8] = (((((-(arr_4 [i_1] [15])))) ? (arr_4 [i_1] [i_1]) : ((((arr_5 [i_1]) >> (((arr_4 [i_1] [i_1]) - 8514595717704302212)))))));
        arr_7 [i_1] [i_1] = ((((((((arr_3 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))) - (-7528659374406371081 & 7528659374406371064))) < (((arr_5 [i_1]) / (arr_4 [i_1] [12])))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_19 = (max(var_19, (((min((arr_10 [i_2] [i_2]), (arr_5 [i_2])))))));
        var_20 = (((max((!3444125402), (181675182 && 229376))) && (7528659374406371053 && 7528659374406371065)));
    }
    var_21 = ((((((var_2 + var_6) ? ((min(var_3, var_16))) : ((var_8 ? var_12 : var_16))))) ? ((((((~var_2) + 2147483647)) >> (((max(var_16, var_15)) - 1792054285))))) : (((~var_11) + var_1))));
    var_22 = (~var_6);
    var_23 = var_10;
    var_24 -= var_16;
    #pragma endscop
}
