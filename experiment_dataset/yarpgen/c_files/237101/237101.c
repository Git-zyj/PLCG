/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_16 = (~32);
                            var_17 = ((min((arr_6 [i_0]), var_7)));
                            arr_16 [i_0] [i_1 + 2] [i_1] [i_1] [i_1 + 2] [i_1 + 2] = ((min(var_13, (arr_10 [i_0 - 1] [i_1 + 1]))));
                        }
                    }
                }
                var_18 = ((-(arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2])));
                var_19 = (arr_9 [i_2 - 1] [i_0] [i_0] [i_0]);
            }
            arr_17 [i_0] [i_1] [i_1 + 2] = var_2;
            arr_18 [i_0 - 1] [i_0] = var_6;
            var_20 = (max(var_6, ((min(var_13, var_10)))));
        }
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            arr_22 [i_5] [i_5] |= ((-(max((arr_20 [8] [i_0] [i_5]), var_4))));
            var_21 = (min(var_21, (((max(var_1, var_4)) / (arr_9 [i_5] [i_5 - 4] [i_5] [i_5 + 1])))));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_22 -= var_4;
            var_23 &= (min((min(var_11, var_9)), ((min((arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_6] [i_6]), (((-(arr_15 [8] [i_0] [8] [i_0 - 1] [i_0])))))))));
        }
        arr_25 [i_0] = max(var_10, ((~(arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))));
        var_24 = (min(((min((arr_21 [6] [i_0] [2]), var_7))), (max(var_0, var_13))));

        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_25 = (~-var_3);
                            var_26 *= ((!((max(var_9, (arr_31 [i_0 - 1] [i_0 - 1]))))));
                            var_27 = var_9;
                            var_28 = var_1;
                        }
                    }
                }
            }
            arr_36 [i_0] [i_0] = (min(((~(arr_1 [i_7 - 1]))), (arr_1 [i_7 + 3])));

            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                var_29 = (max(var_29, ((((~(max(var_0, var_15))))))));
                arr_39 [i_0] [i_7 - 2] [i_0] = (((max(var_6, var_8))));
                var_30 = (min(var_7, (arr_24 [i_11 - 2] [i_7 + 1])));

                for (int i_12 = 2; i_12 < 13;i_12 += 1) /* same iter space */
                {
                    var_31 = (max(((max(var_5, (~var_1)))), (max((arr_3 [i_12 - 2] [i_12] [i_11 - 2]), (arr_3 [i_12 - 1] [i_11] [i_11 - 2])))));
                    var_32 = (((((var_4 / (arr_20 [i_7 + 2] [1] [i_0])))) / (min(var_5, var_3))));
                }
                for (int i_13 = 2; i_13 < 13;i_13 += 1) /* same iter space */
                {
                    arr_47 [1] [i_0] [i_11] [i_0] = (((arr_12 [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 2] [1]) - ((min(48848, -1076683461)))));
                    var_33 &= (max((arr_44 [i_13 - 2]), var_15));
                }
                for (int i_14 = 1; i_14 < 12;i_14 += 1)
                {
                    var_34 *= -var_13;
                    var_35 = ((max((arr_30 [i_14 + 1] [i_11] [i_11 - 1]), var_14)));
                    arr_50 [i_0] [i_0] [i_0] = -var_5;
                    var_36 = (i_0 % 2 == zero) ? ((((((~(arr_46 [i_14 + 2] [i_0]))) + 2147483647)) >> (-var_1 - 59))) : ((((((((~(arr_46 [i_14 + 2] [i_0]))) - 2147483647)) + 2147483647)) >> (-var_1 - 59)));
                }
            }
            for (int i_15 = 2; i_15 < 12;i_15 += 1)
            {

                for (int i_16 = 1; i_16 < 10;i_16 += 1)
                {
                    var_37 &= ((~(~1073741696)));
                    var_38 = var_12;
                    var_39 *= (arr_52 [i_0 - 1]);
                }
                var_40 = var_5;
                var_41 -= (arr_32 [i_0] [i_0] [i_7] [i_0] [i_7] [6]);
            }
        }
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                var_42 = (max((var_8 * var_5), ((min((arr_20 [i_0] [i_0] [i_0]), (arr_20 [i_0 - 1] [i_0] [i_0]))))));
                var_43 = (min(var_4, (arr_57 [i_0] [i_0])));
            }
            var_44 = (max(((~(arr_31 [i_0 - 1] [i_17]))), ((max(var_7, (arr_57 [i_0] [i_17]))))));

            for (int i_19 = 2; i_19 < 11;i_19 += 1)
            {
                var_45 = -var_5;

                for (int i_20 = 3; i_20 < 11;i_20 += 1)
                {
                    var_46 = ((~(min((arr_28 [i_0]), var_1))));
                    var_47 = var_0;
                    var_48 ^= var_4;
                    var_49 = (min(var_49, ((max(((~(arr_12 [6] [i_20 - 3] [11] [i_20] [i_19]))), ((((arr_8 [i_19 - 2] [i_19 + 2]) >> (var_1 + 80)))))))));
                }
                for (int i_21 = 3; i_21 < 13;i_21 += 1)
                {

                    for (int i_22 = 4; i_22 < 11;i_22 += 1)
                    {
                        arr_72 [i_0] [i_17] [i_0] [i_21] [i_0] [i_21] [i_19] = (min(var_10, (arr_3 [i_19 + 1] [i_21] [i_21])));
                        arr_73 [i_0] = ((!((min((arr_32 [i_22 - 3] [i_22 - 3] [5] [i_22 + 3] [i_22 - 3] [i_19 + 3]), (arr_33 [i_0 - 1] [i_0] [3] [i_0 - 1] [i_22 + 3]))))));
                        var_50 = var_5;
                    }
                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        var_51 ^= (max((max(var_11, var_11)), ((min(((max(var_8, (arr_67 [i_21] [i_17] [i_19] [i_21])))), (arr_29 [i_17] [i_19] [i_19]))))));
                        var_52 = (arr_41 [1]);
                    }
                    var_53 -= (((max((arr_13 [i_0 - 1] [i_0 - 1] [i_19 + 2] [i_19 - 2] [i_21 - 1]), (((arr_21 [i_0] [6] [i_19]) << (var_10 - 29))))) - (max((arr_52 [i_17]), var_14))));
                    var_54 = (!((max((arr_4 [i_19 - 1] [1]), var_9))));
                }
            }
            for (int i_24 = 1; i_24 < 13;i_24 += 1)
            {
                arr_80 [i_0] [i_17] [i_24] [i_0] = ((-(max((arr_71 [i_0] [i_0] [i_17] [i_17] [4] [0] [i_0]), var_11))));
                arr_81 [i_0 - 1] [i_0] [i_24 + 1] = (min(-1076683461, 1));
                var_55 -= ((((max((arr_43 [6] [0] [i_0 - 1] [i_0] [i_17]), var_1))) && (arr_43 [1] [i_17] [i_0 - 1] [i_0] [i_17])));
            }
            for (int i_25 = 1; i_25 < 11;i_25 += 1)
            {
                var_56 = ((+((min((arr_61 [1] [i_25] [i_0]), (arr_61 [1] [5] [i_0]))))));
                arr_85 [i_0] [i_25] [i_0] [i_0] = ((~((max((arr_38 [i_0 - 1] [i_25 - 1] [i_25 - 1]), var_9)))));
                var_57 = (max(var_57, ((max(35747322042253312, 1)))));
            }
        }
    }
    for (int i_26 = 1; i_26 < 1;i_26 += 1)
    {
        var_58 = (min(var_58, (((var_7 ^ (~var_14))))));
        var_59 = min((max(var_6, var_10)), (max(var_6, var_12)));
    }
    for (int i_27 = 3; i_27 < 18;i_27 += 1)
    {
        arr_92 [i_27 - 2] = (--1076683461);
        var_60 = var_3;
    }
    var_61 = var_9;

    for (int i_28 = 2; i_28 < 11;i_28 += 1)
    {
        var_62 = (max(4223220062, 1));
        var_63 = min((max(((max(var_9, var_12))), (var_11 / var_14))), var_1);
        var_64 = var_14;
    }
    #pragma endscop
}
