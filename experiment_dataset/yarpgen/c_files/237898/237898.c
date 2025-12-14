/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_20 = ((+(((arr_1 [i_0]) | (arr_0 [7])))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_21 = var_17;
            var_22 = (arr_3 [i_1] [i_0 - 2] [i_0 - 1]);
            arr_5 [i_0] [1] [i_0] = (arr_3 [i_0 + 2] [i_0 + 1] [i_0]);

            for (int i_2 = 4; i_2 < 12;i_2 += 1) /* same iter space */
            {
                arr_9 [1] [i_0] [10] [i_2 - 3] = ((var_18 ? var_14 : ((-(arr_1 [i_0])))));
                arr_10 [i_0] [1] [i_0] = (((arr_3 [i_2] [11] [i_2 + 2]) ? var_3 : ((var_6 ? (arr_7 [i_0] [0] [i_2 - 4] [i_2]) : (arr_8 [i_0] [i_0] [12] [i_0])))));
                var_23 = (arr_8 [i_0] [i_1] [6] [i_0]);
                arr_11 [5] [i_0] [i_2] = (~var_4);
            }
            for (int i_3 = 4; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] = ((!(((~(arr_7 [6] [4] [i_3] [i_0 + 1]))))));
                arr_15 [8] [8] [i_0] [i_0] = (((((!(arr_12 [i_0])))) >> (1099511627264 - 1099511627249)));
            }
        }
        var_24 = (((arr_7 [6] [9] [i_0] [i_0 + 2]) != (var_9 - var_0)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_25 = arr_16 [i_4] [i_4];
        arr_18 [i_4] = var_12;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = (arr_21 [2]);

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_26 = (!var_8);
            arr_25 [i_5] [i_5] = (arr_16 [i_5] [i_6]);
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_27 = ((((var_9 ? var_9 : var_2)) <= (arr_16 [i_5] [i_7])));
            var_28 &= ((((var_9 && (arr_28 [10] [i_7] [i_7])))));

            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                arr_33 [i_7] [i_8] [i_7] [i_7] = var_0;

                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    var_29 = var_9;
                    var_30 = (arr_28 [5] [13] [i_5]);
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    arr_40 [i_8] [i_7] [15] [i_8 + 1] [i_10] = (4940 - var_6);
                    var_31 = ((5833611287880904055 >> (((arr_34 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [2] [i_8 + 1]) - 4211579454))));
                    var_32 = var_11;
                    var_33 = (((((12613132785828647583 >> (var_6 - 1085197532)))) ? (~var_17) : var_1));
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    arr_44 [i_8] [3] [2] [i_8] = var_9;
                    var_34 &= (~2128487461866161814);
                }
                var_35 = ((~(((arr_23 [i_5] [i_7] [10]) ? var_4 : var_0))));
                arr_45 [i_8] = var_1;
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {

                for (int i_13 = 3; i_13 < 14;i_13 += 1)
                {
                    arr_50 [i_5] [8] [6] [i_5] [i_5] = (((var_14 & (arr_46 [i_13 + 1] [8] [i_13 + 1]))) | var_6);
                    arr_51 [10] [10] [10] [i_13] [i_12] [12] = ((~((var_9 ? var_15 : var_10))));
                }
                var_36 = (~var_15);
            }
            var_37 = (((~var_17) && (arr_49 [2])));

            for (int i_14 = 3; i_14 < 15;i_14 += 1)
            {
                arr_55 [i_14] = var_3;
                var_38 = (~var_10);
                arr_56 [15] [i_14] [i_14] = (arr_42 [i_14 + 3]);
            }
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                var_39 = (arr_49 [4]);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_40 = var_15;
                            var_41 = (arr_38 [i_15]);
                        }
                    }
                }
                var_42 = var_6;
                arr_66 [i_5] [i_5] = (((var_0 >= var_3) ? 16318256611843389801 : (arr_34 [i_5] [i_7] [i_5] [14] [8] [i_7])));

                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    arr_71 [i_18] = (((arr_63 [14] [i_7]) ? ((var_13 ? var_17 : (arr_61 [8] [10] [17] [10]))) : (arr_58 [i_5] [1] [i_5])));
                    var_43 = ((((var_4 ? var_14 : var_15)) % ((var_15 ? var_3 : var_13))));
                }
            }
        }
        for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
        {
            arr_74 [i_19] = var_19;
            var_44 = (((((var_19 ? var_6 : var_13))) ? (!var_6) : (((arr_29 [9] [16] [i_19]) / (arr_36 [i_19])))));
            arr_75 [i_19] [i_19] = (~var_12);
            var_45 = (arr_17 [i_5]);
            var_46 *= (arr_54 [i_5] [i_5] [i_19] [10]);
        }
    }
    var_47 = (((((var_11 ? ((min(var_13, var_7))) : var_11))) ? var_0 : (((-((max(var_2, var_19))))))));
    var_48 = (~(((!((min(2547, var_11)))))));
    #pragma endscop
}
