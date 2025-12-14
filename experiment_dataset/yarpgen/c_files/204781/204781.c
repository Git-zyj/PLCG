/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 = 987364351;
        var_13 = (max(var_13, ((((((((max((arr_0 [i_0] [i_0]), var_7))) ? (arr_3 [i_0 + 2]) : 213))) || (((((var_8 || (arr_0 [17] [2]))) ? (((arr_0 [i_0] [i_0]) ? 17855 : (arr_3 [i_0]))) : ((max((arr_1 [i_0]), 17855)))))))))));
        arr_4 [1] = -13713;
    }
    var_14 = var_4;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 ^= (arr_5 [i_1]);
        var_16 = 6;
    }
    var_17 += (var_2 - 65);
    var_18 = (min(var_18, 190));
    #pragma endscop
}
