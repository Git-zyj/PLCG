/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((1828176011 ? 124 : (((!var_6) ? (((var_6 ? var_9 : 129))) : var_12))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? var_11 : (((arr_1 [i_0] [i_0 - 1]) ? (((arr_1 [i_0] [i_0]) ? 3836586163186796419 : (arr_0 [i_0 + 1]))) : ((max(19007, 1965703507)))))));
        var_21 = (((min(153, (((arr_0 [i_0]) >> (((arr_1 [i_0 + 3] [i_0]) - 2840693059))))))) ? (max(((-(arr_1 [i_0] [i_0 - 1]))), (arr_1 [i_0 - 1] [i_0]))) : (arr_0 [i_0 + 3]));
        arr_3 [i_0 + 2] = (max((arr_0 [i_0]), 663995455));
        var_22 -= (arr_1 [i_0 + 2] [i_0]);
    }
    #pragma endscop
}
