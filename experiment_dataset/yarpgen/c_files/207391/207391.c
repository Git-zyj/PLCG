/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_16;
    var_20 -= -27;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] &= var_9;
        var_21 ^= ((!(arr_1 [i_0] [i_0])));
        var_22 = (((arr_0 [i_0]) ? (min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))) : (-65 && 20)));
        arr_4 [i_0] = (((arr_0 [i_0]) / ((var_0 * (arr_0 [i_0])))));
    }

    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_23 = (min(var_23, (((((!(arr_5 [i_1 + 4]))))))));
        arr_8 [i_1] = ((101 || ((((var_11 || (arr_5 [8]))) || (arr_5 [i_1 - 2])))));
    }
    #pragma endscop
}
