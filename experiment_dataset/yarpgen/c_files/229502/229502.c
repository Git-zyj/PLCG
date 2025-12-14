/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_1 + var_7);
    var_13 = (((min(var_6, (!58090))) || ((min(var_7, var_4)))));
    var_14 = ((var_0 ? ((max(var_7, var_9))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    var_15 = (max(var_15, 4516908956800781330));
                    var_16 = (arr_4 [i_1 + 2]);

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_17 = 4578764774312339141;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_18 = (((!449119237) != (((!(arr_9 [i_0] [i_1] [i_1] [i_1] [i_4]))))));
                            var_19 = (~1377996650709382232);
                            arr_12 [i_1] [i_4] [i_4] [i_1] [i_1] = ((((529494328 ? var_6 : (arr_3 [i_3]))) | (25693 << var_10)));
                            arr_13 [i_3] [i_3] [21] [i_4] [i_3] [i_3] [i_3] = -var_3;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_20 ^= ((-(((arr_1 [i_1] [i_6]) & (!var_7)))));
                                arr_18 [i_0] [i_0] [i_2] [i_0] [16] = (min((((116 > (arr_15 [i_0] [i_1] [i_1] [i_0])))), (min((min(var_3, var_6)), (arr_2 [i_1 - 2] [i_1 - 2] [i_2 - 1])))));
                                arr_19 [i_0] [i_5] |= (!529494319);
                                var_21 = (((((max(var_10, (arr_14 [1]))) << ((((529494328 ? 3765472967 : 2387977576)) - 3765472955))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_22 = (((((-88 + 2147483647) >> (((arr_22 [i_1 + 1] [i_1 - 2] [i_1 - 1]) - 6378)))) >> (((((((arr_20 [i_0] [i_1] [i_7]) << 25)) | (max(-608100774, (arr_11 [2] [i_0] [i_1] [i_1] [i_7] [i_1] [i_1]))))) - 33564056))));
                    var_23 = (min(var_23, 98));
                    var_24 = min((((-(arr_16 [7] [3] [i_1] [i_1] [7] [i_1])))), (((87 - 242) ? (((-(arr_14 [i_0])))) : ((234 ? (arr_20 [i_0] [i_1] [9]) : var_11)))));
                }
                arr_23 [i_0] [i_1] = ((!(!var_9)));
                arr_24 [i_0] [i_1] = var_4;
            }
        }
    }
    #pragma endscop
}
