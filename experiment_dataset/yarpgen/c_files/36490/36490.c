/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_7))) ? (arr_2 [i_0]) : (arr_0 [i_0])));
        var_14 &= (((arr_1 [1]) ? 1 : (arr_1 [1])));
        arr_5 [i_0] [i_0] = ((0 > ((~(arr_0 [i_0])))));
        arr_6 [i_0] [i_0] = ((((arr_0 [i_0]) > -41)));
    }
    #pragma endscop
}
