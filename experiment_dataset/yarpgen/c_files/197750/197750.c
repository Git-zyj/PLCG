/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_3 ? ((21590 ? -6739968916941332436 : -21577)) : (((((var_3 ? var_10 : var_11)) - var_3))))))));
    var_16 = 21896;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (((!(((var_11 ? 9454 : 1))))))));
        var_18 = (max(var_18, (((15 ? 5262768958906720633 : 73)))));
        arr_2 [15] = ((arr_0 [i_0] [i_0]) ? 0 : (arr_1 [i_0]));
        var_19 = (max(var_19, (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_20 = ((!((((arr_4 [i_1] [i_1]) - (arr_4 [i_1] [i_1]))))));
        arr_5 [i_1] [10] &= (((-(var_2 / var_14))));
        var_21 *= (max(var_8, 1));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] &= (((arr_0 [i_2] [i_2]) % (arr_8 [i_2])));
        arr_10 [1] = (-(((((arr_4 [8] [i_2]) ? var_8 : var_9)) + ((max(var_13, 327260900))))));
    }
    #pragma endscop
}
