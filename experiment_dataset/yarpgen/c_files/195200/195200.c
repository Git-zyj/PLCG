/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [1] = (min(var_1, (arr_4 [i_2] [3] [i_0])));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_1] [0] [i_1] [i_1] = (!0);
                        arr_13 [i_0] [i_1] [i_2] [i_1] [12] = var_1;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_18 [i_2] [i_1] = (max((min((arr_1 [i_0 - 2] [i_0 - 2]), (arr_1 [i_0 + 1] [1]))), (arr_1 [i_0 - 1] [1])));
                        arr_19 [3] [i_1] [i_1] [3] = 250;
                        arr_20 [i_0] [i_2] [i_1] = arr_6 [i_0] [1] [1] [i_0];
                        arr_21 [i_0] [i_1] [i_2] [i_4] [i_1] = (arr_14 [i_0] [i_1] [i_2] [i_4] [1]);
                    }
                }
            }
        }
    }
    var_11 = var_8;

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_26 [1] = ((((min((arr_23 [i_5]), (arr_24 [i_5])))) ? (((var_4 ? var_10 : var_3))) : (min(2048, 4294965248))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_32 [11] [i_5] [i_5] [i_5] = (((((arr_24 [i_5]) ? (arr_24 [i_7]) : var_7)) / (max(0, (arr_24 [i_5])))));
                    arr_33 [4] [i_6] [4] [i_6] = 1312873223;
                    arr_34 [i_5] [i_5] [i_5] = ((max(var_2, 14502)));
                }
            }
        }
        arr_35 [i_5] = (max((arr_22 [i_5] [i_5]), ((769986638 ? ((min(189, var_0))) : ((min(52, 1)))))));
        arr_36 [i_5] [i_5] = (((max(52, 15543))));
    }
    var_12 = (((min(var_1, -6549))));
    #pragma endscop
}
