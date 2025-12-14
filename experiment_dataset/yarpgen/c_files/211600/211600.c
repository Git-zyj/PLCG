/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((min(var_5, (arr_1 [i_0]))) < ((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])))))))));
        arr_2 [14] = (min(((44240 * (arr_0 [i_0]))), (((arr_0 [i_0]) * ((-(arr_0 [14])))))));
        arr_3 [i_0] = 3442014010;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_20 = var_18;
        arr_7 [i_1] [8] = ((var_5 ? var_16 : var_6));
    }
    var_21 = var_8;
    var_22 = (852953282 <= var_4);
    var_23 |= 108;
    var_24 = var_4;
    #pragma endscop
}
