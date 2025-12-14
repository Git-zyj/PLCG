/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-127 - 1);
    var_17 = (max(var_17, 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = ((~(arr_8 [i_0])));
                                var_19 = ((-(!0)));
                            }
                        }
                    }
                    var_20 = 0;
                    var_21 = arr_4 [i_0] [16];
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_22 = ((~(((!((min((arr_14 [i_5] [i_5]), var_7))))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    {
                        var_23 = (max(var_15, (arr_19 [i_8])));
                        arr_21 [i_7] [i_6] [i_7] [i_8 + 1] = (min(var_6, var_7));
                        arr_22 [i_5] [i_5] [i_7] [i_7] [i_8] = arr_12 [i_5] [i_6] [i_7] [i_8 + 2] [i_7];
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 8;i_11 += 1)
                {
                    {

                        for (int i_12 = 4; i_12 < 10;i_12 += 1)
                        {
                            arr_34 [i_5] [1] [i_5] [i_5] [i_5] [i_10] = (arr_8 [i_10]);
                            var_24 = var_5;
                        }
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            arr_39 [i_5] [i_5] [i_10] [6] [i_5] = ((~(arr_23 [i_9])));
                            var_25 = ((!((max(var_13, (arr_31 [i_9] [i_9] [i_10] [i_9 - 1] [i_9 - 2]))))));
                            var_26 ^= (arr_29 [i_5] [i_9] [i_10] [i_10]);
                        }
                        var_27 = var_0;
                    }
                }
            }
        }
        arr_40 [1] = var_2;
        var_28 -= -var_13;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_29 += (arr_0 [0]);
        arr_43 [i_14] = (~var_14);
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_30 += (max((~var_5), (min(var_7, (arr_8 [0])))));
        var_31 = (arr_7 [2] [i_15] [i_15] [2]);
        var_32 = var_15;

        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            var_33 += (~var_10);
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        arr_57 [i_17] [i_17] [i_17] = arr_5 [i_18] [i_16] [i_16];
                        arr_58 [i_15] [i_16] [i_17] [i_18] = var_6;
                        var_34 = (min(var_34, (arr_52 [i_18] [i_16] [i_16] [i_15])));
                        var_35 = (min(7041028547915309353, (!48977)));

                        for (int i_19 = 0; i_19 < 23;i_19 += 1)
                        {
                            arr_61 [i_17] [i_19] = (max(var_11, (arr_55 [i_15] [i_17] [i_17])));
                            arr_62 [i_15] [i_17] = var_2;
                        }
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            arr_65 [i_17] [i_17] [i_17] [16] [16] [i_20] [i_16] |= (min((arr_46 [i_18] [i_15]), 0));
                            arr_66 [i_20] [i_20] [i_17] [i_16] [i_17] [i_16] [i_15] = var_3;
                        }
                    }
                }
            }
            arr_67 [i_15] = max(((max((arr_7 [i_16] [i_15] [i_16] [i_16]), (arr_7 [i_16] [i_16] [i_15] [i_16])))), (max((arr_46 [i_16] [i_16]), var_4)));
        }
        for (int i_21 = 1; i_21 < 20;i_21 += 1)
        {
            /* LoopNest 3 */
            for (int i_22 = 1; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 20;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        {
                            arr_78 [i_15] [i_23] [i_24] = arr_52 [i_15] [i_15] [i_23] [i_15];
                            arr_79 [i_15] [i_21] [i_22] [2] [i_23] = (arr_72 [i_15] [i_21 - 1] [i_22]);
                            arr_80 [i_24] [i_23] = (max((arr_56 [i_15] [i_21 + 1] [i_22] [i_23] [i_15]), 1));
                            var_36 = (max(var_36, -4095));
                        }
                    }
                }
            }
            var_37 ^= ((~(max(var_7, (arr_3 [1] [i_15] [i_15])))));
        }
        for (int i_25 = 2; i_25 < 22;i_25 += 1)
        {
            var_38 = 1826876421813701429;
            /* LoopNest 2 */
            for (int i_26 = 4; i_26 < 22;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    {
                        arr_87 [i_15] [i_25 - 1] [i_26] [i_26] [i_27] = (!var_5);
                        var_39 += ((-((min((arr_49 [i_25 + 1] [i_25 - 1] [i_26 + 1]), (arr_74 [i_26] [i_25 + 1]))))));
                    }
                }
            }
        }
        arr_88 [i_15] = (arr_47 [i_15]);
    }
    #pragma endscop
}
