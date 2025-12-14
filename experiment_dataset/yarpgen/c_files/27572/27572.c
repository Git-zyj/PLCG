/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((-var_11 ? ((-(arr_1 [i_0] [i_0]))) : (arr_1 [5] [i_0])));
        arr_4 [i_0] [i_0] = -0;
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_17 = arr_2 [i_1 - 3];
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 = (min(var_18, (arr_9 [1] [4] [i_2] [i_4])));
                        var_19 = (((((-(~var_15)))) ? (~var_9) : ((max(((~(arr_5 [i_1]))), (arr_10 [i_1]))))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_20 = ((~((222 ? (arr_5 [i_1]) : (arr_5 [i_1])))));
                        var_21 -= (max(((max((arr_13 [i_2 - 2]), (arr_13 [i_2 + 1])))), (max(var_5, var_5))));
                    }
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        var_22 = (min(var_22, ((max(((~(arr_7 [i_6 - 3] [i_1 - 1] [10]))), ((-(arr_11 [i_6] [i_6 - 1] [10]))))))));
                        var_23 = (max(((((((arr_7 [i_2 + 1] [i_3] [1]) ? var_15 : (arr_9 [i_3] [i_2 + 1] [1] [i_6])))) ? ((var_6 ? var_9 : var_0)) : (arr_7 [i_3 + 1] [i_6] [i_6]))), (arr_8 [i_1 - 1] [i_2] [i_6])));
                        var_24 = 127;
                    }
                    arr_20 [2] [i_1] = (arr_19 [i_1] [i_2] [i_3] [i_3] [i_3]);
                    var_25 = (((((max((-127 - 1), (arr_18 [i_1] [i_1] [i_3])))) ? ((((-127 - 1) ? var_16 : (arr_0 [i_1] [i_1])))) : 5641966528577851983)));
                }
            }
        }
        var_26 = (~4294967295);
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_27 = (((arr_22 [i_7]) ? 4226333951 : (min((max(68633345, (arr_23 [i_7]))), ((min((arr_1 [i_7] [i_7]), var_12)))))));
        arr_24 [i_7] = ((14454674656353315854 ? (min((~-3543), (max((arr_23 [i_7]), (arr_23 [i_7]))))) : (arr_1 [i_7] [i_7])));

        for (int i_8 = 4; i_8 < 15;i_8 += 1)
        {
            var_28 *= (min((arr_23 [i_8]), (arr_26 [i_7] [i_8 - 2] [i_8])));
            var_29 = -33;
        }
        arr_29 [i_7] [i_7] = (arr_1 [i_7] [i_7]);
        var_30 = (max((arr_25 [i_7]), (arr_25 [i_7])));
    }
    var_31 = (~var_14);
    var_32 = var_8;
    var_33 = ((var_8 ? -var_4 : ((var_1 ? (min(2110359744, -126)) : (!var_12)))));
    #pragma endscop
}
