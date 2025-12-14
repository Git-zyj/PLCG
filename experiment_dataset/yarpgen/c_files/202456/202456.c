/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 &= ((~(arr_0 [i_0] [1])));
        var_21 ^= (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_22 = (((arr_8 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 3]) ? (((arr_5 [i_0]) / (arr_6 [i_0] [i_0] [i_0] [i_3 - 1]))) : (arr_0 [i_0 - 2] [i_3 + 1])));
                        arr_13 [i_0] = ((-(((!(arr_0 [i_2] [i_2]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_21 [i_6] [16] [i_0] [i_0] = (arr_20 [i_0 - 3] [i_5 - 1] [i_6 + 2] [i_4]);

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_23 -= (((arr_14 [i_7]) ? (arr_14 [i_4]) : (arr_14 [i_4])));
                            var_24 |= (arr_18 [i_0] [i_4] [i_0 - 1]);
                            arr_24 [i_5] [i_0] [i_0] [i_5] [i_0] [i_0] = var_12;
                            var_25 = (arr_9 [i_0 - 2] [i_7] [i_6] [i_6]);
                            arr_25 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0] = (((!14798072427454143575) ? 93 : 50422));
                        }
                    }
                }
            }
        }

        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            var_26 = (((arr_19 [i_8 + 3] [i_0 - 2] [i_0] [18] [i_0]) + (arr_19 [i_8 - 2] [i_0 - 3] [i_0] [i_0] [i_0])));
            var_27 &= (arr_0 [i_0] [i_8 + 1]);
            var_28 = (min(var_28, -var_2));
            var_29 = (min(var_29, (((15114 ? (arr_6 [8] [i_8 - 2] [i_8] [i_8 - 2]) : 50398)))));
            arr_28 [i_0] = (((arr_2 [i_8 - 1] [i_8 + 2]) || (arr_7 [i_0] [i_0] [i_8])));
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_30 -= ((-(arr_30 [i_9 - 3])));

        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            arr_35 [i_9] [i_10] [i_10] = (((arr_4 [i_10]) ? ((-(arr_2 [i_9] [i_10]))) : var_4));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_31 = (max(var_31, ((((arr_11 [i_10 + 2] [i_12] [i_12] [i_10 + 2] [i_12 + 1] [i_12 - 1]) || (arr_38 [i_10 - 2] [i_11] [i_11] [i_12 + 1]))))));
                            var_32 = (((arr_32 [i_12 + 1] [i_10 - 2] [i_10]) % (arr_2 [i_10 + 1] [i_9 - 2])));
                            arr_43 [i_13] |= ((-(arr_38 [9] [9] [i_12 - 1] [i_13])));
                            var_33 ^= (((arr_14 [i_11]) + var_0));
                            var_34 = ((-(arr_4 [i_10])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {

                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            var_35 = (max(var_35, ((((arr_23 [i_9 - 3] [i_9 - 3] [i_10 + 2] [i_10 - 1]) * var_1)))));
                            arr_51 [i_10] = ((arr_32 [i_9 - 3] [i_9 + 1] [i_9]) / (arr_49 [i_9] [i_10 - 1]));
                            var_36 *= (((arr_26 [i_9 - 3]) ? (arr_26 [i_9 - 3]) : (arr_26 [i_9 + 1])));
                            var_37 ^= (((arr_26 [i_9 - 3]) ? (((var_13 ? (arr_40 [i_14] [i_14]) : (arr_3 [i_9])))) : var_2));
                        }

                        for (int i_17 = 3; i_17 < 19;i_17 += 1) /* same iter space */
                        {
                            var_38 = (((arr_2 [i_10 - 2] [i_10 - 1]) / (arr_2 [i_10 - 1] [i_10 - 1])));
                            var_39 |= (arr_17 [i_10] [i_10] [i_10 - 2]);
                            var_40 = (((arr_31 [i_10]) / (arr_0 [i_9 - 1] [i_9 - 1])));
                        }
                        for (int i_18 = 3; i_18 < 19;i_18 += 1) /* same iter space */
                        {
                            var_41 = ((!(arr_20 [18] [i_10 + 2] [i_14] [i_18 - 3])));
                            var_42 = (max(var_42, (arr_41 [i_9 - 1] [i_10 + 1] [i_10 + 1] [i_14] [i_15] [i_18 + 1] [i_10 + 1])));
                            var_43 = ((((((arr_2 [i_14] [i_14]) / var_12))) ? (arr_22 [i_9 - 3] [i_10 + 1] [i_10] [i_10 + 1] [i_18] [i_14]) : ((var_4 >> (var_0 + 1052347538)))));
                            var_44 = ((-(arr_1 [i_18 - 3] [i_9 - 1])));
                            var_45 -= (((arr_19 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_10 - 1] [i_18 + 1]) / var_19));
                        }
                        for (int i_19 = 3; i_19 < 19;i_19 += 1) /* same iter space */
                        {
                            var_46 = (((arr_1 [i_19 - 2] [i_9 - 3]) < (arr_9 [i_9 - 1] [i_10 - 2] [i_19 - 1] [i_19])));
                            var_47 = (arr_31 [i_10]);
                            var_48 ^= (arr_56 [i_10 + 2] [i_10 - 2] [i_14] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1]);
                        }
                    }
                }
            }
        }
        for (int i_20 = 0; i_20 < 20;i_20 += 1)
        {
            var_49 = (max(var_49, (((-(((!(arr_34 [i_9 + 1] [i_9] [i_20])))))))));
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 17;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        {
                            var_50 = (min(var_50, -var_9));
                            var_51 = (((((arr_42 [i_23] [i_23]) ? var_17 : var_6)) < ((~(arr_58 [i_9] [i_20] [4] [i_22] [i_23])))));
                            var_52 = (min(var_52, (((14798072427454143577 ? -var_10 : (arr_49 [i_9] [i_9]))))));
                        }
                    }
                }
            }
            arr_71 [i_9] [i_9] = (((arr_69 [i_20] [i_20] [i_9 - 1] [i_9 + 1] [i_20]) == (arr_11 [12] [i_20] [i_20] [i_20] [i_9] [i_9])));
            var_53 = (((arr_62 [i_9 - 3] [i_9 - 2]) ? var_11 : (arr_59 [14] [14] [i_20] [i_20] [i_20] [i_9 + 1])));
        }
        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 1; i_25 < 18;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 20;i_26 += 1)
                {
                    {
                        var_54 = (((arr_53 [i_25 - 1] [9] [i_25 - 1] [i_25 - 1] [i_25]) ? (arr_53 [i_25 - 1] [i_25 - 1] [i_25] [i_25 + 2] [i_25]) : (arr_53 [i_25 + 1] [i_25] [i_25] [i_25 + 1] [i_25])));

                        for (int i_27 = 2; i_27 < 18;i_27 += 1)
                        {
                            var_55 = (((arr_46 [i_25] [i_25] [i_25 - 1] [i_25] [i_25 + 1] [i_25 - 1]) / (arr_55 [i_9] [i_9] [i_9])));
                            arr_83 [i_25] [i_25] [16] [i_26] [i_26] = (!var_7);
                        }
                        var_56 += ((var_10 ? ((((!(arr_54 [13] [15]))))) : (~var_2)));
                        arr_84 [i_9 - 1] [i_25] = ((!(~var_9)));
                    }
                }
            }
            var_57 |= (!var_12);
        }
        arr_85 [i_9] = var_11;
    }
    for (int i_28 = 3; i_28 < 19;i_28 += 1) /* same iter space */
    {
        var_58 = var_12;
        var_59 = (max(var_59, (((max(15138, -2133481024))))));
        var_60 = (max(var_60, ((max((((arr_26 [i_28 - 3]) ? (arr_26 [i_28 - 1]) : var_5)), (min((arr_26 [i_28 - 1]), (arr_26 [i_28 - 3]))))))));
    }
    var_61 = var_15;
    var_62 = ((-(min((max(var_2, var_2)), ((min(var_19, var_14)))))));
    #pragma endscop
}
