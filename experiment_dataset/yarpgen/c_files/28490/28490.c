/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= min((max((min(7, var_2)), ((59397 ? 247434832 : 23501)))), ((((max(98, var_1))) * ((min(var_14, var_12))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] &= var_1;
        arr_4 [3] [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] [12] = ((((((((var_11 ? (arr_1 [i_0]) : var_12))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_2 [6] [6])))) ? (min(((min(26292, -23302227))), (arr_1 [i_0]))) : ((~(arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_12 [i_2] = ((~(arr_6 [i_1 + 2] [i_1 + 2])));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_17 = (((arr_18 [i_4 + 3] [i_4 + 1] [i_4] [i_4] [i_5] [i_5]) ? ((~(arr_8 [i_1] [i_1 + 2]))) : 32704));
                            arr_24 [1] [i_2] [i_3] [19] [i_3 + 3] = ((!((((arr_7 [i_2]) ? var_12 : 32684)))));
                        }
                    }
                }
            }
            arr_25 [i_1 + 2] [i_1 + 2] [i_2] = (((arr_11 [i_1 - 3]) ? (arr_20 [i_2] [i_1 - 3] [17] [i_2] [12] [0]) : var_14));
            var_18 = ((~(((arr_8 [i_1] [i_1]) ? (arr_7 [i_1 - 3]) : var_1))));
        }
        var_19 = (max(var_19, ((min(((((825131643 > 825131621) ? -2102608083 : 54057))), 4468415255281664)))));
        var_20 = ((((arr_23 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 1]) ? (arr_17 [i_1 - 3]) : (arr_18 [5] [i_1 - 1] [i_1 + 3] [i_1] [i_1 + 3] [15]))) + (((max((arr_8 [i_1 - 3] [i_1 - 2]), var_6)))));
    }
    for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            var_21 = -825131643;
            arr_33 [i_6 + 2] [i_6] [i_6] = var_14;
            var_22 = (4468415255281664 ? 825131643 : 3579946120);
            var_23 = var_1;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_24 -= arr_8 [5] [i_8];
            var_25 ^= (arr_21 [i_8] [i_8] [i_6 - 2] [i_6] [i_8] [i_8] [i_8]);
        }
        arr_37 [12] [i_6] = (min((((arr_7 [i_6 + 3]) ? (arr_30 [i_6 - 1] [i_6 - 1]) : var_8)), (arr_30 [i_6 - 2] [i_6 - 3])));
    }
    for (int i_9 = 3; i_9 < 17;i_9 += 1)
    {
        var_26 &= ((((((arr_13 [0]) / var_9))) ? (min(var_14, (arr_13 [12]))) : ((var_10 ? (arr_13 [4]) : var_7))));
        arr_40 [i_9] = ((16383 ? 4095 : 62));
    }
    var_27 = (61748 < -8483);
    #pragma endscop
}
