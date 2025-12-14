/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = var_10;
        arr_4 [i_0] &= ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((arr_0 [i_0]) ? (-21759 <= 5870) : ((1660625704 ? var_8 : var_7)))) : 5894));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] = var_6;
        arr_9 [i_1] = ((arr_1 [i_1 - 1] [11]) >> (((arr_7 [i_1]) - 20138)));
        var_11 = ((((min(922016950, 117))) ? var_1 : (((((((arr_5 [i_1] [i_1]) ^ (arr_2 [i_1 + 1])))) ? (!var_0) : ((5870 ? var_8 : var_3)))))));
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        var_12 = var_5;
        var_13 *= (arr_0 [i_2 + 4]);
        var_14 = -var_9;
        arr_13 [i_2] [7] = (min(((((arr_11 [i_2]) < (arr_10 [i_2])))), (arr_1 [i_2] [i_2 - 3])));
    }
    var_15 = ((var_10 ? ((-6561 ? var_2 : ((var_10 ? var_7 : 41372)))) : (((((~var_7) + 2147483647)) << ((((var_1 >> (var_9 - 5599640455920721908))) - 393860778220))))));
    #pragma endscop
}
