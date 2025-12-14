/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_0 ? (1 << var_4) : var_6)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_15 = (max(var_15, ((-(((arr_0 [i_0 + 1] [i_0]) + 1))))));
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? -8365 : (arr_1 [i_0])))) + ((var_0 ? var_0 : (arr_0 [i_0] [i_0])))));
        var_16 = var_10;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = arr_2 [i_1];
        arr_7 [i_1] [i_1] = ((((!(arr_4 [i_1 - 1] [5]))) ? var_12 : (~var_5)));
        var_17 = (max(var_17, (((((((-(arr_4 [i_1] [i_1 - 1]))) + (((var_12 > (arr_5 [1]))))))) && -30216348))));
        var_18 = ((min(var_3, (arr_2 [i_1 - 1]))));
    }
    #pragma endscop
}
