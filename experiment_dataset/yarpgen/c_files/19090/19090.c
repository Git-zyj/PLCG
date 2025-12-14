/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_0 / ((var_1 ? ((min(var_16, var_13))) : (!-2582933063989048739))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (arr_1 [i_0] [i_0]);
        var_22 = (max(var_22, (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_1] = ((1 ? 127 : 2582933063989048739));
            var_23 = (!var_14);
        }
        var_24 = (arr_5 [i_1]);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_18 [i_4] [i_4] [i_4] = (arr_17 [i_1] [i_1] [i_4] [i_1] [i_6]);
                            var_25 = (arr_3 [i_4]);
                            arr_19 [i_6] [i_4] [i_4] [i_4] [i_1] = ((~(arr_4 [i_1])));
                        }
                    }
                }
            }

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_26 = (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_3])));
                arr_22 [2] [i_3] [i_3] = (89 ? (arr_6 [13] [i_7]) : 1463715649);
                var_27 = (((arr_21 [i_7] [i_1]) ? (((arr_7 [i_1] [i_3] [i_7]) ? (arr_13 [i_1] [i_3] [i_7] [i_7]) : (arr_21 [i_1] [i_3]))) : (arr_21 [i_1] [i_1])));
            }
        }
        var_28 = (arr_5 [i_1]);
    }
    #pragma endscop
}
