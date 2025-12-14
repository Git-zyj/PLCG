/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((34 * ((var_1 ? 10 : 7))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_0] = (arr_2 [3] [6] [i_1]);
            var_13 = var_7;
            var_14 = (((((var_1 & (arr_3 [i_0] [i_1] [4])))) ? var_6 : var_2));
            arr_5 [i_0] = ((!(arr_2 [i_0] [i_0] [i_0])));
            var_15 = -var_2;
        }
        var_16 = (((arr_0 [i_0] [i_0]) - (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_17 = (((34 <= -17) ? (arr_6 [i_2 + 2]) : -116));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    {
                        var_18 = (!var_1);
                        var_19 = (min(var_19, (arr_16 [1] [1] [1] [1] [0] [i_5])));
                        var_20 *= -var_8;
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = -6;
                    }
                }
            }
        }
        var_21 = ((-((~(arr_6 [i_2])))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_22 = (max(var_22, ((max((arr_20 [8]), (min((arr_19 [13]), (((arr_19 [10]) * var_2)))))))));
        var_23 = (((arr_19 [i_6]) ? var_2 : 14));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            var_24 = ((((min(((min(-8, -25))), (~var_11)))) ? (((((arr_21 [i_8]) * (arr_24 [i_7] [i_8]))))) : ((-((-(arr_21 [8])))))));
            var_25 = (min(var_25, ((((!95) && (min(((!(arr_21 [i_7]))), (var_8 || -1))))))));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_37 [i_9] = 24;
                            var_26 = (!-83);
                            arr_38 [i_7] [14] [9] [i_9] [1] = ((~(arr_33 [i_7] [i_7] [10] [i_9 + 1] [i_12 + 4] [i_12] [i_12])));
                            var_27 = ((60 ? (var_8 >= var_11) : (arr_28 [i_7] [i_9 + 1] [i_9])));
                        }
                    }
                }
            }
            var_28 = ((((((arr_33 [i_7] [1] [i_7] [16] [11] [i_7] [11]) * var_0))) ? ((4 ? 4 : -28)) : (arr_34 [i_9 + 2] [i_9 + 2] [2] [16] [16])));
            var_29 *= arr_24 [i_7] [i_7];
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_30 = (~63);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 20;i_15 += 1)
                {
                    {
                        var_31 = ((-6 ? var_0 : (!63)));
                        arr_49 [i_14] = 0;
                    }
                }
            }
            var_32 = ((var_2 % (arr_39 [i_7] [i_7] [i_7])));
            var_33 = arr_31 [i_13];
            arr_50 [i_7] [i_7] = 25;
        }
        /* vectorizable */
        for (int i_16 = 1; i_16 < 21;i_16 += 1)
        {
            var_34 = (max(var_34, (-47 * -4)));
            /* LoopNest 3 */
            for (int i_17 = 4; i_17 < 21;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 19;i_19 += 1)
                    {
                        {
                            var_35 = (46 == -16);
                            arr_61 [i_7] [i_7] [i_7] [i_7] [i_16] = (((arr_48 [i_7] [i_16 + 1] [3] [i_17 + 1]) ? ((-83 ? var_3 : (arr_40 [8]))) : -21));
                            var_36 = var_5;
                            var_37 ^= (((arr_36 [i_17 - 2] [i_18 + 2] [9] [i_17 - 2] [i_17 - 2]) ? var_11 : (arr_56 [i_7])));
                        }
                    }
                }
            }

            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {
                var_38 = (arr_48 [i_16 + 1] [i_16] [i_16 - 1] [i_16]);
                var_39 = var_8;
                arr_65 [i_16] [i_16] = (((arr_63 [i_16 - 1] [i_16 + 1] [i_16 - 1] [i_16 - 1]) ? (arr_63 [i_16 - 1] [i_16 - 1] [i_16 + 1] [i_16 - 1]) : (arr_63 [i_16 - 1] [i_16 + 1] [i_16 - 1] [i_16 - 1])));
                var_40 = (max(var_40, var_11));
                var_41 = (!4);
            }
            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                var_42 = (~-119);

                for (int i_22 = 2; i_22 < 21;i_22 += 1)
                {

                    for (int i_23 = 0; i_23 < 22;i_23 += 1) /* same iter space */
                    {
                        var_43 = (arr_39 [i_22] [i_22 - 1] [i_16 + 1]);
                        var_44 &= var_6;
                    }
                    for (int i_24 = 0; i_24 < 22;i_24 += 1) /* same iter space */
                    {
                        var_45 ^= (((arr_43 [i_7] [7] [i_16 - 1]) ? -1 : (arr_43 [i_16] [i_16] [i_16 - 1])));
                        arr_75 [i_16] [i_16] = (((!117) * ((((arr_62 [11] [i_16]) >= var_5)))));
                        arr_76 [i_7] [i_16] [i_16] [i_22] [i_16] = -55;
                    }
                    for (int i_25 = 0; i_25 < 22;i_25 += 1)
                    {
                        var_46 = var_11;
                        arr_79 [18] [18] [18] [i_22] [18] |= (((arr_60 [i_16 - 1] [i_22 - 2] [11] [i_16 - 1] [i_7]) % (arr_29 [9] [i_22 - 1] [1] [i_22 - 1])));
                        arr_80 [i_16] [12] [i_22] [i_16] [8] [i_16] = -7;
                    }
                    var_47 = (arr_33 [i_22 - 1] [10] [i_22] [i_22 + 1] [i_22] [i_16 + 1] [14]);
                }
                for (int i_26 = 0; i_26 < 22;i_26 += 1)
                {
                    var_48 = (((arr_29 [i_21] [i_21] [i_21] [i_26]) | ((~(arr_45 [20] [i_7] [6] [i_7])))));
                    var_49 = -53;
                }
            }
            for (int i_27 = 3; i_27 < 21;i_27 += 1)
            {
                var_50 = (arr_55 [i_16 + 1] [i_16 - 1]);
                var_51 = arr_35 [i_7] [6] [11] [i_16] [i_16];
                var_52 = ((-66 ? -120 : -25));
                arr_85 [i_7] [i_7] [i_16] [i_7] = ((((-1 ? var_0 : var_1)) - (!var_1)));
            }
            for (int i_28 = 0; i_28 < 22;i_28 += 1)
            {
                /* LoopNest 2 */
                for (int i_29 = 4; i_29 < 18;i_29 += 1)
                {
                    for (int i_30 = 1; i_30 < 19;i_30 += 1)
                    {
                        {
                            var_53 -= (((!var_6) ? (~39) : var_5));
                            var_54 = ((((var_9 ? var_10 : var_11)) >= var_5));
                        }
                    }
                }
                var_55 = (~55);
            }
        }
        var_56 += ((-(((~49) ? ((~(arr_81 [1] [i_7] [14]))) : var_4))));
    }
    #pragma endscop
}
