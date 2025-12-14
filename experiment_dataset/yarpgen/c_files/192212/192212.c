/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [18] = (((((arr_0 [i_0] [i_0]) <= (arr_1 [i_0])))) & ((max((arr_0 [i_0] [i_0]), 103))));
        var_18 = ((~(((-2147483647 - 1) & var_0))));
        var_19 = (~(arr_0 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_20 = var_6;
        arr_6 [i_1] = -var_4;
        var_21 -= 103;
    }
    var_22 = var_9;
    var_23 = (((max(-79, ((2840660581 >> (var_15 - 1894365306))))) < ((((((min(-88, var_0))) > var_8))))));
    #pragma endscop
}
