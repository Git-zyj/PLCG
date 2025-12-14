/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (2 & 872104453)));
        arr_2 [i_0] = (max((((arr_1 [i_0]) & ((((arr_1 [i_0]) ? var_3 : (arr_0 [i_0])))))), (((2974423585 ? 2949489744 : 18338)))));
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_13 += ((var_4 ? (arr_0 [2]) : (arr_0 [1])));
        var_14 &= (arr_0 [2]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_7 [i_2] = (arr_6 [i_2]);
        var_15 = (min(var_15, (((!(((var_3 ? (arr_5 [i_2]) : var_7))))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_10 [i_3] = ((!((max(65504, (var_8 > var_1))))));
        var_16 = (arr_6 [i_3]);
    }
    #pragma endscop
}
