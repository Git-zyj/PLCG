/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 ? ((((!(!253))))) : var_8));
    var_11 = (((4194296 != var_6) ? var_9 : (!var_2)));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        arr_4 [i_0 - 4] [i_0] = -46;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_12 -= (min((arr_5 [i_1]), ((((arr_5 [i_1]) && (arr_5 [i_1]))))));
        arr_9 [i_1] &= (((((-(arr_7 [i_1])))) ? (min((arr_8 [i_1]), var_1)) : (arr_8 [i_1])));
        arr_10 [14] = var_4;
        var_13 = (((((min(15, (arr_6 [i_1] [4]))))) ? (min(var_7, ((~(arr_5 [i_1]))))) : (arr_6 [i_1] [i_1])));
        var_14 = (((min((arr_6 [i_1] [i_1]), (max(var_8, (arr_6 [i_1] [i_1])))))) ? (arr_5 [i_1]) : var_8);
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 ^= ((-12 ? 2029 : -1));
        var_16 = (max(var_16, (arr_12 [i_2])));
        var_17 = ((!(((~((-(arr_12 [i_2]))))))));
    }
    #pragma endscop
}
