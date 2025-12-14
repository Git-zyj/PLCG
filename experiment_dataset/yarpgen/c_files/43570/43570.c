/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0 + 1];
        var_20 = (arr_0 [i_0 - 2] [i_0 + 2]);
        arr_3 [i_0] [i_0] = ((4247305143 ? 15360 : 15360));
        arr_4 [8] [i_0] = (arr_0 [i_0] [i_0 + 2]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 = (min(15361, ((((min(55, 31))) ? (((arr_6 [i_1]) ? (arr_5 [i_1] [i_1]) : var_0)) : (((var_3 ? 1677472107 : var_6)))))));
        arr_7 [2] = (((arr_6 [i_1]) ? 0 : (-127 - 1)));
    }
    var_22 = ((((max(var_11, var_5))) ? (!var_16) : var_18));
    #pragma endscop
}
