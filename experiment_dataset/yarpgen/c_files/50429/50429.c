/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 = (min(var_17, var_10));
        arr_2 [17] = (((arr_1 [i_0 + 1]) >> (!var_16)));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((-1 + 2147483647) << ((((((arr_4 [i_1 - 1]) >= (arr_4 [i_1 + 1])))) - 1))))));
        var_19 = (min(var_19, -1716405096));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_20 = (((min((arr_0 [i_2 - 1]), (arr_6 [i_2 + 1] [i_2])))) ? var_9 : (max((arr_0 [i_2 - 1]), var_16)));
        var_21 = var_12;
        var_22 = ((arr_3 [1]) + (((((((arr_5 [i_2 + 1]) >= -692469904010054522)) && 0)))));
        arr_8 [i_2] [i_2] = (max((min(3304, (min((arr_4 [i_2]), 7200886512941975230)))), var_1));
        var_23 = (max((((arr_1 [i_2 + 1]) ? (arr_6 [i_2 + 1] [i_2]) : var_13)), (((((11679608220619282121 ? (arr_1 [i_2]) : 71)) << (var_6 + 8698802563035528486))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_24 = 1723495738914330168;
        arr_13 [i_3] = 11679608220619282121;
    }
    var_25 = var_5;
    var_26 = var_1;
    #pragma endscop
}
