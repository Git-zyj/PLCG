/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = (min(var_12, (((((min(63, var_0))) << ((((min(43381, 22141))) - 22135)))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_22 = (min((arr_2 [i_0 + 1]), (arr_1 [i_0 + 1])));
        var_23 = (((arr_0 [i_0 - 1]) + (min((arr_0 [i_0 + 1]), var_6))));
        arr_3 [i_0] [i_0 - 1] = ((32761 & (((24576 < (arr_1 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_5 [i_1] [i_1]) ? 59 : (arr_6 [i_1])));
        arr_8 [i_1] = (((arr_6 [i_1]) + (arr_5 [i_1] [i_1])));
        var_24 = (((arr_5 [i_1] [i_1]) || (arr_6 [i_1])));
        arr_9 [i_1] = (~43381);
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_25 = -7435;

        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            arr_14 [i_2] = var_14;
            var_26 = (((arr_12 [i_3 + 2]) ? var_6 : ((((arr_10 [i_3 + 2]) || (arr_10 [i_3 - 2]))))));
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_27 = var_6;
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_28 = (arr_15 [i_2 + 2]);
                            arr_24 [i_5] [i_7] = (arr_21 [i_2 - 2] [i_2 + 1] [i_5 + 2] [i_5 + 2] [i_7]);
                            arr_25 [i_2] [i_5] [i_2] [i_2] [i_2] = var_14;
                        }
                    }
                }
            }
            var_29 = (var_18 * 116);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_30 = (((arr_12 [i_2 + 1]) ? (arr_12 [i_2 - 2]) : (arr_10 [i_2 + 2])));
            arr_28 [2] [2] = var_3;
            var_31 = ((var_9 ? (!60) : ((-(arr_13 [i_2 - 1] [i_2 - 1] [i_8])))));
        }
    }
    var_32 = var_12;
    #pragma endscop
}
