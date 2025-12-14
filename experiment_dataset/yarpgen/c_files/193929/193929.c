/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_21 = (arr_2 [i_1 + 1] [i_1 + 1]);
            var_22 = var_11;
            arr_5 [i_1] [i_0] = ((((~var_9) + 2147483647)) << (var_8 - 2572343498));
            arr_6 [i_0] = (arr_2 [i_1 + 1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_23 = (~var_15);
            var_24 = (((arr_2 [i_2] [i_0]) ? (arr_1 [i_2]) : (arr_1 [i_0])));
        }
        var_25 = arr_2 [i_0] [i_0];
    }
    #pragma endscop
}
