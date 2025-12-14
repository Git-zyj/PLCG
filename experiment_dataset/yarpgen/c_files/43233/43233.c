/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 = min(((((arr_1 [i_0] [i_0 - 1]) * (((((arr_1 [8] [i_0]) && (arr_0 [i_0 - 1])))))))), 9988575536807912389);
        var_16 = ((-((-(arr_1 [i_0 - 2] [i_0 - 1])))));
        arr_2 [0] [4] = (((((arr_1 [i_0] [i_0 - 1]) && (((-(arr_1 [i_0] [i_0])))))) ? -30 : ((((arr_0 [i_0]) < ((0 ? var_2 : 3750949040)))))));
        var_17 += (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = (!-789819457);
        var_18 = (min(var_18, ((((((8726365749463700 ? (arr_5 [6]) : 34))) ? (-19 == var_7) : (((arr_4 [8]) - 5667476714706539575)))))));
    }
    #pragma endscop
}
