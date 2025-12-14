/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 719917588;
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    var_15 = ((!((min((min(var_6, 2425371864)), var_13)))));

    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_16 = (((((arr_0 [i_1]) ? 15 : 6)) < var_3));
        arr_7 [i_1 - 2] = -1944799000;
    }
    #pragma endscop
}
