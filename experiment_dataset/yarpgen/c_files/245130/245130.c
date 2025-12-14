/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_9;
        arr_3 [i_0] = (((arr_1 [i_0] [i_0 + 3]) ? ((310177723 ? 310177748 : 3984789569)) : (((arr_0 [10]) ? 310177737 : (arr_1 [i_0] [1])))));
        arr_4 [i_0] |= (arr_0 [i_0 + 2]);
        arr_5 [i_0] = (((arr_0 [7]) & (arr_0 [1])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_13 *= (((arr_8 [i_1 - 1]) > (arr_8 [i_1 - 1])));
        var_14 = (max(var_14, ((((arr_8 [i_1 + 1]) ? (arr_8 [i_1 - 2]) : (arr_8 [i_1 - 1]))))));
        arr_10 [i_1 - 3] = var_10;
    }
    var_15 = (min(var_15, var_6));
    #pragma endscop
}
