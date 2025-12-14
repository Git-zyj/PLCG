/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_1));
        arr_2 [i_0 - 1] [i_0] = (-((-85 ? 5197659513944436845 : -80)));
        arr_3 [i_0] = (min(((((6 / 1474482890) / ((63316 ? 1474482897 : 85))))), (max((arr_1 [i_0 - 1]), 29591))));
        arr_4 [i_0] [0] = (!-23);
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] &= ((!(((+(((arr_0 [i_1]) - var_7)))))));
        var_21 = (((var_12 ? -21 : (arr_1 [i_1 + 2]))) >> (((!(arr_1 [i_1 + 3])))));
        var_22 = (max(var_22, ((((max((max(-6162, (arr_1 [i_1 + 3]))), -var_6)) != (arr_6 [i_1 + 1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] = 2820484388;
        var_23 = var_9;
    }
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        arr_14 [i_3 + 3] = var_0;
        var_24 = (min(var_24, ((min(var_14, (((arr_8 [i_3 - 1] [i_3 + 3]) ? ((1474482896 ? -64 : var_6)) : 2147483641)))))));
        var_25 |= max((max((arr_13 [i_3 + 1] [i_3]), var_15)), var_1);
        var_26 *= (((((1 < 8742416908694041534) ? ((var_15 ? var_10 : 78)) : ((var_11 ? 94 : (arr_8 [i_3] [i_3]))))) == (((((var_10 ? 19 : (arr_9 [i_3 + 3])))) ? var_13 : (246 != 0)))));
        arr_15 [i_3] = ((!((!(arr_9 [i_3])))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                var_27 = ((!((!(((var_16 ? (arr_9 [i_5]) : 7235307031956314222)))))));
                var_28 = (max(-var_1, (((arr_18 [i_4]) ? (748590217869825795 | 9223372036854775797) : (((-739518721 ? 245 : var_0)))))));
            }
        }
    }
    #pragma endscop
}
