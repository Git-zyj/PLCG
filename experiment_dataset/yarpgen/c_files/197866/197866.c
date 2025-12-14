/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_9 - var_5);
    var_11 = (min(var_11, (((((122 ? (min(5929404735528878833, 9223372036854775807)) : (((4499131251609524516 ? var_4 : var_0))))) & (~161))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_12 = ((-3220 * (!var_4)));
        var_13 = 121;
        var_14 = ((-(max(8449226372296935021, 1061267372))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_15 = (((arr_4 [i_1]) % (min((arr_5 [2]), 858648844341637657))));
        arr_6 [i_1] [i_1] = ((~(((var_6 ? var_0 : (arr_0 [i_1] [i_1]))))));
        var_16 = ((122 / (arr_0 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_17 = (((min(3920178297496990564, (arr_7 [i_1]))) & ((min(var_0, (arr_10 [i_1] [i_2] [i_1]))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_18 += (arr_16 [i_1] [i_4] [i_3] [i_4] [i_5]);
                            var_19 = (((((arr_2 [i_5 + 1] [i_5 - 1]) + 2147483647)) << (((((arr_2 [i_5 - 1] [i_2]) + 129)) - 20))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_20 = (((min(var_2, (arr_14 [i_1] [i_2] [i_6])))));
                            var_21 = (min(var_1, (arr_18 [i_8] [i_1] [i_1])));
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] = var_0;
                            var_22 = (max(var_22, (((-(+-102))))));
                        }
                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            var_23 = (var_0 && -var_5);
                            var_24 = (min(-1061267367, -98));
                            arr_27 [i_1] = ((((-(arr_16 [i_9] [i_1] [i_9] [i_9] [i_9 - 1]))) + (((var_9 && (arr_16 [i_9] [i_1] [i_9] [i_9] [i_9 - 1]))))));
                            var_25 = var_5;
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_26 = (max(var_26, 87));
                            var_27 = ((((-((min((arr_28 [i_1] [i_2] [i_1] [i_7] [i_7] [i_10]), var_1))))) << (var_2 + 7968242395412345687)));
                            var_28 = (min(((max((max((arr_23 [i_1] [i_2] [i_1]), 54)), (arr_29 [i_1] [i_7] [i_1] [i_6] [i_2] [i_1])))), (min((arr_19 [i_1] [i_7] [i_6] [i_2] [i_1]), var_3))));
                            var_29 = arr_25 [i_2] [i_1] [i_2] [i_2] [i_6 - 1];
                        }
                        var_30 = (min(((~(var_4 <= 947579731))), (((!(var_1 || var_5))))));
                        var_31 = 13045;
                        var_32 = 0;
                    }
                }
            }
            var_33 = (max((~var_4), (~3257924672)));
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 8;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        {
                            var_34 = var_2;
                            var_35 &= (arr_35 [i_1] [i_2] [i_11] [i_11 + 3]);
                            var_36 = 122;
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            arr_43 [i_14] [i_1] [i_1] = (((min(((min((arr_5 [i_1]), (arr_30 [i_14] [i_1] [i_1] [i_1] [i_1])))), -101)) / var_6));

            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                var_37 = (((((((((var_1 && (arr_42 [i_1] [i_1]))))) < (arr_41 [i_1])))) < ((~(arr_9 [i_1] [4] [i_15])))));
                var_38 = (((arr_1 [i_1] [i_14]) && (((-(arr_17 [i_1] [i_14] [i_15]))))));
                var_39 += ((((min(var_5, var_4))) << (((((arr_14 [i_15] [i_1] [i_1]) ? (arr_14 [i_15] [i_14] [i_1]) : (arr_14 [i_1] [i_1] [i_1]))) - 16938019546275971696))));

                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    arr_50 [1] &= ((~(((max(var_0, var_6)) << (((arr_46 [i_15] [i_15] [i_15] [i_1]) - 4248593641))))));
                    var_40 ^= var_8;
                }
                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    var_41 = 92;
                    var_42 = ((arr_3 [i_14]) ? (min((arr_16 [i_1] [i_1] [i_1] [i_15] [i_17]), var_5)) : ((((arr_16 [i_17] [i_1] [i_14] [i_1] [i_1]) % (arr_16 [i_1] [i_1] [i_15] [i_14] [i_1])))));
                    var_43 = var_5;
                    var_44 = ((~(max(((-31220 ? (arr_17 [i_1] [i_1] [i_17]) : var_5)), var_0))));

                    for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                    {
                        var_45 = ((((min((arr_33 [i_14] [i_15] [i_1]), (arr_53 [i_18] [i_17] [i_1] [i_1] [i_1] [i_1])))) && (-8476859470997504572 || -9223372036854775807)));
                        arr_56 [i_18] [i_1] [i_15] [i_15] [i_14] [i_1] [i_1] = (arr_34 [i_1] [i_1] [i_1] [i_1]);
                    }
                    for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
                    {
                        var_46 = (((arr_1 [i_1] [i_14]) + ((((max((arr_40 [i_1] [i_14] [i_15]), (arr_38 [i_1] [i_14] [i_19])))) ? ((10636348043191073782 ? var_5 : var_3)) : var_7))));
                        arr_59 [i_1] = (arr_52 [i_1] [i_1]);
                        var_47 += (((arr_53 [10] [i_14] [4] [i_14] [i_14] [i_14]) + var_4));
                        var_48 |= (((var_7 - -var_9) ? var_6 : (arr_2 [i_15] [i_15])));
                    }
                }
            }
        }
        var_49 = ((-(((arr_38 [i_1] [i_1] [i_1]) & -var_2))));
    }
    #pragma endscop
}
