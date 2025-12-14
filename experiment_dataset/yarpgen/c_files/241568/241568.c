/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((-((65525 ? (arr_1 [i_0]) : (arr_1 [22])))));
        var_14 |= -18312667374881351816;
        var_15 = ((-((var_1 ? var_4 : (arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_7 [11] = (((~((9 % (arr_4 [5]))))));
        var_16 = (max(var_16, (arr_5 [i_1])));
    }
    var_17 = var_10;
    var_18 = (min(var_18, 134076698828199800));
    #pragma endscop
}
