/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = var_2;
    var_12 = (max(-107, var_4));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_13 = ((38677 ? -6878271518355932007 : ((((arr_1 [i_0]) ? (arr_3 [i_0] [i_0]) : var_2)))));
        arr_4 [i_0 + 1] [i_0] = var_9;
        arr_5 [i_0] = var_1;
        arr_6 [5] [i_0] = -1;
        arr_7 [i_0] = (((arr_0 [i_0 + 1]) << (var_4 - 48)));
    }
    #pragma endscop
}
