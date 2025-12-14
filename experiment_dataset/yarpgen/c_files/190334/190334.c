/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((min(var_14, (arr_2 [4] [i_1 + 2] [i_1 + 1])))) ? ((max(50, (arr_2 [i_0] [i_1 - 1] [i_1 + 1])))) : (((arr_2 [i_1] [i_1 - 1] [i_1 + 2]) ? (arr_2 [i_1] [i_1 + 2] [i_1 + 2]) : (arr_2 [i_1] [i_1 + 1] [i_1 + 2])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 = (max(var_16, ((((((134 ? (!255) : ((max(126, (arr_5 [i_0]))))))) ? var_8 : (((((21 | (arr_0 [1])))) ? (max((arr_8 [i_2]), (arr_5 [i_0]))) : 37)))))));
                    arr_9 [i_0] [i_1] [i_2] [1] = var_4;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_17 = (((~(-127 - 1))));
                        var_18 = (min(var_18, (!var_2)));
                        arr_12 [i_0] [i_0] [i_0] [2] = -102;

                        for (int i_4 = 4; i_4 < 8;i_4 += 1)
                        {
                            arr_15 [5] [i_2] [i_1] = ((111 ? (arr_13 [i_4] [i_3] [i_2] [i_1 - 1] [i_0]) : (arr_8 [i_0])));
                            arr_16 [0] [i_1 + 1] [i_1 + 1] [i_3] [i_4] = (arr_14 [i_1 + 1] [i_1 + 1] [i_2] [i_4 - 1] [7]);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_19 = 0;
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_5] = (!1659383439);
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_23 [i_6] [0] = (!var_14);
                            arr_24 [i_0] [4] [i_0] [5] [i_6] [i_6] = ((((((arr_4 [i_6]) ? 21 : 1))) ? (arr_3 [i_1 - 1]) : var_5));
                        }
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_20 = (arr_22 [i_0] [i_0] [i_1] [i_1] [i_1] [3]);
                        var_21 = (!32766);
                    }
                    var_22 = (max(var_22, (((!((((arr_25 [i_1 + 2] [i_1] [i_1]) >> (((arr_18 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1]) - 52624))))))))));

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_23 = (min(121, ((var_6 ? (arr_27 [i_8] [i_2] [i_1] [i_1] [6]) : (arr_20 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_8 - 1])))));
                        var_24 = -9350;
                        var_25 = (((((+((min((arr_1 [i_0]), (arr_27 [i_0] [i_0] [i_0] [8] [i_0]))))))) ? (arr_18 [7] [i_8] [i_8] [i_8 - 1] [i_1 - 1] [i_1]) : (arr_22 [9] [i_1] [i_2] [i_1] [i_1] [i_2])));
                        arr_30 [i_8] [i_1] [i_2] [i_8] [i_8] [i_2] |= (!-9350);
                        var_26 = var_9;
                    }
                }
                var_27 ^= var_1;
                var_28 &= var_8;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_29 = 1;
                            var_30 = 1;
                            arr_35 [i_0] [i_1] [i_9] [i_1] = ((min((arr_31 [9] [i_1 - 1] [i_1 - 1] [8]), -2147483642)));
                        }
                    }
                }
            }
        }
    }
    var_31 = var_10;
    var_32 = ((var_1 ? (min(1, var_12)) : var_11));
    #pragma endscop
}
