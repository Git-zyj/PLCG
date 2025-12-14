/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_15 -= ((-var_4 <= ((var_14 ? var_6 : var_2))));
        var_16 = (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])));
        var_17 = var_9;
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = 4572350344066992402;
        var_19 = (max((((((-71 ? (arr_2 [i_1]) : 8297524241020083740)) < (((141 | (arr_0 [i_1 + 1]))))))), 13185));
        arr_6 [i_1] = (max(23722, ((min((arr_0 [i_1]), var_3)))));
    }
    var_20 = ((var_7 ? var_4 : var_10));
    #pragma endscop
}
