/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_20 = ((14336 + (227 + 17)));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0 - 2]) >> ((((1 ? ((var_10 ? (arr_0 [i_0]) : var_7)) : 1)) - 8886790079955415716))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = (arr_3 [i_1]);
        arr_6 [i_1] [i_1] = 1;
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = 2305825417027649536;
        var_21 = (min(var_5, var_2));
        var_22 = (min(var_22, ((min((arr_4 [i_2 - 3]), ((var_1 ? var_4 : 32767)))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_23 = var_4;
        var_24 = (arr_12 [i_3 + 2] [i_3]);
        arr_13 [i_3] = (((-9223372036854775807 - 1) ? (arr_10 [i_3]) : ((~(arr_1 [i_3] [i_3])))));
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_25 = var_6;
        var_26 = var_14;
    }
    #pragma endscop
}
