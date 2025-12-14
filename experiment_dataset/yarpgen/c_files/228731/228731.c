/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 *= (max((arr_0 [0]), (arr_2 [i_0])));
        var_17 += ((!(((((max(var_1, -2101209064))) ? (((max((arr_1 [i_0] [5]), var_9)))) : (max(var_10, var_13)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_8 [i_1] [12] [i_2] = ((!(arr_6 [i_1] [i_2] [i_1])));
            var_18 -= (!1093334235);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_19 = (!(arr_7 [i_4] [i_1] [i_1]));
                        arr_14 [i_1] = ((-(arr_6 [i_1] [i_3] [i_4])));
                        var_20 = var_11;
                        var_21 = ((!(arr_7 [i_2] [i_1] [6])));
                    }
                }
            }
            var_22 = ((arr_12 [i_1] [i_1] [7] [i_2]) ? (arr_12 [i_2] [i_2] [i_1] [i_2]) : (arr_12 [i_2] [6] [i_1] [i_2]));
            arr_15 [i_1] = var_6;
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_19 [i_5] [i_1] [i_5] = var_6;
            var_23 &= ((!(arr_11 [i_1] [9] [i_5] [i_5] [i_5])));
            var_24 = (!var_5);
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_22 [i_1] [i_1] = ((!(arr_13 [i_1] [16] [i_1] [i_6])));
            arr_23 [i_1] [i_1] = (((arr_2 [i_6]) ? (arr_17 [i_1] [i_6]) : ((var_3 ? (arr_9 [i_6] [i_6] [i_6] [i_6]) : var_8))));
        }
        var_25 = (min(var_25, (((!(arr_21 [i_1] [i_1]))))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_26 = (!var_7);
        var_27 += (!((min((arr_5 [i_7] [i_7]), (arr_5 [i_7] [i_7])))));
        var_28 = var_3;
    }
    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        var_29 = ((var_8 ? (arr_4 [i_8 + 1] [i_8 - 1]) : (min((arr_9 [i_8] [i_8 + 2] [i_8 - 1] [i_8]), (arr_4 [i_8 + 2] [i_8 + 2])))));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_30 = (min(var_30, (((!((min((arr_25 [i_8 - 1]), (arr_25 [i_8 + 2])))))))));
            var_31 = (arr_2 [i_8]);
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        var_32 ^= (arr_0 [1]);
                        arr_37 [i_8] [i_8] [i_11] [i_8] = ((!(((~(arr_1 [i_8] [i_8 + 1]))))));
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 7;i_13 += 1) /* same iter space */
                    {
                        var_33 = ((!(arr_3 [i_8 - 1])));
                        arr_42 [i_8] [i_10] [i_10] [9] = ((~(~var_0)));
                        var_34 = (((arr_30 [i_13 - 1] [i_8 - 1]) ? (arr_30 [i_13 - 1] [i_8 + 2]) : (arr_30 [i_13 + 2] [i_8 + 1])));
                        var_35 -= (!var_7);
                        var_36 = ((var_14 ? var_2 : (arr_35 [i_13] [i_13 - 1] [i_13] [i_13 + 2])));
                    }
                    for (int i_14 = 1; i_14 < 7;i_14 += 1) /* same iter space */
                    {
                        var_37 = ((!(arr_43 [4] [i_8] [i_14] [5] [i_8] [1])));
                        arr_45 [i_14] [i_14] [i_8] [i_8] [3] [3] = (max(((!(arr_13 [i_8] [i_8 - 1] [i_14 + 1] [i_14 + 1]))), ((!((max(var_12, (arr_11 [i_8] [i_8] [15] [i_11] [i_14]))))))));
                        var_38 = (max(var_38, ((min(var_9, (!115))))));
                        var_39 &= (max((arr_18 [i_14 + 3] [i_14 + 1] [1]), var_6));
                    }

                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        var_40 *= (((arr_21 [i_10] [i_15]) ? ((-(arr_13 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 2]))) : (arr_16 [5])));
                        var_41 = (max(var_41, (max((((!((max((arr_5 [i_8] [i_10]), var_7)))))), (min(var_0, (arr_4 [5] [i_8 + 1])))))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        var_42 &= (((arr_25 [i_8 + 2]) ? (arr_25 [i_8 - 1]) : (arr_25 [i_8 + 2])));

                        for (int i_17 = 1; i_17 < 8;i_17 += 1)
                        {
                            var_43 += (~var_2);
                            var_44 *= arr_52 [i_8] [i_8] [i_8] [3] [i_8];
                            var_45 = (!var_9);
                        }
                        for (int i_18 = 2; i_18 < 9;i_18 += 1)
                        {
                            var_46 = (min(var_46, (((!(arr_9 [i_18 - 1] [2] [i_11] [i_8 + 1]))))));
                            var_47 = (min(var_47, (arr_10 [i_16] [i_18 + 1] [14] [i_8 - 1])));
                            var_48 = ((~(arr_1 [i_18 + 1] [i_8 + 1])));
                        }
                    }
                    for (int i_19 = 2; i_19 < 9;i_19 += 1)
                    {
                        var_49 -= ((~(~var_10)));
                        var_50 = var_13;
                        var_51 = var_0;
                    }
                    arr_62 [i_8] [i_10] [i_11] = (max(29845, 48));
                    var_52 = ((!((!((min(var_14, var_13)))))));
                }
            }
        }
        var_53 = (max((min((arr_43 [i_8 + 2] [i_8] [i_8 - 1] [0] [i_8] [0]), (arr_29 [i_8 - 1] [i_8 - 1]))), (max((arr_29 [i_8 + 1] [i_8 - 1]), (arr_29 [i_8 + 2] [i_8 + 1])))));
    }
    var_54 = max(var_15, var_10);
    var_55 = (!var_3);
    var_56 &= var_12;
    #pragma endscop
}
