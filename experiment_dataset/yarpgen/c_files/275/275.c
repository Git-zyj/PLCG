/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((!(((var_1 ? var_4 : var_2)))))), ((((3954936285 ? 127 : var_8)) - (!21)))));
    var_12 = ((((((max(-1, var_6))) ? var_7 : ((min(21, 2024035672))))) / (((~((var_10 ? var_10 : var_9)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_13 = var_1;
        arr_2 [3] [i_0] = (arr_1 [i_0 - 1]);
        var_14 = (max(var_14, (arr_0 [i_0])));
    }
    var_15 = (var_10 > var_2);
    var_16 = ((((((!-4815340295271698477) ? ((var_10 ? 532575944704 : -22)) : var_2))) ? var_7 : 1363799440));
    #pragma endscop
}
