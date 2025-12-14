/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_10 = ((!(arr_0 [i_0])));
                    var_11 ^= (arr_2 [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_12 *= ((var_0 ? var_7 : (arr_0 [i_0])));

                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_13 *= var_7;

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_14 = 3;
                            arr_20 [3] [i_1] [i_1] [i_4 + 2] [i_5] = (!876054454);
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [i_6] [4] [i_3] [3] [3] [i_6] [i_6] = (((arr_16 [i_4 + 1] [i_4 - 1] [i_4]) > var_5));
                            arr_24 [i_0] [9] [1] [14] [i_6 + 1] [i_6] [i_0] = (~(arr_19 [i_0] [i_1] [i_3] [i_3] [i_1] [i_6 - 1]));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_29 [4] [i_1] [i_3] [i_4] [2] [1] = (((~var_6) | (((arr_27 [i_7] [i_4] [i_1] [i_1]) ? (arr_14 [i_0] [i_1] [i_3] [i_4 + 4]) : (arr_14 [i_1] [i_3] [i_4 - 1] [i_7])))));
                            arr_30 [i_0] [i_1] = var_7;
                        }
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_15 *= ((-(arr_28 [i_0] [10] [i_3] [i_8 - 1] [i_1] [i_4 + 2] [2])));
                            arr_35 [i_3] [i_1] [i_3] = ((39 * (arr_4 [i_8 + 1] [i_1] [14])));
                            var_16 = (!2147450880);
                        }
                    }

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_39 [i_0] [i_1] [i_0] [i_9] = (11799442879482484333 && -var_7);

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_17 -= (((arr_33 [i_0] [6] [i_3] [10] [i_10]) ? var_8 : 0));
                            var_18 += ((1 ? (-16925380 - 5958636290609460264) : (((1 ? var_6 : 0)))));
                            var_19 = (arr_26 [i_1] [i_3]);
                        }
                        for (int i_11 = 2; i_11 < 15;i_11 += 1)
                        {
                            var_20 = -1;
                            var_21 = (((arr_2 [i_0] [i_0]) ? -105 : 18035654862493994723));
                            var_22 *= (arr_33 [3] [3] [i_3] [i_0] [i_0]);
                            var_23 = (max(var_23, (((-(arr_25 [i_11 - 2] [i_11 + 1]))))));
                        }
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            var_24 = -var_1;
                            arr_48 [i_0] [i_1] [i_3] [1] [i_12] = (var_9 != (!6));
                        }
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            var_25 = 1;
                            arr_51 [i_1] [i_1] [5] [i_1] [1] [i_1] [i_1] = var_1;
                        }
                        var_26 = (((!var_4) ? (arr_47 [i_9] [i_9] [i_0] [i_9] [i_9]) : 4294967295));
                        var_27 = -1;
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {

                        for (int i_15 = 1; i_15 < 14;i_15 += 1)
                        {
                            var_28 = (arr_9 [i_0] [i_0] [i_0]);
                            arr_56 [i_0] [5] [1] [i_0] [i_0] [i_0] [5] = (~-var_4);
                        }
                        for (int i_16 = 2; i_16 < 15;i_16 += 1)
                        {
                            arr_59 [i_0] [i_1] [i_1] [i_3] [i_14] [i_3] [i_16 - 1] = ((~(~var_2)));
                            arr_60 [i_0] = var_9;
                        }
                        for (int i_17 = 1; i_17 < 14;i_17 += 1)
                        {
                            arr_65 [i_17] [i_17] = ((((-(arr_7 [i_0] [i_17 - 1] [i_3] [i_14]))) * (arr_34 [i_0] [i_1] [i_3] [i_3] [i_14] [i_14] [i_3])));
                            arr_66 [i_3] [i_3] [i_3] [i_17] [13] = (((arr_42 [i_0] [i_1] [2] [i_17 + 1] [i_0]) ? (arr_42 [i_1] [7] [1] [i_17 + 1] [i_17]) : (arr_42 [i_0] [i_17] [14] [i_17 - 1] [i_3])));
                        }
                        var_29 *= (!var_7);

                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            arr_70 [12] [13] [i_3] [i_14] [i_1] [i_3] [i_0] = 3737929553622257279;
                            var_30 ^= var_5;
                            arr_71 [i_3] &= (((((var_0 ? (arr_31 [i_0] [i_0]) : var_5))) ? (~var_3) : (arr_58 [i_0] [i_3])));
                            var_31 = 24;
                        }
                        arr_72 [1] [i_1] [i_3] [6] = var_8;
                    }
                    var_32 = (max(var_32, (!-38)));
                }
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 15;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {
                        {
                            arr_78 [i_0] [i_0] [11] [i_0] &= 126;
                            var_33 = var_3;
                            var_34 = 934679503;
                            var_35 = (((var_5 ? var_6 : (arr_73 [i_0] [10] [i_19]))));
                        }
                    }
                }
            }
        }
    }
    var_36 &= var_4;
    #pragma endscop
}
