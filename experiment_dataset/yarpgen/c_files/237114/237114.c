/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = ((!(arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((8271777842050803979 ? 10174966231658747640 : 7264));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_12 = (arr_4 [i_1]);
        var_13 = ((((arr_1 [i_1 - 1]) ? 8527303941852694135 : var_9)));
        var_14 = (arr_4 [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = (((arr_6 [i_1] [i_2]) ? (arr_0 [i_1] [i_2]) : (arr_0 [20] [20])));
            arr_8 [i_1] = (arr_7 [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_16 = 209;
            arr_12 [i_1] = ((65535 & (arr_4 [i_1])));
        }
        arr_13 [i_1] = (arr_11 [i_1 - 1] [i_1 - 3] [i_1]);
    }
    var_17 = var_1;
    #pragma endscop
}
