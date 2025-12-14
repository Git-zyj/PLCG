/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = ((((((min(var_1, 23606))) ? (((arr_1 [i_0]) ? 11620556572923214496 : var_2)) : 185)) / (((+(((arr_1 [i_0]) ? var_1 : var_16)))))));
        var_21 = (min(var_21, (((~(arr_2 [i_0]))))));
        var_22 = ((11538515920096004120 ? (~24) : (((arr_3 [i_0] [i_0]) ? (arr_2 [i_0]) : ((((arr_2 [i_0]) ? var_14 : (arr_1 [1]))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (max(var_13, (max((((!(arr_7 [i_1] [i_1])))), -0))));
        var_23 = ((min(-23632, 172)));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_24 -= (((arr_4 [24] [i_2 + 1]) ? (arr_4 [4] [i_2 + 1]) : var_3));
        var_25 = var_16;
    }
    var_26 = var_15;
    var_27 = var_16;
    var_28 = (((max(((var_13 ? var_15 : 23628)), (var_12 / var_13))) * (((((var_7 && var_19) && (!var_8)))))));
    #pragma endscop
}
