/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (min(var_12, (~2024710831)));
        var_13 += (~0);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] [5] = 1;
        var_14 += ((~(arr_1 [i_1] [i_1])));
        arr_7 [i_1] = 1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_15 |= (arr_1 [3] [3]);
        arr_10 [i_2] [i_2] = ((~(var_8 ^ 1)));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_16 = (max(var_16, (((((((1 > ((((arr_11 [4]) >= 140737488355312))))))) - ((-(arr_2 [i_3]))))))));
        var_17 = (min(var_17, 255));
        var_18 = (!var_10);
        var_19 = var_0;
        var_20 = (min(var_20, ((((3195349719215584869 | (arr_0 [i_3])))))));
    }
    var_21 = (max(var_21, var_9));
    var_22 = (min((((-1 < (max(1663708373, -719821543))))), -255));
    #pragma endscop
}
