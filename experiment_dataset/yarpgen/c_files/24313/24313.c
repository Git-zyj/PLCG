/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_11 = ((~(max(((-16055 ? 27719 : 37817)), 37809))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] [i_0] = ((~((~(arr_3 [i_0])))));
                var_12 = ((130 ? 6811032039584375484 : 54456));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [0] [i_2] [14] [i_3 + 2] [i_3 + 2] [i_4] = -var_1;
                            var_13 = (max(var_13, ((min(var_3, var_6)))));
                            arr_16 [2] [i_1] [2] [i_1] [i_0] = ((~(((~var_3) - var_2))));
                            var_14 = var_10;
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
            {
                arr_20 [i_0] [i_0] [15] = (min((((var_2 & ((~(arr_12 [i_0] [i_0] [4] [9] [i_0] [i_0])))))), var_7));
                arr_21 [i_5] [i_5] = (~var_10);
                var_15 = ((((var_1 ? var_0 : (arr_13 [i_0] [i_0] [i_0])))) ? var_1 : var_10);
                arr_22 [i_0] [i_0] [5] = ((-(~var_9)));
            }
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                var_16 = (max(-6955554592084728959, 2930940349));
                var_17 += var_10;
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_18 *= ((~(arr_27 [i_0] [i_6 - 1] [i_6 - 3] [i_6 - 2] [i_6] [i_7 + 1])));
                            var_19 = (max((arr_17 [16] [i_1] [13] [i_1]), (arr_27 [14] [i_6 - 1] [i_0] [i_6 - 1] [12] [i_0])));
                            arr_31 [i_8] [i_8] [10] [i_0] [i_8] [i_0] = ((-((((arr_25 [i_6] [i_6 + 1] [i_6] [i_6 - 3]) <= var_10)))));
                            arr_32 [i_8] = (((((~(arr_26 [i_6 - 2] [i_7 - 1] [i_7 - 1] [i_8])))) ? var_0 : ((~(arr_8 [i_6 - 2] [i_6 - 2])))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_20 = -var_1;
            var_21 = (~var_3);
            var_22 = (arr_28 [i_9] [i_9] [11] [8] [i_0]);
        }
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            var_23 = (((arr_28 [i_0] [6] [i_0] [13] [i_0]) ^ (~var_9)));

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                var_24 ^= (((((var_1 ? var_9 : (var_5 || var_10)))) && (((arr_0 [i_10 - 2]) && (!var_8)))));
                arr_40 [i_0] [i_11] [i_11] = var_10;
                var_25 = (((((~(arr_17 [10] [i_0] [i_10 - 2] [i_10])))) < ((~(arr_26 [i_11] [9] [9] [i_0])))));
            }
            for (int i_12 = 3; i_12 < 14;i_12 += 1) /* same iter space */
            {
                arr_44 [i_0] [i_0] = (~var_7);
                var_26 = ((((~(((arr_42 [2] [2] [1] [1]) ? var_5 : var_7)))) - (((arr_39 [i_10 - 2] [i_10 + 1]) & (arr_13 [i_10 - 2] [i_10 + 1] [i_10 + 1])))));
                var_27 = ((~(((min(-6955554592084728959, var_8))))));
                var_28 = (arr_26 [i_12] [i_10 + 1] [i_10 + 1] [9]);
            }
            for (int i_13 = 3; i_13 < 14;i_13 += 1) /* same iter space */
            {
                var_29 = (((((-var_1 + (var_3 & var_8)))) <= ((~(var_2 + var_10)))));
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_51 [i_15] [i_15] [i_14] [i_14 + 1] [i_14] [1] [i_0] = (((((~(((arr_29 [i_0] [i_0] [i_14] [11] [i_0] [16] [11]) ? var_6 : var_3))))) ? ((~(arr_6 [i_13] [i_10] [i_0]))) : (((~((max(var_0, var_9))))))));
                            arr_52 [11] [i_10] [i_10] [i_13 + 3] [i_14] [i_14 - 2] [8] = ((~(max(var_4, ((~(arr_39 [i_10] [6])))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 15;i_18 += 1)
                    {
                        {
                            arr_62 [7] [i_17] [i_16] [i_17 - 1] [i_18 + 1] = (((((~(arr_12 [i_10] [i_10] [i_10 + 1] [i_10 - 2] [i_10 + 1] [11])))) ? (((((arr_12 [i_10 + 1] [i_10] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10]) < var_0)))) : (arr_47 [i_10] [i_10 - 1] [i_17] [i_10 - 1])));
                            var_30 = ((~(((arr_50 [i_17 - 1] [i_17 - 2] [i_17 - 2] [i_17] [i_17 + 1] [i_17] [0]) ? (~5492) : ((-(arr_61 [i_17] [i_17] [i_16] [i_17] [5])))))));
                        }
                    }
                }
            }
        }
        arr_63 [i_0] = (((~var_5) ? (var_6 && var_8) : (((arr_7 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_64 [i_0] = ((((((var_3 ? var_9 : var_9)))) || var_7));
    }
    var_31 = ((21843 ? 11635712034125176137 : 1364026947));
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 15;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            {
                arr_69 [i_20] = (((((arr_34 [i_19] [1] [i_19]) / var_1)) * ((~(arr_34 [i_20] [i_19] [i_19])))));
                arr_70 [i_20] [i_20] = ((~(~var_8)));

                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    var_32 = (arr_61 [i_20] [i_19] [i_19] [i_19] [i_19]);
                    arr_73 [i_19] [i_20] [i_19] = (max((max(1, 11635712034125176160)), (arr_66 [i_21])));
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 13;i_22 += 1)
                    {
                        for (int i_23 = 1; i_23 < 14;i_23 += 1)
                        {
                            {
                                var_33 = (min(((~((~(arr_50 [i_22] [i_22] [i_22] [i_22] [i_22] [i_20] [i_22]))))), ((~(~1)))));
                                var_34 = ((min(var_3, (~var_8))));
                                var_35 = var_6;
                                var_36 = var_7;
                            }
                        }
                    }
                    var_37 = (max(-225, ((~(((arr_50 [i_21] [i_21] [i_21] [i_20] [i_19] [i_21] [i_19]) ? var_9 : var_7))))));
                }
                var_38 += var_5;
            }
        }
    }
    var_39 = var_5;
    var_40 = (((var_10 || var_4) ? ((-(~65535))) : (~var_4)));
    #pragma endscop
}
