/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0 + 1]) ? var_1 : 32759));
        var_18 = (min(var_18, (~var_10)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_1] |= var_11;
            arr_7 [i_0] [i_0] [i_1] = (~var_9);
            var_19 *= ((((!(arr_2 [i_0])))));
        }

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_20 = ((14488497450655764247 ^ (arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
            arr_10 [i_0] [i_0] = 14488497450655764251;
            var_21 = (((10959938216034835436 << (-121 + 163))));
        }
        var_22 *= (((arr_5 [i_0] [i_0 + 2] [i_0]) ? (arr_0 [i_0] [18]) : var_16));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_23 = (max(((var_13 ^ (max(var_0, 0)))), (arr_3 [i_3] [i_3] [i_3])));
        var_24 = (10959938216034835435 | (((10959938216034835436 ? (arr_9 [i_3] [i_3]) : -1))));
    }
    var_25 = ((((max(var_6, var_9))) ? (((var_5 ? (65535 - 1073610752) : var_15))) : var_11));
    var_26 = (max((((var_4 ? var_1 : var_11))), ((8363193813992858871 ? -10959938216034835417 : (!var_5)))));
    var_27 = (max(var_27, ((min((((min(var_4, var_2)) ^ (((11426264811748557533 ? var_10 : var_15))))), var_7)))));
    #pragma endscop
}
