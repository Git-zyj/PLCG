/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [4] [i_0]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [3] [i_0] = var_0;
            arr_6 [i_0] = ((var_8 ? -var_10 : (((arr_0 [i_0]) ? -13 : var_5))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [6] [i_0] [i_3] [i_4] = var_0;
                        var_11 = (min(var_11, (((!((((max(var_9, var_4)) | var_2))))))));
                        var_12 ^= var_0;
                    }
                }
            }
            arr_15 [i_0] [i_2] = var_3;
            arr_16 [8] [i_0 + 1] &= (arr_9 [2] [1] [2]);

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_13 = (max(var_13, ((((arr_12 [i_5]) || var_5)))));
                var_14 = (arr_7 [i_0] [i_0 - 1]);
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_21 [i_0] = var_6;
                var_15 += ((!(((-1537777912 ? var_10 : 1488335274)))));
            }
        }
        var_16 &= (max((arr_13 [i_0 + 1] [4]), ((-(arr_20 [i_0] [11] [i_0 + 2] [i_0])))));
        arr_22 [i_0 + 2] [i_0] = (arr_17 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {

                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    var_17 = (arr_24 [i_8]);
                    var_18 = ((-1 ? -122 : (arr_29 [i_10 + 1] [i_7] [i_10 - 1] [i_10 + 3])));
                }
                arr_33 [8] [i_7] [8] = (1 == 9223372036854775807);
                var_19 = (27362 != var_1);
                arr_34 [13] [i_7] [1] [i_9] = (((arr_29 [i_7] [i_7] [i_7] [i_7]) ? (arr_17 [i_8] [i_7] [i_8 - 1]) : var_2));
                var_20 -= (((arr_23 [i_7 + 2]) ? (arr_25 [i_9]) : var_8));
            }
            for (int i_11 = 3; i_11 < 13;i_11 += 1)
            {
                var_21 = (max(var_21, (((!(arr_23 [i_7 + 1]))))));
                var_22 = ((!(arr_10 [i_7] [i_7 + 2] [8])));
                var_23 = -234881024;
                var_24 = (min(var_24, (arr_3 [i_8 - 1])));
            }
            var_25 = 0;
            var_26 *= (((arr_24 [i_7 - 1]) - 0));
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            arr_41 [i_7] = (((arr_23 [i_7]) == (arr_19 [6] [i_7] [i_7] [i_12])));
            arr_42 [i_7 + 1] [i_7] [i_7] = ((((arr_30 [8] [i_7] [i_7] [i_12]) + 0)));
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_27 = (((arr_37 [i_7 - 1] [1] [1] [i_7 + 2]) | var_7));
            arr_47 [i_7 - 1] [i_7] [i_7 - 1] = (arr_31 [i_7 - 1] [i_7 + 2] [i_7]);
            arr_48 [i_7] [i_13] = ((!(!var_6)));
            var_28 = (max(var_28, (((-(arr_18 [i_7 + 1] [i_7 + 1] [i_13]))))));
        }

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            arr_51 [i_7] [i_7] = -62;
            var_29 += (~115);
            var_30 *= ((-110 ? var_9 : 1));
            var_31 = var_3;
        }
        for (int i_15 = 4; i_15 < 14;i_15 += 1) /* same iter space */
        {
            arr_56 [i_7] = -15;
            var_32 -= var_0;
            arr_57 [i_7] = 0;
        }
        for (int i_16 = 4; i_16 < 14;i_16 += 1) /* same iter space */
        {
            var_33 += var_7;

            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {

                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    var_34 = (((arr_46 [i_7 + 2] [i_16 + 1]) != 62));
                    arr_67 [i_17] [i_16] [i_17] [i_18] [i_7] = ((((var_2 ? var_0 : (arr_66 [i_7] [i_16] [7] [i_7]))) >> (var_6 - 2069776677)));
                    var_35 = (~11675613732730369283);
                }
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {

                    for (int i_20 = 3; i_20 < 12;i_20 += 1)
                    {
                        arr_74 [i_7] [i_16 - 1] [i_7] [i_17] [i_19] [i_20] = (arr_70 [i_20] [i_20] [i_7] [i_16] [i_16]);
                        var_36 = (min(var_36, (arr_27 [i_17] [i_20] [i_17])));
                        var_37 = -var_2;
                        var_38 = 61;
                        var_39 = (((arr_73 [i_20 + 3] [i_7 + 2]) + (arr_73 [i_20 - 1] [i_7 + 2])));
                    }
                    var_40 = (max(var_40, -62));
                    var_41 = (max(var_41, var_8));
                }
                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    arr_77 [i_7] [i_7] [i_17] [i_21] = (var_10 | var_10);
                    arr_78 [i_7] [i_7] [i_7] [i_21] [i_21] = (((arr_24 [i_7 - 1]) ? var_8 : (arr_24 [i_7 + 1])));
                    var_42 = 11675613732730369283;
                    arr_79 [i_7] = ((var_2 ? 13963 : var_5));
                }
                for (int i_22 = 0; i_22 < 15;i_22 += 1)
                {
                    var_43 = ((var_5 ? (3644314945 / var_7) : 49));
                    arr_83 [i_7] [i_7] = (((arr_60 [i_7 + 1]) ? (arr_60 [i_7 - 1]) : -15));
                }
                arr_84 [i_16] [i_7] [i_16] [i_17] = -93410406;
            }
        }
        arr_85 [i_7] = ((var_5 ? 1 : ((var_2 ? var_6 : var_8))));
    }
    var_44 = (min(var_44, var_8));
    #pragma endscop
}
