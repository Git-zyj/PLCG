/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = ((37 ? -1438169861 : -var_14));
            var_21 = (min(var_21, (arr_2 [i_0 - 2])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = ((63 ? 122 : 1800427670));
            arr_10 [i_2] = 125;
            var_23 += (((((var_0 ? (arr_6 [i_2]) : (arr_7 [1])))) ? (arr_6 [i_0 + 1]) : ((79 << (87 - 72)))));
            arr_11 [i_2] [i_0] [i_2] = var_18;
            arr_12 [4] [i_2] [i_2] = (arr_8 [i_0 - 1] [i_0 - 1] [i_2]);
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_24 -= var_1;
                    var_25 = -24427;
                    arr_17 [i_4] [i_4] = (min((((arr_15 [i_3] [i_3] [i_3 + 2] [i_3]) / (arr_15 [4] [i_3] [i_3 + 2] [i_3]))), (arr_15 [i_3] [i_3] [i_3 + 2] [i_3 + 2])));
                    var_26 = (arr_14 [i_0 + 1] [i_0 + 1]);
                    var_27 = (min(9223372036854775807, ((min((122 != var_18), var_5)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = (arr_16 [i_5] [23] [i_5 - 1] [i_5]);
        arr_21 [i_5] [i_5] = ((122 ? 0 : ((var_7 ? (arr_9 [i_5] [i_5]) : 4))));
        var_28 -= (arr_15 [i_5 - 1] [i_5] [i_5 - 1] [i_5]);
        arr_22 [i_5] = var_6;
        var_29 = var_4;
    }
    #pragma endscop
}
