/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_3] [i_0] [2] [i_0] [i_0] = ((-(max((arr_4 [i_1 + 4] [i_0 - 2]), (arr_0 [i_1 + 4] [i_1])))));
                            arr_9 [i_3] = (((arr_1 [i_0 - 1]) >= 1639819681));
                            var_15 = ((-(arr_3 [i_2] [i_3] [1])));
                            var_16 = var_14;

                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                var_17 = var_9;
                                var_18 = var_7;
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 15;i_5 += 1)
                            {
                                arr_14 [i_3] [i_3] [i_0] [i_3] [i_5] = var_10;
                                var_19 += (arr_0 [i_0] [11]);
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                arr_17 [i_3] [i_6] = (arr_1 [i_1]);
                                var_20 += ((var_4 ? (((((arr_5 [i_0 - 1] [0] [6]) | var_10)) << (((arr_7 [i_3 - 1] [i_0 - 1] [i_0 - 2] [7]) - 7374241120751809143)))) : (((-78 ^ ((-(arr_11 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] [14]))))))));
                                arr_18 [i_0] [5] [i_0] [i_0] [i_3] [i_0] [i_0 - 1] = (arr_3 [i_0 + 1] [i_0] [i_0]);
                                arr_19 [i_0] [i_3] [i_3] [i_3 - 1] [i_6] = min(((((arr_1 [i_0]) + (arr_10 [i_3 + 1] [i_3] [i_3 - 1] [4] [i_3 - 1])))), ((~((var_1 ? var_5 : var_14)))));
                            }
                        }
                    }
                }
                var_21 = arr_4 [i_1] [i_0];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            {
                var_22 = ((!((max((arr_15 [i_8 - 1] [i_8] [i_8] [i_8 + 3] [i_7 - 2] [i_7 - 4] [i_7 - 3]), (arr_15 [i_8 + 1] [i_7 - 1] [i_8 - 1] [i_8 + 3] [i_7 - 3] [8] [i_7 - 1]))))));
                arr_25 [i_7 + 1] [11] = var_8;
                var_23 = arr_20 [i_7 - 2] [0];
                var_24 = ((-(arr_21 [i_7 - 4] [i_7 - 3])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        {

                            for (int i_11 = 1; i_11 < 11;i_11 += 1)
                            {
                                var_25 += 43;
                                arr_34 [i_7] [i_7 + 1] [i_11] [i_7 + 1] [0] = (((((arr_20 [i_8] [i_8 + 3]) | (arr_20 [i_8] [i_8 + 3])))) ? (min((max(126, 15360)), (((13 ? var_8 : var_13))))) : (arr_10 [i_7] [i_8 + 3] [6] [15] [i_11]));
                                arr_35 [i_11] [5] [i_8 - 1] [i_7] [i_8] [i_8] = (max(((((213 <= var_8) ^ 75))), ((18446744073709536256 ? 717816499 : 2147483647))));
                                var_26 -= (18446744073709551615 + (((12445736227517806292 ? 32767 : (max(1595037692, 237833378))))));
                                arr_36 [i_7] [7] [i_8] [11] [i_9] [i_11] [i_11] = ((((+(((arr_0 [i_8] [11]) * (arr_5 [i_7 - 4] [i_8 + 2] [15]))))) < (arr_7 [i_7] [i_10 + 1] [15] [i_7 + 1])));
                            }
                            var_27 -= (max((arr_11 [i_7 - 1] [i_8] [i_9] [i_8] [i_10] [i_7] [i_9]), (arr_13 [i_7 - 3] [12] [12])));

                            for (int i_12 = 0; i_12 < 12;i_12 += 1)
                            {
                                var_28 = ((~(arr_11 [i_7] [i_8] [i_9] [i_10 + 1] [i_8 + 3] [i_12] [i_10 - 1])));
                                arr_41 [2] [5] [i_9] [i_9] = max(117, 237833378);
                                var_29 ^= ((~(arr_6 [i_10 - 1] [i_7 - 3])));
                            }
                            for (int i_13 = 0; i_13 < 12;i_13 += 1)
                            {
                                arr_44 [i_9] [10] [i_9] [8] [7] = (((~var_13) ^ -526741613));
                                var_30 = min((arr_31 [i_13] [i_10 - 1] [i_9] [i_8] [i_7 - 4]), var_7);
                            }
                            for (int i_14 = 0; i_14 < 12;i_14 += 1)
                            {
                                var_31 = (max(var_31, ((121 ? 4186112 : (var_9 - 117)))));
                                var_32 &= (((!(arr_45 [i_8 + 3]))));
                                var_33 = (arr_3 [0] [i_8 + 1] [12]);
                                var_34 -= (arr_33 [4] [i_8 + 2] [i_9] [i_10 + 1] [i_8 + 2] [i_8 + 2] [i_14]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = var_0;
    var_36 = (((241 ? var_13 : (var_4 <= var_7))));
    #pragma endscop
}
