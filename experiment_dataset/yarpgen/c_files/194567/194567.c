/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_9));
        var_17 = (min(var_17, (((((((arr_0 [i_0]) ? (arr_1 [15]) : (arr_0 [i_0])))) ? (((arr_0 [i_0]) ? 131070 : 70368744177663)) : (arr_1 [i_0]))))));
        var_18 = (!(arr_1 [13]));
        var_19 = (((arr_0 [i_0]) ? (arr_1 [13]) : ((~(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 = (arr_1 [i_1]);
        arr_5 [3] = var_16;
        arr_6 [4] = arr_3 [1] [i_1];
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_11 [1] = (((arr_9 [i_2]) != ((-22856 ? (arr_1 [i_2]) : (arr_9 [i_2])))));
        var_21 = (max(var_21, var_1));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_21 [i_2] [i_5] [i_4] [11] [i_4] [1] = (((((var_6 | var_14) + 2147483647)) << (((arr_0 [i_4 - 1]) - 30562))));
                        var_22 = (!var_6);
                        arr_22 [i_4 - 1] [1] [i_2] = (((arr_0 [i_4 - 1]) ? (arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_0 [i_4 - 1])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_23 = (max(var_23, (((((1953918103 | (arr_24 [i_6]))) >= ((-7277 ? (arr_16 [i_6] [i_3] [i_2]) : var_14)))))));
                        var_24 = var_16;
                        var_25 = (min(var_25, (arr_23 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1])));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_26 &= 131082;
                        arr_28 [i_7] [i_3] [i_4 - 1] [i_7] = ((-(arr_1 [i_2])));
                    }
                    var_27 = ((-0 ? 1 : ((((arr_23 [8] [1] [i_2] [5]) && (arr_24 [i_2]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_28 = (arr_29 [i_8]);
        arr_31 [i_8] = ((-(arr_30 [i_8])));
        arr_32 [i_8] = 215;
        arr_33 [i_8] [17] = ((arr_30 [i_8]) ? (arr_30 [i_8]) : (arr_29 [i_8]));
    }
    var_29 = ((((0 ? (max(1, 2466415243)) : var_3))) ? (((~5221824054165856941) ? (!145) : var_6)) : ((var_7 ? var_3 : (-14 / var_3))));
    #pragma endscop
}
