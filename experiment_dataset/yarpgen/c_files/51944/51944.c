/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_18 ^= 7402939913941397718;
        arr_2 [i_0 - 2] [4] = (arr_1 [i_0 + 1]);
        var_19 += (arr_0 [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 = (((((((arr_3 [i_1] [i_1]) ? var_1 : (arr_1 [i_1])))) ? ((27 ? (arr_0 [i_1]) : (arr_5 [i_1]))) : (arr_5 [7]))));
        var_21 = 127;
        arr_6 [i_1] [i_1] = ((-(((((~(arr_3 [i_1] [i_1]))) <= ((max((arr_0 [i_1]), (arr_1 [i_1])))))))));
        var_22 = arr_1 [i_1];
    }
    var_23 += var_0;
    #pragma endscop
}
