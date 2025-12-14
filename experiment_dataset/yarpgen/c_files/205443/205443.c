/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0 - 3] [1] [i_1] = -var_10;
                var_14 = (max(var_14, -3380714095));
                arr_6 [18] = ((((((!((var_9 <= (arr_1 [i_0] [14]))))))) < -6457150956862512879));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    arr_11 [i_2] = var_8;
                    var_15 = (min(var_15, (((var_12 >= (((((var_2 > (arr_10 [i_0 - 1] [i_1] [i_1] [14])))) - (!-6457150956862512879))))))));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_16 = max((max(var_12, 402653184)), (max((arr_10 [i_0] [i_0 - 1] [18] [i_3]), (arr_10 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_3]))));
                    var_17 ^= ((-((-var_10 | (arr_0 [i_0])))));
                    arr_14 [i_0] [i_1] [5] = var_1;
                    arr_15 [i_0 - 2] [i_0 - 2] [13] [i_0 + 1] = (max((~5101815729848990235), (max(-3026003005609774280, (!var_9)))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((-(((!((min(var_7, (arr_2 [11] [17])))))))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_27 [i_4] [1] [i_4] [i_4] = (arr_20 [i_5]);
                        arr_28 [i_4] [i_5] [i_6] [i_4] = (arr_10 [9] [i_7] [13] [i_4]);
                        var_18 -= var_8;

                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 8;i_8 += 1)
                        {
                            var_19 = (min(var_19, 0));
                            arr_31 [i_5] [i_5] [i_6] [i_4] [i_8] = var_3;
                            arr_32 [i_4] = ((-(arr_20 [i_4])));
                        }
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 8;i_10 += 1) /* same iter space */
            {
                arr_38 [i_4] [i_4] [i_4] = (((((((arr_12 [12]) ? 2147483648 : var_1)))) ? (((var_0 ? var_8 : var_11))) : 2147483136));
                arr_39 [i_4] [i_9 + 2] [i_10] [i_10] |= 1;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_20 = (arr_20 [1]);
                            arr_45 [i_12] [i_12] [i_4] [0] [i_4] [9] [i_4] = 1;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
            {
                var_21 = arr_43 [1] [i_4] [i_4] [i_9 + 1] [i_9] [2] [8];
                arr_49 [8] [i_9] [i_4] = ((((((arr_36 [i_4]) ? -100 : (arr_7 [i_4] [i_4] [i_4])))) ? (arr_16 [7] [7]) : 1));
            }
            arr_50 [i_4] [i_4] = ((+((((arr_2 [i_9 - 1] [i_9 + 2]) && (-4515960926278240801 || 0))))));
            var_22 = (min(var_22, 0));
            var_23 = (arr_22 [i_4] [i_4] [i_4] [i_4]);
        }
        arr_51 [i_4] = 0;
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (arr_33 [i_14])));
        var_25 |= 173;
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    {
                        var_26 &= var_9;
                        var_27 *= 3179048616448122883;

                        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                        {
                            var_28 ^= (((arr_9 [i_18] [i_15] [i_14]) / (arr_23 [i_16] [i_16])));
                            var_29 = (arr_46 [4] [i_16] [i_16] [i_15]);
                        }
                        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                        {
                            var_30 = (min((!var_12), (arr_57 [i_16] [i_17])));
                            arr_65 [i_14] [i_15] [1] [i_17] [0] = 1;
                            arr_66 [6] [4] [4] [i_17] [1] = ((!((((9223372036854775807 / 7) ? 65024 : ((~(arr_12 [i_15]))))))));
                            var_31 = ((((min(((((arr_61 [i_19] [i_16] [i_15] [i_14]) >= (arr_35 [i_15] [i_15] [i_19])))), (~var_1)))) ? (~-104) : 103));
                            arr_67 [i_14] [i_15] [i_16] [8] [i_17] [i_17] [i_19] = var_7;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
