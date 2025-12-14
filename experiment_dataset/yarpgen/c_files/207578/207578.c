/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (!65520)));
                    var_19 = (max((~0), var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (243773321 || 6144);
                                var_21 = (min((33568 || var_3), (0 || 18446744073709551601)));
                                var_22 = (((var_16 || var_3) ? ((((arr_14 [i_1 - 1] [9] [0]) || (arr_14 [i_1 - 1] [i_1] [i_3])))) : (~-16992)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_19 [i_5] [1] = var_3;
        var_23 = var_12;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_24 = (((((var_9 ? var_17 : var_2))) ? (((arr_16 [i_5] [i_5]) ? 29698 : (arr_5 [i_5] [i_6] [3]))) : var_6));
            arr_22 [i_5] [i_5] [i_5] = 3739570110;
            var_25 &= (((~22978) || (arr_0 [i_5] [i_5])));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_27 [1] [i_5] [2] = (min((((-var_4 || (((arr_0 [i_5] [i_5]) || var_14))))), ((~(arr_20 [i_7] [i_7] [i_7])))));

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                var_26 = ((!((((min(var_17, var_6))) && (!1)))));
                arr_31 [i_5] [3] [i_5] [6] = 1;
                arr_32 [5] [i_7] = (min(((((arr_6 [i_5]) || (((arr_30 [i_5] [i_7] [i_8]) || 3938573184912682698))))), ((~((72 ? var_17 : var_8))))));
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_27 = (arr_17 [i_7]);
                arr_35 [9] [i_7] [5] = (((((var_1 ? (!-6145) : (max(var_12, var_13))))) ? (min(var_8, ((~(arr_1 [i_5]))))) : ((((((max(var_11, var_7))) || ((max(var_8, 139)))))))));

                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    var_28 = (min((((42557 ? var_1 : (arr_8 [11] [i_9] [i_10])))), 1));
                    var_29 = var_9;
                    arr_38 [i_5] [i_7] [i_10] = ((((min((arr_14 [i_5] [i_5] [8]), -1))) || 0));
                    var_30 = (min(((max(1, 1))), (~89)));
                }

                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    var_31 = (min((arr_8 [i_5] [i_9] [i_11 + 1]), ((-6145 ? var_13 : (arr_8 [i_5] [12] [i_9])))));
                    arr_42 [i_5] [i_7] [i_9] [i_11] = (max(((((min((arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [9]), (arr_37 [i_5] [i_5] [i_5] [i_5])))) ? 85 : ((~(arr_37 [i_5] [0] [i_5] [2]))))), ((((arr_25 [i_11 - 2] [i_11 - 2]) && ((min((arr_10 [i_5] [1] [i_9] [i_5] [0]), var_5))))))));
                    arr_43 [i_5] [i_7] [9] [i_5] [i_5] = (((((((max(255, -30387))) ? ((var_3 ? 1 : -1)) : (((20489 || (arr_8 [3] [3] [3]))))))) || ((var_7 || (arr_11 [i_11 - 1] [i_11 - 2] [4] [i_11 - 2])))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    arr_46 [i_5] [i_9] [i_9] [i_9] [i_9] = ((~(arr_16 [i_7] [i_12])));
                    var_32 = (((arr_23 [i_5] [i_5] [i_5]) ? var_17 : var_0));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_33 = (max((max(var_8, (arr_47 [i_9]))), -109));
                            var_34 = (max(var_34, 48));
                            var_35 = (((~var_14) || var_3));
                            arr_52 [i_5] [9] [i_9] [i_14] = ((!(-51 || -33)));
                        }
                    }
                }
            }
            arr_53 [i_5] [i_7] = ((var_6 ? ((min(var_11, -56))) : (((-65530 || (((243773321 ? -46 : -111))))))));
        }
        var_36 = (~57);
        arr_54 [i_5] [1] = (((((var_11 ? var_12 : (arr_33 [i_5] [i_5])))) ? ((min(-58148, ((min(-31109, 1)))))) : ((6393 ? 2941200188526789851 : (((min(127, 55))))))));
    }
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        var_37 = ((var_5 || (((-(var_8 || var_8))))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                {
                    arr_64 [i_17] = (max(((((min(1, 52052))) ? (17915 / 1) : (((arr_56 [i_16]) * var_2)))), (max(1, -1164713054))));
                    arr_65 [i_15] [i_15] [i_17] = (min(29756, var_4));
                }
            }
        }
        arr_66 [i_15] = ((var_14 ? (min((((var_3 || (arr_57 [i_15])))), (max(var_0, var_15)))) : (arr_59 [i_15] [i_15])));
    }
    #pragma endscop
}
