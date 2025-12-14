/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0 - 1] = ((-(arr_3 [i_0] [i_0 + 1])));
            var_16 = (!-var_11);
            arr_6 [i_0] [i_1] &= (arr_3 [i_0 + 1] [i_0 + 1]);
            var_17 = (arr_4 [i_0 + 2]);
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_18 = ((-(arr_9 [i_3])));
                arr_11 [11] [11] [i_3] = ((!(1 < 12326870795993029951)));
                var_19 = (~var_2);
            }
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                var_20 = (((arr_8 [10] [i_2]) + (arr_2 [i_0 + 2])));
                var_21 = -var_3;
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                arr_16 [i_0 + 1] [1] [i_0 + 1] [i_5] = ((~(arr_3 [i_2 - 1] [i_0 - 1])));
                arr_17 [i_0] [i_2] [i_2] [i_5] = (arr_14 [i_0 + 2] [i_2 - 1] [i_2 - 1]);
                var_22 = ((-((~(arr_2 [i_0])))));
            }

            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_26 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0] [4] [i_0 - 1] = var_9;
                            var_23 |= var_6;
                            arr_27 [i_2] = (arr_22 [i_0 + 1]);
                            arr_28 [i_0 + 2] [i_2] [i_6] [i_6] [i_8] = ((((-(arr_9 [8]))) / (arr_23 [i_2 - 1])));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                {
                    var_24 = ((!(arr_31 [i_0] [i_9] [i_9])));
                    var_25 = ((-(arr_25 [6] [i_2 - 1] [i_2 - 1])));
                }
                for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        var_26 = ((-(arr_23 [i_0 + 1])));
                        var_27 = var_5;
                        var_28 = (min(var_28, (((~(arr_33 [i_0 + 1]))))));
                    }
                    arr_39 [i_0] [10] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2] |= ((-(arr_13 [i_0 + 1] [i_6 - 4] [i_6 - 4] [i_6])));

                    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                    {
                        var_29 = (arr_13 [1] [i_2] [i_2 - 1] [i_0 + 2]);
                        var_30 += ((-(~var_0)));
                        var_31 = var_5;
                        var_32 = var_11;
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                    {
                        var_33 = (arr_33 [i_2 - 1]);
                        var_34 += var_10;
                        var_35 += ((~(arr_9 [14])));
                        var_36 += (((arr_36 [i_2] [i_2] [i_6] [i_10] [i_6] [i_10] [6]) >= (arr_36 [i_0 + 1] [i_2 - 1] [i_2 - 1] [i_0 + 1] [i_10] [13] [i_13])));
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                    {
                        var_37 *= var_11;
                        var_38 += (arr_9 [0]);
                        var_39 = ((!(arr_41 [1] [1] [1] [i_6 - 4] [i_6])));
                        var_40 = ((!(arr_42 [i_0] [i_0] [i_0] [i_10] [i_14])));
                    }
                }
                for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                {
                    arr_49 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_15] = ((-(arr_8 [i_6] [i_0])));
                    var_41 = -var_11;

                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        var_42 = (arr_43 [8] [i_2] [i_6 - 2] [8] [i_16] [8] [8]);
                        arr_54 [i_16] [i_16] = ((-(arr_23 [i_15])));
                        var_43 = (arr_9 [10]);
                        var_44 = (max(var_44, ((!((!(arr_15 [i_16])))))));
                    }
                    var_45 = (arr_25 [i_0] [i_0] [i_6 - 3]);
                }
                arr_55 [i_0] [i_0] [i_0] = (var_2 || (~var_2));
            }
            var_46 = (min(var_46, var_9));
            var_47 *= (arr_25 [i_0 + 2] [i_0 + 1] [i_2 - 1]);
            arr_56 [i_0] [i_0] = (((arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0 + 2]) ^ var_15));
        }
        arr_57 [i_0] = ((-(((arr_25 [i_0] [i_0 + 2] [i_0 + 2]) * (arr_13 [i_0] [i_0 + 1] [i_0] [i_0])))));

        for (int i_17 = 0; i_17 < 16;i_17 += 1)
        {
            var_48 = (min(var_48, var_7));
            var_49 = (max(var_49, ((((-((-(arr_40 [i_0 + 2] [i_17] [i_17] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0])))))))));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {

            for (int i_19 = 1; i_19 < 1;i_19 += 1)
            {
                var_50 = (arr_43 [i_18] [1] [i_19 - 1] [i_0 + 2] [i_0] [i_19 - 1] [i_19]);
                var_51 = (((arr_48 [i_0] [i_0 + 1] [i_0] [i_0]) % (arr_48 [i_19] [i_0 - 1] [i_0] [i_0 + 2])));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 16;i_21 += 1)
                    {
                        {
                            var_52 = ((-(arr_41 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_18] [i_0 + 1])));
                            var_53 = (arr_60 [8] [i_0 + 1]);
                        }
                    }
                }
            }
            for (int i_22 = 0; i_22 < 16;i_22 += 1)
            {
                arr_75 [9] [9] [i_18] [i_22] = (~((-(arr_25 [i_0] [i_0] [13]))));

                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    var_54 = ((var_8 * (arr_25 [i_0] [i_18] [i_22])));
                    var_55 = (min(var_55, (arr_70 [1] [i_22] [1] [i_0 - 1])));
                }
            }
            for (int i_24 = 0; i_24 < 16;i_24 += 1)
            {
                arr_81 [i_0 + 1] [1] [i_0 + 1] [i_0 + 1] = (arr_21 [9] [i_0 + 1] [11] [12] [i_18] [i_24]);
                var_56 += var_7;
                var_57 = (min(var_57, (arr_40 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_18])));
                var_58 = ((((arr_2 [i_24]) > var_9)));
                var_59 = (((arr_4 [i_0]) % (arr_12 [i_0] [i_0] [i_0 + 1])));
            }
            var_60 = (~-var_10);
            arr_82 [i_0] = (arr_65 [i_0] [i_18] [i_18]);
        }
    }
    var_61 ^= var_15;
    #pragma endscop
}
