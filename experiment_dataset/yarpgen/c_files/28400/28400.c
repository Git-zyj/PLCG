/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_1 ? var_3 : ((var_10 + ((var_11 ? var_7 : var_10)))))))));
    var_14 = (max(var_14, ((~(~var_6)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = 31;
        arr_3 [i_0] = var_2;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_15 = var_7;
        arr_6 [i_1] [i_1] = arr_5 [i_1 + 4];
        var_16 = (((((arr_4 [i_1 + 1]) && 1907)) ? (((((arr_4 [i_1 - 1]) || var_2)))) : (max((arr_4 [i_1]), var_9))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_17 = (min((((!((min(-12098, var_3)))))), ((min(3176349932054640156, (arr_7 [i_2]))))));
        var_18 = (min(var_18, (arr_5 [i_2])));
        var_19 = ((min((arr_4 [9]), ((-1048576 * (arr_7 [i_2]))))));
    }
    #pragma endscop
}
