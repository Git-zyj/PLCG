/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((~(min(var_0, var_11))))));
    var_18 = var_15;
    var_19 = var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 = (((arr_0 [14]) ? (arr_0 [13]) : (arr_1 [i_0 - 1] [i_0])));
        var_21 = (((arr_0 [i_0 - 1]) ? ((var_6 ? var_14 : var_15)) : (arr_1 [i_0 + 1] [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_7 [5] [i_2] = (((!(arr_4 [i_1 + 3]))));
            var_22 += ((((((arr_2 [i_2] [i_1]) + 2147483647)) >> (((arr_5 [i_1] [4] [3]) - 765650444)))));
            var_23 = (max(var_23, (arr_4 [11])));
        }
        var_24 = (arr_2 [i_1] [i_1]);
        var_25 = ((((((-6895811334289534838 && (arr_3 [i_1 - 1] [0]))))) || ((((((-9187084784293499327 ? 15593 : (arr_4 [i_1])))) ? (arr_2 [i_1] [6]) : ((max(var_15, -79))))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        arr_12 [i_3] = (!65530);
        var_26 *= (arr_2 [i_3 + 2] [i_3 + 1]);
        var_27 += (~-90);
    }
    #pragma endscop
}
