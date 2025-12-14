/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_0 [i_0])));
        var_13 = (max(((((var_4 / var_5) ? (arr_0 [i_0]) : ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))), 9149198463633513222));
        arr_2 [i_0] [i_0] = ((-((((min((arr_1 [i_0] [i_0]), var_3))) | (((!(arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 = (((((arr_3 [i_1]) * var_8)) * (var_8 / 2097151)));
        arr_6 [i_1] = -2097130;
        arr_7 [i_1] = (arr_4 [i_1] [i_1]);
        var_15 = (max(var_15, (arr_3 [i_1])));
    }
    #pragma endscop
}
