/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (min(var_20, ((min(var_10, ((max((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_21 |= ((((!(arr_0 [i_0]))) ? (max(((max((arr_2 [22]), (arr_2 [8])))), var_1)) : (arr_1 [2])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] = ((!(arr_1 [i_0])));
            var_22 = var_12;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_23 = (((arr_6 [i_0]) ? 70368744177656 : (arr_6 [i_0])));
            var_24 = 70368744177667;

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_0] = 39;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_25 = (((arr_4 [i_0]) ? 33 : (arr_4 [i_0])));
                            var_26 = ((544955896 ? var_18 : -21617));
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_27 = ((((arr_7 [i_0]) ? 25 : (arr_1 [17]))));
                var_28 = ((var_2 ? var_8 : (arr_4 [i_0])));

                for (int i_7 = 4; i_7 < 22;i_7 += 1)
                {
                    var_29 -= (((arr_20 [i_7 - 3] [i_7 - 1] [2] [i_7 - 2] [i_7] [i_7 - 1]) ? var_2 : (arr_20 [i_7 - 4] [i_7] [6] [i_7 - 2] [6] [i_7 - 2])));
                    arr_22 [i_6] [14] [i_6] |= (arr_8 [i_7 + 1] [i_7 - 2] [i_7 - 1]);
                }
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
            {
                arr_25 [i_0] [4] [i_8] [12] &= var_15;
                var_30 = ((var_0 ? (arr_7 [i_0]) : var_19));
                var_31 = (((arr_6 [i_0]) + (arr_24 [i_0] [i_2] [i_0])));
                arr_26 [i_0] [i_2] [i_0] [i_2] = ((~(arr_8 [i_0] [22] [i_2])));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_36 [i_0] [i_2] [i_0] [i_10] [i_11] = (arr_19 [i_0] [i_2] [i_10] [i_0]);
                            var_32 = ((!(arr_32 [i_10] [i_2] [i_9] [i_10] [i_11] [i_10] [i_2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_33 = (((arr_15 [i_0] [i_12]) ? (arr_15 [i_0] [i_2]) : (arr_15 [i_0] [i_13])));
                            var_34 = ((var_19 ? (arr_15 [i_0] [i_2]) : var_6));
                            var_35 = var_13;
                            var_36 *= 159;
                        }
                    }
                }
                var_37 = (~(arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [21] [4]));
            }
            var_38 = (arr_10 [i_0] [i_2] [i_2]);
        }
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            var_39 -= (max(var_7, (((~var_7) ? (arr_2 [2]) : (arr_7 [12])))));

            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                var_40 *= 200;

                for (int i_16 = 3; i_16 < 21;i_16 += 1)
                {
                    var_41 = ((+(max((~var_5), (arr_27 [i_16 - 1] [i_16 - 1] [i_16 + 2] [i_16 - 2])))));
                    var_42 = var_17;
                }
                var_43 = 2061699044;
            }
            var_44 = (((((((39 ? (arr_48 [i_0] [i_14]) : (arr_4 [i_0])))) ? ((max((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]), 95))) : ((~(arr_42 [i_0] [i_0]))))) ^ 161));

            /* vectorizable */
            for (int i_17 = 3; i_17 < 22;i_17 += 1)
            {
                var_45 -= ((-(arr_11 [8])));
                var_46 += (arr_43 [i_17 + 1] [i_17 - 2] [16]);
                var_47 = (max(var_47, 1));
                var_48 = (arr_19 [i_17 - 3] [i_17 + 1] [i_17 - 1] [i_0]);
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 20;i_19 += 1)
                    {
                        {
                            var_49 -= 1;
                            var_50 = (arr_6 [i_0]);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                var_51 |= ((var_0 <= (((arr_40 [14]) ? (arr_0 [i_0]) : var_17))));
                arr_57 [i_0] [i_20] = (((arr_38 [i_14] [i_0]) ? (arr_39 [i_0] [12] [3] [19] [i_14] [14] [i_20]) : (arr_39 [i_0] [i_0] [1] [i_14] [i_14] [i_14] [i_20])));
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                var_52 = (-5089797683789590519 ? var_14 : ((-2048 ? (arr_28 [16] [i_14] [i_0] [3]) : (arr_49 [i_0] [i_0]))));
                var_53 = (arr_2 [i_0]);
            }
        }
        /* vectorizable */
        for (int i_22 = 3; i_22 < 19;i_22 += 1)
        {
            var_54 = ((63222 ? (arr_27 [i_22 + 2] [i_22 - 2] [i_22 + 4] [i_22 + 3]) : (arr_27 [i_22 + 1] [i_22 - 2] [i_22 - 2] [i_22 - 3])));

            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                var_55 = 29235;
                var_56 = (arr_21 [i_0] [i_0]);
                var_57 -= (-(arr_38 [i_0] [0]));
            }
            for (int i_24 = 1; i_24 < 20;i_24 += 1)
            {

                for (int i_25 = 2; i_25 < 22;i_25 += 1)
                {
                    var_58 = (max(var_58, (((~(arr_51 [i_24] [i_24 + 1] [i_25] [6]))))));
                    var_59 = (max(var_59, 1));
                }
                var_60 = ((-(arr_4 [i_0])));
                var_61 = (arr_65 [i_22 + 2]);
            }
            arr_70 [i_0] [i_0] = (((arr_50 [i_22 + 1] [i_22 + 2] [i_0]) && (arr_50 [i_22 - 2] [i_22 - 3] [i_0])));
        }
        var_62 = (min(var_62, var_1));
        var_63 = (max((arr_17 [i_0] [i_0] [14] [i_0] [i_0]), (((var_17 ? (arr_27 [i_0] [i_0] [i_0] [i_0]) : -var_3)))));
    }
    for (int i_26 = 0; i_26 < 20;i_26 += 1)
    {

        for (int i_27 = 0; i_27 < 20;i_27 += 1)
        {
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 20;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 20;i_29 += 1)
                {
                    {
                        var_64 &= ((max(var_0, (min((arr_43 [i_26] [i_27] [i_29]), var_11)))));

                        /* vectorizable */
                        for (int i_30 = 0; i_30 < 20;i_30 += 1)
                        {
                            arr_87 [i_26] [i_26] [i_26] = 63222;
                            var_65 = 41990;
                            var_66 = ((~(arr_75 [i_26])));
                            var_67 = 44250;
                        }
                        var_68 *= ((((max((((!(arr_52 [i_26] [1] [i_28] [i_27])))), (arr_65 [18])))) ? (((max((arr_39 [i_26] [i_27] [i_27] [i_28] [i_28] [i_26] [i_29]), var_1)))) : (arr_23 [i_29])));
                    }
                }
            }
            var_69 = (max(var_69, (((((max((~115), ((min((arr_49 [i_26] [i_27]), (arr_41 [9]))))))) ? 0 : (arr_81 [i_26] [i_26] [i_26] [12]))))));
        }
        var_70 = (max((((-(arr_71 [i_26])))), (max((arr_24 [i_26] [i_26] [i_26]), (arr_71 [i_26])))));
    }
    for (int i_31 = 1; i_31 < 23;i_31 += 1)
    {
        var_71 *= -var_15;
        var_72 += (((arr_90 [20]) == ((min((arr_89 [i_31 + 1]), (arr_89 [i_31 + 2]))))));
    }
    var_73 = var_18;
    var_74 = ((((max((min(var_18, var_2)), (max(var_19, var_10))))) ? ((((var_16 ? var_3 : 25490)))) : (min((var_18 | var_15), var_10))));
    #pragma endscop
}
