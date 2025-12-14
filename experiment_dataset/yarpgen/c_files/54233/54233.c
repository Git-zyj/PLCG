/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(var_1, var_3)));
    var_12 = ((var_6 != (!var_1)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 2] = (((arr_0 [i_0 - 2]) & var_10));
        var_13 = arr_0 [i_0 + 1];
        var_14 = (min(var_14, ((((((arr_0 [i_0 - 1]) / (arr_1 [i_0 - 1]))) / var_6)))));
        arr_3 [i_0 - 1] = (96 || var_5);
        arr_4 [i_0 - 1] = var_2;
    }
    var_15 = (((var_3 <= var_8) ? (((min(var_9, var_9)))) : -248));
    #pragma endscop
}
