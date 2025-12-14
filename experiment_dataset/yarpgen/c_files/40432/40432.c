/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 2580391076;
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 = 27;
        arr_7 [i_1] = 156;
        var_14 = 34;
        var_15 = (min(var_15, (arr_4 [i_1])));
        var_16 = (((arr_4 [i_1]) + (arr_4 [i_1])));
    }
    var_17 = 36028797018961920;
    #pragma endscop
}
