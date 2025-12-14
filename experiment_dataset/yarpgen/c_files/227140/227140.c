/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((((((((arr_0 [i_0]) == (((arr_0 [i_0]) ? (arr_0 [i_0]) : -1511900565581065215)))))) % (((-9223372036854775807 - 1) % ((-(arr_1 [8]))))))))));
        var_19 ^= ((((var_1 || (arr_1 [10]))) ? var_13 : var_4));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 = ((!((((((var_16 ? 3473480164888562847 : var_9))) ? ((((!(arr_3 [1] [i_1]))))) : 4294967295)))));
        var_21 += ((((((arr_2 [1]) ? (max(3219381578267461140, -115)) : (arr_0 [i_1])))) ? ((((var_13 | var_16) ? -1511900565581065215 : (((max(-63, 8241))))))) : ((((((arr_0 [i_1]) >> (arr_0 [i_1])))) ? ((var_6 ? var_9 : (arr_3 [i_1] [i_1]))) : 62))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_22 = (((arr_4 [i_2]) ? (((((var_12 || var_0) || (((5896 ? 2 : 2793627108179993795))))))) : (((((4294967295 ? -1511900565581065215 : 9223372036854775804))) ? (arr_5 [i_2]) : (max(-6326842894502519653, 60))))));
        var_23 = (288230376151711743 > 15352248812109720411);
    }
    var_24 |= ((-(max(((var_4 ? 1 : var_6)), var_15))));
    #pragma endscop
}
