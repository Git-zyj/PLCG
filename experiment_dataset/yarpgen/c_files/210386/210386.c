/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_12 || 0);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 ^= ((-((min(var_0, var_13)))));
        var_18 = 0;
        var_19 = (max(var_19, (((max(9223372036854775807, (arr_0 [i_0])))))));
        var_20 = var_3;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 = var_13;

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_22 = (var_10 | 1);
                var_23 -= ((-(1 >= var_5)));
            }
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                var_24 = (((arr_9 [i_1] [i_1 + 1] [3]) * (((!(arr_5 [9]))))));
                var_25 = var_12;
                var_26 = (-9223372036854775807 - 1);
                var_27 = (max(var_27, (!var_1)));
            }
            for (int i_5 = 4; i_5 < 14;i_5 += 1)
            {
                var_28 = (min(var_28, var_12));
                arr_21 [i_1] [i_2] [i_5] = (arr_5 [i_1 - 1]);
                var_29 = (min(var_29, (var_1 && 58)));
            }
            arr_22 [i_1] [i_2] = (arr_20 [4] [i_2] [i_1] [8]);
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_30 = 0;
                    var_31 = (min(var_31, (((min(var_2, var_13)) || (((260134804200740655 ^ (arr_28 [12] [i_6] [i_7] [i_1]))))))));
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 21;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            var_32 = (min(var_32, (((-((((arr_30 [i_8] [i_8]) == var_12))))))));
            var_33 = (arr_31 [7] [i_9]);
            var_34 = (min(var_34, (arr_29 [17])));
            var_35 = (arr_30 [0] [7]);
            arr_35 [13] = (arr_31 [i_9 + 2] [i_8 - 4]);
        }
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            arr_40 [i_10] [i_10] [i_10] = (((arr_33 [i_8 - 1]) - (arr_33 [i_8 - 1])));
            var_36 = (min(var_36, (((((var_3 % (arr_34 [i_8 - 4] [i_10 - 1]))) < (var_11 || var_3))))));
            var_37 = (((arr_34 [i_8] [i_10]) | (arr_37 [i_10 - 1] [i_8 - 2])));

            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            arr_49 [i_10] [i_10] = (((arr_36 [16] [i_8 + 3] [i_10 + 2]) % ((((arr_36 [i_8] [i_8 + 1] [i_10 + 1]) != (arr_42 [i_8 - 1] [20] [i_10]))))));
                            var_38 = (41 > 86);
                        }
                    }
                }
                arr_50 [13] [i_10] [i_10] = (max(((var_14 << (((arr_46 [20] [i_11] [i_10 + 2] [11] [i_8 - 2]) - 220)))), ((26311 | (arr_29 [1])))));

                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    var_39 ^= (((var_12 * var_1) > ((var_2 - (arr_34 [i_8] [1])))));
                    arr_54 [i_10] [17] [i_11] [i_10] [i_11] [i_14] = (max(2782, (((var_11 || (arr_43 [i_10]))))));
                }
            }
            for (int i_15 = 1; i_15 < 23;i_15 += 1)
            {
                arr_57 [i_8] [19] [19] [i_10] = (arr_56 [i_8] [i_10] [i_15] [i_10]);
                var_40 = (((((arr_51 [i_10 + 1] [i_8 - 2]) * var_2)) >= var_15));
                arr_58 [i_10] = var_9;
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        {
                            var_41 = (((arr_45 [i_17] [i_10 - 1] [i_10] [i_10] [i_8] [i_8]) && (9223372036854775779 != 84)));
                            var_42 = ((var_15 || ((((arr_48 [i_10 - 1] [i_15 - 1] [i_17] [i_17]) ^ (arr_48 [i_10 - 1] [i_15 - 1] [i_15 - 1] [13]))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_18 = 1; i_18 < 21;i_18 += 1)
            {
                arr_67 [i_8] [i_10] = (!var_10);

                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    arr_71 [i_8] [i_10] [i_18 + 2] [15] = (arr_60 [i_8] [i_10] [i_10] [i_10] [i_8 - 3] [i_18 + 3]);
                    arr_72 [i_10] [8] [i_10] [i_10] = (!var_11);
                }
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    var_43 += (((((125 <= (arr_74 [i_8])))) + (arr_64 [i_10 + 1] [i_8 + 3] [18] [i_8])));
                    var_44 = (min(var_44, (((!(arr_29 [i_8 - 3]))))));
                }
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    arr_79 [i_18] [i_10] [i_10] [i_10] [i_21] = ((var_15 | (arr_63 [i_8 + 2])));
                    arr_80 [i_8 + 3] [i_10] [i_10] [i_21] = ((var_13 << (var_12 - 22351)));
                }
            }
            for (int i_22 = 1; i_22 < 22;i_22 += 1)
            {
                var_45 = var_11;
                var_46 = (min(var_46, ((min(4294967276, (arr_68 [i_22 + 1] [i_10] [i_10 + 1] [i_8 - 2]))))));
            }
        }
        var_47 = (max(var_47, ((((((var_6 != (arr_34 [i_8] [i_8 - 4])))) ^ (((((-(arr_47 [11] [i_8] [i_8 + 3] [i_8] [i_8]))) == (var_11 > 15519)))))))));
        arr_85 [i_8] = (arr_51 [i_8 - 2] [i_8 + 3]);
    }
    for (int i_23 = 0; i_23 < 13;i_23 += 1)
    {
        arr_89 [i_23] = (-9223372036854775807 - 1);
        var_48 &= var_1;
        var_49 = var_12;
    }
    #pragma endscop
}
