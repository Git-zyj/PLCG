/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_20 = var_18;
            var_21 = (((arr_3 [i_1 + 1] [i_1 + 1]) && (arr_2 [i_1 + 1] [i_1] [i_1])));
        }
        arr_5 [i_0 + 1] [i_0 - 2] = var_13;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_22 += (((min(7902489766817964514, 10544254306891587108))) ? ((((arr_6 [i_2]) - (arr_7 [i_2])))) : -4790661866603729568);
        var_23 = 487709544746975695;
    }
    var_24 = (max(var_24, (((((var_10 ? 592156302 : ((4112346831 ? 32767 : var_10)))) & var_19)))));
    var_25 = (min(var_18, var_16));
    #pragma endscop
}
