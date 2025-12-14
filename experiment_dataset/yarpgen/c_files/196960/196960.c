/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((((min((max(3748579304, 0)), (!20071)))) ? (((((248 ? 20067 : 6233146660771296142))) ? (~0) : var_3)) : -27480));
        arr_5 [i_0] [i_0] &= (max((!32767), (min(-var_1, var_5))));
        arr_6 [i_0] = (max((((+((max((arr_1 [i_0] [i_0]), (arr_0 [18] [18]))))))), (min(((((-9223372036854775807 - 1) ? 65528 : 15))), (max(45465, var_4))))));
        arr_7 [i_0] [i_0] = ((-(min(var_3, ((459 ? 1 : (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = ((!((((arr_3 [i_1]) ? var_6 : 10345)))));
        arr_11 [i_1] [i_1] = (~var_4);
        arr_12 [i_1] [i_1] = ((((((arr_9 [i_1]) ? var_8 : 1))) ? (arr_2 [i_1] [i_1]) : 37714));
    }
    var_12 -= var_5;
    #pragma endscop
}
