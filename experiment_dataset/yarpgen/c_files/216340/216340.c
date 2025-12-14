/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_17));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] = (((((var_15 - (var_10 || var_17)))) >= (max(var_7, (arr_4 [i_0])))));
            var_21 = (min(var_21, ((max((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0]))), (arr_2 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_22 = (min(60194401, -6650065902454036402));
                var_23 += (min(((~((~(arr_1 [i_3]))))), (min((min((arr_1 [i_3]), var_7)), (arr_4 [i_0])))));
                arr_12 [0] [i_2] [i_3] [i_2] = (29737 + 6650065902454036402);
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_16 [i_2] [i_2] [i_2] = ((arr_15 [i_2] [i_2] [i_2]) * (max((arr_3 [i_2] [i_2] [i_4]), (arr_15 [i_0] [i_0] [i_2]))));
                arr_17 [i_2] [i_4] [i_2] [i_2] = (arr_7 [i_2] [i_4]);
            }
            var_24 |= (min((((4691 && (!2131741359)))), (min((arr_10 [i_0] [i_2] [i_0] [i_0]), (((!(arr_15 [14] [8] [i_0]))))))));
            arr_18 [i_2] = (((((arr_15 [i_2] [i_2] [i_2]) + 2147483647)) >> (((max(-130, (arr_15 [i_0] [i_2] [i_2]))) + 155))));
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            arr_22 [i_0] = (max(var_15, (min((arr_7 [i_0] [i_5 + 2]), (min((arr_10 [i_0] [i_5] [i_0] [i_0]), 255))))));
            var_25 ^= ((-((min((arr_11 [i_0]), (arr_11 [i_0]))))));
            var_26 = (min(var_26, (arr_1 [i_0])));
            arr_23 [i_0] [0] [5] = (arr_21 [i_5]);
        }
        arr_24 [i_0] [0] = (!var_18);
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_30 [i_6] = var_17;
            arr_31 [i_6] = var_8;
        }
        arr_32 [i_6] = ((var_6 ? (((arr_29 [i_6] [i_6] [i_6]) ? (arr_27 [i_6]) : (arr_29 [i_6 + 1] [i_6] [i_6]))) : var_8));
    }
    var_27 = ((!((((var_6 ? var_8 : 1))))));

    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_28 = (min((min(((var_9 ? var_11 : (-9223372036854775807 - 1))), ((min((arr_25 [i_8] [i_8]), var_3))))), ((max((max(var_2, (arr_33 [i_8]))), 35798)))));
        var_29 -= ((-(max(var_5, (arr_26 [i_8])))));
        arr_35 [i_8] = (max((min((arr_33 [i_8]), (arr_33 [i_8]))), (min((arr_33 [i_8]), (arr_33 [i_8])))));
    }
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 15;i_12 += 1)
                    {
                        arr_45 [i_9] [i_10] [i_11] [i_9] [i_11] [1] = 130;
                        var_30 = ((4234772895 | (var_12 / var_2)));
                        arr_46 [i_9 - 1] [i_9] [i_11] [i_12 + 1] [i_9] = (i_9 % 2 == zero) ? ((((arr_26 [i_9]) << (((arr_26 [i_9]) - 4941973795954046672))))) : ((((arr_26 [i_9]) << (((((arr_26 [i_9]) - 4941973795954046672)) + 2171207340210156898)))));

                        for (int i_13 = 1; i_13 < 14;i_13 += 1)
                        {
                            var_31 = (arr_47 [i_9] [i_10] [i_11 + 1] [i_12] [i_13]);
                            arr_49 [i_11] [i_10] [i_11] [i_10] [i_13] |= (((arr_40 [3]) || var_12));
                            arr_50 [i_9] [i_10] [2] [i_12] [i_13] = var_2;
                        }
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            arr_53 [i_9 - 3] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = (arr_34 [i_11 - 2]);
                            arr_54 [i_9] [i_10] [i_11 + 1] [i_12] [i_14] [i_9] = (82 && 7858025580350047739);
                            var_32 -= ((!(arr_43 [i_12] [i_10 + 1])));
                            var_33 = (((arr_48 [6] [i_9]) ? var_16 : (arr_47 [i_9 - 3] [15] [i_11 - 2] [i_12 - 3] [i_14])));
                            arr_55 [i_9] [i_11 - 1] [i_9] [i_12] [i_14] = var_13;
                        }
                        var_34 = var_13;
                    }
                    for (int i_15 = 4; i_15 < 14;i_15 += 1)
                    {
                        var_35 = ((((((((arr_27 [i_9]) + (arr_38 [i_10 + 2] [i_11] [i_15]))) / ((max(var_8, var_14)))))) ? var_5 : (arr_38 [i_11 + 1] [i_10] [i_11])));
                        arr_59 [i_9] [i_9] [i_11] [i_15] = 44494;
                    }
                    arr_60 [i_9] [i_10] [i_9] [i_10] = (((((!(arr_34 [i_9 - 1])))) << ((((2533419115131338274 < (arr_57 [i_9] [5] [i_11] [i_9] [i_9])))))));
                    var_36 = (min(var_36, (arr_29 [i_10 + 1] [i_11] [i_9 + 1])));
                    arr_61 [i_9] [i_10] [i_10] [i_9] = ((!(arr_26 [i_9])));
                }
            }
        }
    }
    #pragma endscop
}
