/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((((var_8 != (((1 ? 140696776 : 1)))))), (max(var_0, (((var_8 ? var_5 : 1))))));
    var_13 = (min(var_13, ((((max((var_1 >= 7692), (max(var_5, var_0))))) ? ((((max(var_8, var_9))))) : (max((4 || -304771972), var_3))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (min(var_14, (((((max(var_5, var_3))) << (((var_2 / var_8) - 584)))))));
        var_15 = var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (arr_0 [i_1]);
        var_16 = ((63 ? 110 : -8817565962966959765));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_17 = (((max(var_11, (arr_9 [i_2])))));
        var_18 = (min((((max(var_7, var_9)))), (((((var_7 >> (var_0 - 6328967343306881598)))) ? (var_5 < 122) : (min(var_3, var_9))))));
        arr_10 [i_2] = var_8;
    }
    #pragma endscop
}
