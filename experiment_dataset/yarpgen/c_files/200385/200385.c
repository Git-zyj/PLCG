/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (var_6 * var_2);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((var_12 >> var_5) | ((~((min((arr_0 [i_0]), var_3)))))));
        var_17 = arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_18 |= (arr_1 [i_2 - 1] [i_2 - 1]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            arr_13 [i_2] = (arr_5 [i_2]);
                            var_19 = ((~(arr_5 [i_2])));
                            var_20 = (arr_7 [i_1] [i_3] [i_4] [i_5]);
                            arr_14 [i_1] [i_2] [i_2] = ((var_10 * (((!(arr_11 [i_1] [i_2 - 1] [i_3] [i_4] [i_5] [i_4]))))));
                        }
                    }
                }
            }
            var_21 = (max(var_21, var_10));
            arr_15 [i_1] [i_2] = ((arr_11 [i_1] [i_2] [i_1] [i_2] [i_1] [i_2 - 1]) && (~var_8));
            var_22 = var_2;
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_26 [i_1] [i_8] [i_7] = 1;
                        var_23 = ((~(arr_8 [i_6 - 1] [i_6] [i_6 - 1] [i_8] [i_6] [i_1])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_34 [i_1] [0] [1] [i_9] [i_11 - 1] = var_12;
                            var_24 = max((max((arr_11 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1]), (arr_11 [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1]))), (((arr_10 [i_11 - 1] [i_9] [i_9] [i_6 - 1]) && (arr_10 [i_11 - 1] [i_9] [i_9] [i_6 - 1]))));
                            arr_35 [i_1] [i_1] [i_1] [i_9] [i_1] [i_1] [i_1] = (arr_27 [1] [i_6] [1] [i_9]);
                            var_25 = (((((arr_20 [i_6 - 1] [i_6 - 1] [i_11 - 1]) | (arr_4 [i_9] [i_6 - 1] [i_6 - 1])))) && (max(var_4, (arr_22 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_11 - 1]))));
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_44 [i_1] [i_12] [i_13] = var_6;
                        arr_45 [i_12] [i_14] [i_13] [i_12] = (((arr_40 [i_12]) ^ (arr_40 [i_12])));
                        arr_46 [1] &= ((-var_0 | (((arr_29 [1] [i_14 - 1] [i_14 - 1] [0]) | (arr_29 [1] [i_14 - 1] [i_14] [i_14])))));
                    }
                }
            }

            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                var_26 = (~var_10);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_27 = (min(var_27, ((max(var_11, (((arr_30 [1] [1]) | (arr_30 [1] [1]))))))));
                            arr_55 [i_1] [i_12] [i_12] [1] [i_17] &= var_14;
                            var_28 = arr_49 [1] [i_15] [i_16] [i_17];
                            arr_56 [i_12] = (!(((~(arr_16 [i_15 - 1] [i_15 - 1])))));
                        }
                    }
                }
                var_29 = (((arr_54 [i_15 - 1] [i_15 - 1] [i_15] [i_15] [i_15] [i_12]) | (((!(arr_54 [i_15 - 1] [i_15 - 1] [i_15] [i_15] [i_15 - 1] [i_12]))))));
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 0;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            var_30 = ((-(var_3 * var_9)));
                            var_31 |= var_10;
                            var_32 = (((arr_62 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | (max((~var_14), (arr_59 [i_1] [i_1] [1] [i_19] [i_20])))));
                            var_33 = (arr_5 [i_12]);
                        }
                    }
                }
                arr_63 [i_12] [i_12] [i_12] [i_1] = (min((((arr_51 [i_1] [i_12] [i_12] [0]) % (arr_19 [i_1] [i_12] [i_18]))), ((((arr_19 [i_1] [i_12] [i_18]) || (arr_51 [i_1] [i_1] [i_12] [i_1]))))));
            }
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                var_34 = ((~((~(arr_38 [i_1] [i_12] [i_21])))));
                arr_68 [i_1] [i_12] [i_1] = (arr_0 [i_12]);
                var_35 = (min(var_35, ((min(((max((min((arr_6 [1] [i_12]), (arr_10 [i_21] [i_12] [1] [i_12]))), (arr_27 [i_21] [i_12] [i_21] [1])))), (((arr_16 [i_1] [i_21]) - (arr_16 [i_12] [i_21]))))))));
                arr_69 [i_12] = var_0;
            }
        }
        arr_70 [1] = (((-(arr_12 [i_1] [1] [i_1] [i_1]))));
    }
    /* LoopNest 2 */
    for (int i_22 = 1; i_22 < 1;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            {

                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    arr_81 [i_24] [i_22] [i_23] [i_24] = ((max((arr_78 [i_22 - 1] [i_23] [i_24]), (((arr_77 [i_24] [i_23] [i_24]) | (arr_71 [i_24]))))) > (arr_75 [i_22 - 1] [i_22 - 1]));
                    var_36 ^= ((~(((arr_77 [1] [1] [i_24]) + var_8))));
                    arr_82 [i_22 - 1] [i_22 - 1] [i_24] [i_24] = arr_77 [i_24] [i_23] [i_24];
                    arr_83 [i_22] [i_24] [i_24] = (~1);
                }
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        {
                            var_37 *= var_14;
                            var_38 = (!(((arr_77 [1] [i_22 - 1] [i_25]) > (arr_77 [1] [i_22 - 1] [i_25]))));
                            var_39 = ((-(arr_76 [i_23] [i_22 - 1] [i_25])));
                            arr_88 [i_26] [i_22] [i_22] = ((-(~var_7)));
                        }
                    }
                }

                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    var_40 = var_9;
                    var_41 *= min((min((arr_76 [i_22] [i_22] [i_22 - 1]), var_2)), (arr_77 [1] [i_23] [i_23]));
                }
                for (int i_28 = 0; i_28 < 1;i_28 += 1)
                {
                    var_42 &= arr_74 [i_22] [i_23] [i_28];

                    for (int i_29 = 1; i_29 < 1;i_29 += 1)
                    {
                        arr_97 [i_22] [i_23] [i_22] [i_28] [i_29] = ((+(((arr_91 [i_28] [i_29 - 1] [i_28] [i_29 - 1]) * (arr_95 [i_28] [i_29 - 1] [i_29 - 1] [i_29] [i_29])))));
                        var_43 = min(1, 0);
                    }
                }
                arr_98 [i_23] = min((arr_91 [i_22 - 1] [i_22] [i_23] [i_22]), (arr_91 [i_22 - 1] [i_23] [i_23] [1]));
                arr_99 [i_23] = arr_79 [1];
            }
        }
    }
    #pragma endscop
}
