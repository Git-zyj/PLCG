/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 % (max(((var_11 ? var_9 : var_7)), (((var_7 ? var_5 : var_3)))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_13 = (max((arr_1 [i_0]), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_14 = 64114;
        var_15 *= arr_0 [i_0] [8];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_5 [i_1] = (~(arr_4 [i_1 + 1]));
        arr_6 [i_1] [i_1] = (((arr_1 [i_1]) % (arr_1 [i_1])));
        var_16 = (min(var_16, var_9));
        arr_7 [i_1] [i_1 + 1] = (((~2569430320554502338) ? 2251799813683200 : 733));
        var_17 = -7094;
    }
    var_18 = var_9;
    var_19 = var_5;
    #pragma endscop
}
