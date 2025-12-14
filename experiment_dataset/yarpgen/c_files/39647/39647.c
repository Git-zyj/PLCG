/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((max(3110569236, (min(var_8, (arr_6 [i_2] [i_1] [i_1 - 1]))))));
                                arr_16 [i_4] [i_3] [8] [i_1 - 2] [i_0] [i_0] = (max(((min(0, 189))), ((-((min(65520, 1)))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_0] = max((min(15807384915574618275, ((min(1, 65527))))), (((max(var_10, var_7)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_11 = (min(65521, -1562110609));
                                arr_23 [1] [i_1 - 2] [1] [i_5] [i_6 + 1] [i_2] = (max((min(984547820, 14507608596894226383)), (arr_18 [i_6] [i_5] [i_2] [i_1] [i_0] [i_0])));
                                var_12 = max((((0 * (arr_7 [6])))), ((min(1, 1))));
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = min((1 >= 54244), ((min(0, 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {

                            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                            {
                                var_13 += ((-(((max(var_7, var_4)) << (((arr_25 [i_7]) - 81676252))))));
                                var_14 = (max(var_14, ((!((((min(var_5, (arr_34 [1] [i_10] [i_8] [i_8])))) && 0))))));
                                arr_38 [i_7] = ((!(!0)));
                                arr_39 [i_11] [i_7] [i_7] [13] = (max(((min((min((arr_32 [i_7] [i_10] [i_7] [i_10] [i_8]), 1)), ((max((arr_33 [i_7]), var_4)))))), (min(3598644860801273208, var_5))));
                                var_15 += ((max((1020 || 8384), ((-(arr_26 [i_9] [i_8]))))));
                            }
                            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                            {
                                var_16 = (min(8761733283840, 4024));
                                arr_43 [i_12] [i_7] [i_7] [i_8] = ((+(max(((min((arr_27 [i_10]), (arr_25 [i_10])))), var_2))));
                            }
                            for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                            {
                                var_17 = (max(((max(1, (arr_34 [i_13] [i_10] [i_8] [i_8])))), var_8));
                                arr_46 [i_13] [i_13] [i_7] [i_9] [i_7] [i_8] [i_7] = (min((arr_35 [i_13] [i_10] [i_9] [18] [18]), -var_6));
                            }
                            arr_47 [i_9] [i_7] [i_9] [i_10] = (!1);
                        }
                    }
                }
                var_18 *= (min((min((arr_26 [i_8] [i_8]), var_0)), 1));
            }
        }
    }

    /* vectorizable */
    for (int i_14 = 4; i_14 < 20;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                {
                    arr_55 [i_15] [i_14] = -var_6;

                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        var_19 -= 3478540150816008297;
                        arr_58 [i_15] [i_15] [12] [i_16] [i_15] [i_15] = (!(var_8 ^ var_7));
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            {
                                var_20 = (2304717109306851328 ^ 4024);
                                var_21 = (min(var_21, -189));
                                var_22 &= -var_7;
                            }
                        }
                    }
                    var_23 = (max(var_23, (~4024)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {
                {

                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        var_24 = (min(var_24, (((((!(arr_51 [i_14 - 2] [i_20]))) || 1)))));

                        for (int i_23 = 0; i_23 < 21;i_23 += 1)
                        {
                            arr_77 [i_23] [i_22] [i_22] [i_21] [i_20] [i_14] &= (((arr_41 [i_14 - 2] [1] [i_21] [2] [i_23] [i_14] [i_14 - 2]) >= var_7));
                            var_25 = ((-(arr_69 [i_23] [i_22] [0] [i_14])));
                            var_26 = (min(var_26, 4294967295));
                        }
                        for (int i_24 = 0; i_24 < 21;i_24 += 1)
                        {
                            arr_81 [i_14 - 1] = (arr_74 [i_14] [i_14] [i_21]);
                            arr_82 [2] [i_20] [i_20] [i_22] [13] = (((!(arr_73 [i_14] [i_20] [i_22] [i_22] [i_24]))));
                        }
                        for (int i_25 = 3; i_25 < 19;i_25 += 1)
                        {
                            var_27 = (((var_1 % (arr_66 [i_25] [i_22] [i_21]))));
                            arr_86 [i_14] [i_25] [i_25] = 16142026964402700288;
                            arr_87 [i_20] [i_20] [i_22] = (((4024 - (arr_70 [i_25] [i_21]))));
                            arr_88 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = (((-(arr_74 [i_14] [0] [i_14 - 4]))));
                        }
                        for (int i_26 = 0; i_26 < 21;i_26 += 1)
                        {
                            arr_91 [i_14 - 3] = (~-94);
                            var_28 -= var_3;
                        }
                        var_29 = (max(var_29, var_3));
                    }
                    var_30 = 1;
                    arr_92 [i_14] [i_14 - 2] = 61511;
                }
            }
        }
        var_31 ^= ((-((var_1 << (11427 - 11398)))));
        var_32 += (-var_2 + 9418424462202587987);

        for (int i_27 = 1; i_27 < 19;i_27 += 1)
        {

            for (int i_28 = 3; i_28 < 20;i_28 += 1)
            {
                var_33 -= (var_3 > -1);
                var_34 = (2304717109306851328 ^ var_7);
            }
            arr_99 [i_14] [i_14] [i_27] = ((-(arr_48 [i_14])));
            var_35 &= var_3;
            var_36 = (!0);
            arr_100 [i_27] = 1;
        }
        for (int i_29 = 3; i_29 < 20;i_29 += 1)
        {
            var_37 -= 9028319611506963628;
            /* LoopNest 3 */
            for (int i_30 = 0; i_30 < 21;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 21;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 21;i_32 += 1)
                    {
                        {
                            var_38 = (65525 % 1);
                            var_39 = (((1 * var_3) >> (((1 ^ var_9) + 95))));
                        }
                    }
                }
            }
        }
        for (int i_33 = 0; i_33 < 21;i_33 += 1)
        {
            arr_113 [i_33] [i_33] = 16142026964402700288;
            /* LoopNest 2 */
            for (int i_34 = 0; i_34 < 21;i_34 += 1)
            {
                for (int i_35 = 1; i_35 < 1;i_35 += 1)
                {
                    {
                        var_40 = (!var_2);
                        arr_119 [i_33] [i_33] = (!(!7016581608924472760));
                        arr_120 [i_35] [i_33] [i_34] [i_14] [i_33] [i_14] = -0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
