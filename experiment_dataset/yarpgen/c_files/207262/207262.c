/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = var_1;
    var_16 = -1061982120430390655;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((~2147483647) == (min(297262741, (min(var_9, -297262742))))));
        var_17 -= (((min((arr_1 [4]), 297262751)) < (((arr_1 [12]) ? 2029539812587089420 : (arr_1 [2])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_3 [i_1]);
        arr_6 [i_1] = (arr_3 [i_1]);
        arr_7 [i_1] = var_9;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (((~var_3) ? ((var_4 ? (297262731 & var_3) : var_12)) : (min(((var_13 ? var_7 : (arr_4 [i_2]))), ((max(var_10, var_10)))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_15 [i_2] = (i_2 % 2 == zero) ? ((((((arr_1 [i_2]) + 9223372036854775807)) << (((((arr_3 [i_2]) ? var_10 : -7957741962397673056)) - 4894))))) : ((((((((arr_1 [i_2]) - 9223372036854775807)) + 9223372036854775807)) << (((((arr_3 [i_2]) ? var_10 : -7957741962397673056)) - 4894)))));
            var_18 -= var_5;
            var_19 = 14770;
        }
    }
    var_20 = (~var_9);
    #pragma endscop
}
