/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    var_14 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_15 = var_6;
        arr_2 [i_0] [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = (min(var_16, (((((((((-127 - 1) != 15204))) << (((min((arr_6 [i_1]), var_5)) + 28260)))) >= var_9)))));
        var_17 = (((min((((arr_5 [i_1]) ? (arr_4 [3]) : (arr_3 [i_1] [i_1]))), var_8)) - (((var_7 * var_3) ? (arr_6 [i_1]) : var_10))));
        arr_7 [i_1] = 1;
        arr_8 [i_1] = ((var_10 & ((-(var_8 < var_8)))));
        arr_9 [i_1] = var_11;
    }
    #pragma endscop
}
