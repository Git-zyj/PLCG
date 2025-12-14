/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (min(var_10, (((!((min(15183437662847535549, 1))))))));
        var_11 = (max(var_11, (((-(max(161128651614962387, ((((arr_2 [i_0] [i_0]) ? var_4 : (arr_2 [i_0] [i_0])))))))))));
        var_12 = (min(var_12, (min(((((var_6 + 2147483647) << (((-588238348 + 588238356) - 8))))), ((var_4 / (arr_3 [i_0] [1])))))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_13 = (max(var_13, ((min(((var_4 | (arr_17 [i_2] [i_3 - 1] [i_1 + 1] [i_2]))), ((max((((var_1 > (arr_6 [i_3] [i_3])))), var_9))))))));
                            arr_19 [1] [1] [1] [i_3] [i_4] [i_5 + 3] = (max((((arr_16 [i_1] [i_1] [i_1] [i_1 - 1] [i_5 + 2] [i_5 + 2]) ? var_8 : (arr_16 [i_1] [i_1] [13] [i_1 - 1] [i_5 - 1] [i_1]))), (max(-588238362, 1))));
                            arr_20 [i_1] [i_1] [i_2] [i_2] [i_4] [4] = 588238362;
                            var_14 = (min(var_14, ((max((var_5 * var_4), (((!((max(588238347, -588238362)))))))))));
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] [1] = (max(((((var_3 > var_1) || var_3))), (~35)));
                            var_15 = (min(var_15, (max((!var_6), (max((arr_15 [i_3] [15] [i_3]), var_7))))));
                            arr_25 [i_4] [i_1 - 1] [i_4] [i_4] [13] [13] [13] = (!-46);
                            arr_26 [i_1] [6] [6] [i_1] [i_4] = (((min(588238347, -1))) ? var_8 : var_8);
                        }
                        var_16 |= -1932008007;
                        var_17 = (max(var_17, ((((((arr_9 [i_3 - 1] [i_4 + 1] [i_1 - 1]) / var_9)) > ((min((arr_4 [i_1]), 0))))))));
                        arr_27 [i_1] [12] [i_4] [4] = (arr_9 [i_4 - 1] [i_3 + 2] [i_1 + 1]);
                        arr_28 [i_1] [i_1] [i_4] [i_4] = ((min(var_9, (min((arr_23 [19] [i_4] [12] [19] [19]), -583246478)))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_36 [i_7] [1] [i_8] [1] = (min(1058409438, -46));
                        arr_37 [i_1] [i_7] [i_8] [i_7] = var_1;
                        var_18 = min((max(((var_6 ? var_6 : var_0)), ((520093696 ? -2155 : var_2)))), ((~(arr_4 [i_1 - 1]))));
                        var_19 = max((arr_12 [i_1 - 1] [i_1] [i_1] [i_1 + 1]), (arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        arr_47 [i_1] = (arr_35 [i_1] [i_1] [i_1]);
                        arr_48 [i_1] [i_1] = min(1, 63);
                        arr_49 [i_1] [i_10] [i_11] [15] = (-35 / 15663);
                    }
                }
            }
        }
    }
    for (int i_13 = 3; i_13 < 23;i_13 += 1)
    {
        arr_54 [i_13] = (max((((arr_4 [i_13]) ? (arr_14 [i_13] [i_13] [i_13] [i_13 - 3]) : (arr_4 [i_13]))), (!var_2)));
        var_20 |= ((((min((arr_52 [18] [i_13 - 2]), (arr_52 [i_13] [i_13 + 1])))) ? (((!(arr_4 [i_13 + 1])))) : (min(var_5, (arr_4 [i_13 - 3])))));
        arr_55 [i_13] = ((!((((min((arr_17 [24] [24] [i_13] [i_13]), 1))) || ((min((arr_6 [1] [1]), var_7)))))));
    }
    for (int i_14 = 1; i_14 < 20;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 4; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_21 ^= (arr_44 [i_15 + 1] [i_15 + 1] [i_15] [i_15] [i_15]);
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 4; i_18 < 22;i_18 += 1)
                        {
                            {
                                arr_69 [i_14] [i_14] = (!1);
                                var_22 = (min(var_22, (((min(((var_1 ? var_4 : var_8), (!var_3))))))));
                                var_23 = (max(var_23, ((max(((~(arr_57 [i_14 + 4]))), ((~(arr_57 [i_14 + 4]))))))));
                                var_24 = ((0 ? ((max(8, 0))) : (max((arr_7 [i_14] [i_14]), var_3))));
                            }
                        }
                    }
                    var_25 = (2016 * 1);
                }
            }
        }
        var_26 -= (min((min((((arr_39 [i_14] [9]) ^ var_1)), (var_9 & var_8))), (((((min(var_9, var_5))) < (arr_60 [i_14 + 4] [i_14] [3]))))));
    }
    /* LoopNest 3 */
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 11;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                {
                    var_27 = (max(var_27, ((max((((!(arr_30 [i_19] [i_20] [i_19])))), ((var_9 ? (((var_9 ? 1 : var_9))) : (~324304626))))))));
                    var_28 = (max(var_28, (arr_9 [i_19] [i_19] [i_21])));
                }
            }
        }
    }
    #pragma endscop
}
