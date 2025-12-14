/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (((((((((arr_0 [i_0] [i_0]) - 17688))) ? (var_1 <= 1) : (arr_1 [i_0])))) ^ ((-var_9 << (((!(arr_0 [i_0] [3]))))))));
        arr_3 [i_0] [i_0] = (((min((((arr_2 [i_0]) / (arr_0 [i_0] [i_0]))), var_15)) >= ((((-(arr_2 [i_0])))))));
        arr_4 [i_0] = ((((var_11 | (arr_2 [i_0]))) & var_14));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 *= ((!((max((((1 ? (arr_2 [i_1]) : (arr_2 [i_1])))), (((arr_0 [i_1] [i_1]) + (arr_5 [i_1]))))))));
        var_20 = (min(var_20, ((((((var_15 ^ (arr_1 [i_1])))) > (max((arr_2 [i_1]), var_6)))))));
        var_21 = ((55479 ? 1 : (min((max(1, var_9)), (arr_8 [i_1] [0])))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_11 [i_2] = ((~(max((65516 / var_1), (arr_10 [i_2])))));
        var_22 = (arr_10 [10]);
    }
    var_23 ^= ((((var_3 ? var_16 : ((var_6 ? var_11 : var_17)))) == (!65513)));
    var_24 = var_1;
    var_25 = ((-(1 / var_15)));
    #pragma endscop
}
