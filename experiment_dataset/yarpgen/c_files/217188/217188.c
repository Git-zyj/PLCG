/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_16;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((-(arr_0 [1]))));
        arr_3 [i_0] [i_0 - 1] = ((((var_6 ? (arr_0 [5]) : (arr_1 [i_0] [i_0])))));
        arr_4 [14] [14] = ((+((-((var_13 ? (arr_0 [i_0]) : var_14))))));
        arr_5 [i_0] = (((arr_0 [i_0 - 1]) % (arr_1 [i_0] [i_0])));
        arr_6 [i_0] = (arr_0 [i_0 - 3]);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_10 [i_1] = -1596209594;
        arr_11 [i_1] [i_1] = (!((max(4487974698977701368, 103))));
    }
    #pragma endscop
}
