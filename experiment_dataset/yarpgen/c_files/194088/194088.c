/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-var_3 + (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = (arr_5 [i_1]);
            arr_6 [i_1] [1] = 132120576;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_13 = (min(var_13, -115));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_14 += ((var_1 ? 114 : 126));
                            var_15 += (((((var_4 ? var_0 : 140))) ? 126 : ((var_5 ? -120 : (arr_8 [7] [i_4] [i_5])))));
                            var_16 += ((!(((var_11 ? -4226157119540852929 : var_1)))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_0] [0] [i_6] = ((var_1 ? (arr_9 [i_3]) : ((14257 ? 865707916 : var_0))));
                    var_17 = var_5;
                    arr_21 [i_3] = var_9;
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    var_18 = ((-var_4 ? var_6 : var_6));
                    var_19 = (max(var_19, 70));
                }
            }
            arr_26 [i_0] [i_0] = var_0;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_36 [i_8] = (arr_22 [i_11] [16] [4] [i_10] [16] [i_9]);
                                var_20 = (max(var_20, (((!(70 % 127))))));
                                var_21 = (min(var_21, (((var_6 ? -var_8 : var_3)))));
                                var_22 = (max(var_22, -var_6));
                            }
                        }
                    }
                    arr_37 [i_8] = (((((-451117084 ? 3916180545851240293 : 132))) ? var_2 : ((var_2 ? var_0 : var_2))));
                    var_23 = ((var_1 ? var_6 : (((arr_12 [0] [1] [5] [0] [i_8]) ? (arr_13 [i_0]) : (arr_18 [i_0] [14] [i_8] [i_9])))));
                }
            }
        }
    }
    for (int i_12 = 3; i_12 < 17;i_12 += 1)
    {
        var_24 = var_11;
        arr_40 [i_12] = ((var_5 ? -115 : ((((((!(arr_38 [i_12]))))) + (((arr_39 [1] [i_12]) ? var_8 : var_2))))));
        arr_41 [i_12] [i_12] = ((-(((min(var_3, var_9)) | (((var_0 ? var_8 : 120)))))));
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    {

                        for (int i_16 = 1; i_16 < 15;i_16 += 1)
                        {
                            var_25 = var_2;
                            var_26 = (arr_42 [i_12] [i_12]);
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_59 [i_14] [i_13] [18] [i_15] [i_13] = var_3;
                            var_27 = ((((((arr_53 [i_12] [i_13]) ? var_7 : var_2)) < (arr_56 [i_13] [i_12]))));
                            var_28 = var_8;
                            var_29 = ((((((-(arr_56 [i_12] [5]))) == (!var_5))) ? ((max((((arr_46 [i_12] [i_13] [i_12]) * (arr_46 [i_12] [1] [i_17]))), ((max(var_7, (arr_53 [i_15] [i_13]))))))) : (((((1902890709256008568 ? var_8 : var_0))) ? (((max(var_7, (arr_49 [i_17] [i_15] [i_14] [i_12] [i_12]))))) : (~var_9)))));
                            arr_60 [i_13] [i_13] [i_14] [i_15] [i_17] = ((!((min(-41303, ((var_0 ? (arr_58 [i_12] [7]) : (arr_45 [i_13] [i_14] [i_15]))))))));
                        }
                        var_30 = ((var_11 + (((((100 ? (arr_56 [i_13 - 2] [i_13 - 2]) : var_4))) ? var_8 : ((max((arr_43 [i_13]), var_6)))))));

                        for (int i_18 = 3; i_18 < 17;i_18 += 1) /* same iter space */
                        {
                            arr_65 [i_14] [i_13] = (((((var_11 ? (max(var_10, var_9)) : (arr_51 [0] [i_12] [i_12 + 2] [i_12 + 2])))) ? (((((var_11 ? -10 : 132))) ? (arr_50 [i_12] [i_13] [i_12] [i_15]) : (arr_50 [i_18 - 2] [7] [i_14] [i_13]))) : (arr_55 [i_12] [0] [i_14] [i_13] [i_18])));
                            var_31 = (((((~((var_9 ? var_1 : 151))))) ? ((((max(119, -21986))) ? ((var_8 ? var_9 : (arr_53 [8] [i_13]))) : ((var_10 ? var_2 : var_2)))) : (arr_55 [i_12] [i_12] [i_12] [i_13] [i_12 + 1])));
                            var_32 = ((var_9 ? ((((arr_42 [1] [i_18]) ? var_4 : ((max(75, var_7)))))) : ((((((arr_47 [i_14] [i_13]) ? var_9 : var_2))) ? var_8 : -4226157119540852935))));
                        }
                        for (int i_19 = 3; i_19 < 17;i_19 += 1) /* same iter space */
                        {
                            arr_70 [i_12] [i_13] [i_14] [i_14] [1] = (~var_1);
                            arr_71 [i_12] [i_13] [i_13] [i_12 - 3] [i_19] = ((((min((min((arr_48 [i_15] [i_15] [i_15] [i_15] [i_15] [i_13]), (arr_62 [i_12] [i_12] [i_14] [12] [7] [i_15] [8]))), ((((arr_39 [i_15] [4]) ? 865707896 : (arr_44 [i_13] [i_14]))))))) || 38));
                            var_33 = (~-var_5);
                            arr_72 [i_13] [i_19] = var_8;
                            var_34 = ((865707896 ? ((var_8 ? var_0 : var_6)) : ((((!(arr_39 [i_13] [i_15]))) ? var_3 : ((var_1 ? (arr_69 [i_13] [i_13] [i_13] [9]) : -4506263680788323275))))));
                        }

                        /* vectorizable */
                        for (int i_20 = 2; i_20 < 17;i_20 += 1)
                        {
                            arr_75 [i_12] [i_13] [i_14] [i_15] [i_13] = (arr_63 [4] [i_13 + 1] [i_14] [2] [i_15] [i_20]);
                            var_35 = var_10;
                            arr_76 [i_12 + 2] [i_13 - 1] [i_15] [i_15] [i_13] [i_13 - 1] = ((var_3 ? (arr_67 [i_14] [i_13] [i_14] [i_15] [i_20 + 1] [i_12 + 2]) : (((65528 ? var_6 : var_1)))));
                        }
                    }
                }
            }
        }
    }

    for (int i_21 = 0; i_21 < 23;i_21 += 1)
    {
        arr_81 [i_21] [i_21] = ((var_2 ? (max(((((arr_78 [8]) ? 32110 : var_4))), ((var_9 ? (arr_78 [19]) : 4226157119540852921)))) : ((max((~var_1), (~var_7))))));
        var_36 = -var_0;
    }
    for (int i_22 = 0; i_22 < 14;i_22 += 1)
    {
        arr_85 [i_22] = (arr_54 [9] [i_22] [i_22] [i_22] [i_22] [i_22]);
        arr_86 [i_22] = ((var_1 ? (min((min(-9223372036854775795, var_4)), ((((-2147483647 - 1) ? (arr_55 [i_22] [i_22] [i_22] [i_22] [i_22]) : var_8))))) : (((((max(var_11, 147))) ? ((var_0 ? var_3 : var_5)) : 1)))));
        arr_87 [i_22] [i_22] = (max(((-((0 + (arr_62 [i_22] [9] [i_22] [1] [1] [i_22] [i_22]))))), (--105)));
    }
    #pragma endscop
}
