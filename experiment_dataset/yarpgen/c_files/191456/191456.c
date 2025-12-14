/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((-(((!(((var_5 ? var_1 : var_12))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 *= ((((max((max((arr_1 [10]), var_5)), -var_1))) && ((max((!9061), -80)))));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_21 += (max(var_6, (((var_16 + var_7) ? -var_2 : 9061))));
            var_22 = ((-9062 ^ ((var_17 ? (var_6 ^ var_18) : ((var_13 + (arr_1 [i_0])))))));
        }
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_23 = (min(var_23, ((min(9081, -9061)))));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_13 [i_0] [1] = (((((var_1 < (!var_2)))) * var_18));
                            arr_14 [1] [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] = ((~((var_0 / (arr_11 [i_2] [i_2 + 2] [i_2 + 2] [10] [4])))));
                            var_24 = var_14;
                        }
                    }
                }
                arr_15 [i_0] [i_0] = ((((max(-956545399629241096, var_14))) ? (((!(var_17 <= var_1)))) : (~var_14)));
            }
            var_25 = var_0;
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 9;i_6 += 1)
        {
            arr_18 [0] [i_0] [i_6] = (((arr_9 [6] [i_6 - 1] [i_6 + 2] [i_6 + 2]) - var_16));
            var_26 = (min(var_26, (arr_5 [i_0] [i_6 + 1])));
            var_27 = -1044236433170081546;
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_28 = ((((((((arr_20 [i_0] [i_0]) / (arr_5 [1] [i_0])))) | (((arr_1 [i_0]) ? (arr_7 [i_0] [7]) : (arr_6 [i_0] [10] [10] [i_7]))))) >> (79 < var_2)));
            var_29 |= var_11;
        }
        arr_22 [i_0] = var_8;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_30 = (min(var_30, var_13));
        arr_27 [i_8] = (max((((((max(var_9, var_11))) ? var_7 : (var_12 <= var_7)))), var_13));
        var_31 = ((+(max((arr_24 [10]), var_5))));
    }
    for (int i_9 = 3; i_9 < 17;i_9 += 1)
    {
        var_32 += var_17;
        var_33 += var_0;
        var_34 = var_18;
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            {
                arr_34 [7] [7] [14] = ((~((((var_8 - (arr_31 [i_11]))) - (arr_30 [i_10] [i_10])))));
                var_35 = (min(var_35, var_16));
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_36 += 9062;
                                var_37 += (956545399629241110 & 80);
                            }
                        }
                    }
                }
                var_38 = (min(-432981382, -1642536634));
            }
        }
    }
    #pragma endscop
}
