/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0])));
        var_16 = (((arr_0 [i_0] [i_0]) - (arr_0 [i_0] [i_0])));
        var_17 = (min(var_17, 5801));
        var_18 = ((~(arr_2 [i_0])));
    }
    var_19 = var_2;
    #pragma endscop
}
