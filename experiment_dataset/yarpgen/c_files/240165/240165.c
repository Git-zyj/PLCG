/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 22022;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = -22026;
        var_16 = (max(var_16, ((((arr_2 [i_0] [i_0]) ? 4294967295 : var_3)))));
        var_17 = ((-(((arr_2 [i_0] [i_0]) ^ (arr_2 [i_0] [i_0])))));
        var_18 = var_12;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = (max(((min(var_12, (arr_6 [i_1])))), ((((max((arr_5 [i_1] [i_1]), var_3))) ? var_9 : -10073951323705525506))));
        var_19 = ((29674 ? ((var_1 ? (((arr_5 [i_1] [i_1]) ? var_7 : (arr_6 [i_1]))) : (max(30777, -6265399373761745222)))) : ((((((arr_5 [i_1] [i_1]) + 2147483647)) << (((arr_3 [i_1]) - 20549)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] = ((((((arr_8 [i_2]) / var_8))) <= var_2));
        var_20 = (arr_3 [i_2]);
    }
    var_21 = (~var_12);
    #pragma endscop
}
