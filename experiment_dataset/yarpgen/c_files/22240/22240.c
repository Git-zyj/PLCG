/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 *= var_14;
        var_18 = (min(var_18, (arr_1 [i_0])));
    }
    var_19 = -1;

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (arr_3 [10]);
        arr_4 [i_1] = (arr_3 [15]);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_7 [i_2] = -1;
        arr_8 [9] = (((((((min((arr_0 [i_2]), 1))) ? (((arr_3 [i_2]) ? (arr_6 [8]) : var_7)) : var_16))) ? (~8070450532247928832) : (((arr_6 [i_2]) | (!-1)))));
        var_21 ^= (min((((((((arr_0 [0]) <= var_2)))) & (max((arr_2 [i_2]), (arr_2 [i_2]))))), var_12));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        arr_11 [i_3] = (arr_10 [i_3 + 1]);
        var_22 = (max(var_22, 8070450532247928861));
    }
    #pragma endscop
}
