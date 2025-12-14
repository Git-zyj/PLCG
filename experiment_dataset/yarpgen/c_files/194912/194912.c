/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (arr_2 [i_0]);
        var_15 = 1;
        var_16 = ((14336 ? 14349 : 1));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [8] = (max(var_3, 1));
            var_17 = (arr_9 [i_1]);
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_18 = (min(var_18, (max(((max((min(-14336, 4599)), ((max((arr_3 [i_1] [i_3]), 8192)))))), (((min(var_13, (arr_6 [i_1] [i_3]))) % var_8))))));
                arr_15 [i_4] [6] = 193;

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_19 = (max(var_19, (arr_6 [i_3] [i_3])));
                    var_20 = -504928746;
                    var_21 = (min(var_21, ((((368391371 ? 14336 : 1))))));
                    var_22 = ((-((var_0 ? (arr_6 [i_4] [i_5]) : var_4))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_23 = (((-(arr_14 [i_3] [i_4] [i_4]))));
                    arr_21 [i_1] [i_1] [i_4] [i_4] [i_6] = var_7;
                    var_24 = -315145947;
                    arr_22 [i_4] = (arr_2 [i_3]);
                }
            }
            var_25 = (max(var_25, ((max(((max((max(1, var_0)), (arr_1 [i_1])))), (arr_18 [10]))))));
            var_26 = (max(var_26, var_10));

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_27 = (max(var_27, 17287));
                var_28 = (min(var_28, ((((((min(0, (arr_23 [0] [0] [i_7]))) ? var_7 : (((min(var_8, -14370)))))))))));
                var_29 = var_6;
                arr_25 [i_7] [i_3] = -14337;
            }
            var_30 = (min(((min(var_0, var_4))), (min(((-32 ? -17288 : -20915)), 222))));
        }
        var_31 = (min(var_31, (((((arr_16 [i_1] [i_1] [i_1] [1]) ? var_9 : (arr_16 [6] [i_1] [i_1] [8])))))));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] = (min(1, (((~((var_9 ? 1232517271 : (arr_27 [i_8]))))))));
        arr_30 [i_8] [i_8] = ((((arr_24 [i_8]) >= (arr_20 [i_8] [i_8] [i_8] [i_8] [4]))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        var_32 = (arr_35 [i_9]);
                        arr_42 [i_10] [i_10] [i_11] [i_12] = ((!(((var_5 ? 3234951789 : var_1)))));
                    }
                }
            }
        }
        var_33 = (--17275);

        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            arr_47 [i_13] [i_9] = (~var_2);
            var_34 = (min(var_34, (((-2032350831 ? -315145951 : 32512)))));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_35 = (min(var_35, -var_2));
                            var_36 = -1093;
                        }
                    }
                }
            }

            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        var_37 = (1567923956 ? (arr_51 [i_13] [i_13] [i_17] [5]) : (arr_43 [i_9] [i_13] [i_17]));
                        var_38 = (max(var_38, -1093));
                    }
                    var_39 = (max(var_39, ((((-21711 + 2147483647) >> 1)))));

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_40 = (min(var_40, ((((arr_31 [i_9]) ? 0 : var_9)))));
                        var_41 = (arr_52 [i_17] [i_17] [i_17] [i_17] [i_17]);
                        var_42 = (max(var_42, var_3));
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        {
                            arr_72 [i_9] [i_9] [9] = var_3;
                            var_43 = (max(var_43, var_11));
                            var_44 = (min(var_44, 0));
                        }
                    }
                }
                var_45 = 315145947;
                var_46 = (min(var_46, (~32)));
                var_47 = ((!(arr_54 [i_9] [i_13] [i_17] [i_13] [9])));
            }
            for (int i_23 = 0; i_23 < 13;i_23 += 1)
            {
                arr_76 [i_13] [i_23] = var_10;

                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {

                    for (int i_25 = 0; i_25 < 13;i_25 += 1)
                    {
                        var_48 = ((var_9 >= (((var_13 >= (arr_33 [i_13] [i_24]))))));
                        arr_81 [i_9] [6] [i_23] [10] [10] [i_25] [3] = -3181;
                        var_49 = (max(var_49, var_8));
                    }
                    for (int i_26 = 0; i_26 < 13;i_26 += 1)
                    {
                        arr_85 [i_9] [i_13] [i_23] [i_24] [i_24] [i_26] = -1;
                        var_50 = (min(var_50, 32512));
                    }
                    var_51 = 315145956;
                    var_52 = (14349 < 1);

                    for (int i_27 = 0; i_27 < 13;i_27 += 1)
                    {
                        arr_88 [i_9] [i_13] [i_24] [i_27] = var_9;
                        var_53 = (max(var_53, -1077755925));
                    }
                    for (int i_28 = 0; i_28 < 13;i_28 += 1)
                    {
                        var_54 = (~var_11);
                        var_55 = (max(var_55, (((var_6 ? 32512 : ((var_4 + (arr_33 [i_9] [i_9]))))))));
                    }
                }
                for (int i_29 = 0; i_29 < 13;i_29 += 1)
                {
                    var_56 = (((arr_45 [i_9] [i_9]) ? 0 : 248));
                    arr_95 [i_9] [i_13] [i_13] [i_13] [i_9] [i_13] = ((-315145956 ? (arr_64 [i_29] [i_13] [i_23] [i_13] [i_13] [i_9] [i_9]) : (arr_64 [i_9] [i_9] [i_13] [i_13] [i_23] [i_29] [1])));
                    var_57 = (min(var_57, 22258));
                }
                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    var_58 = (max(var_58, (!164)));

                    for (int i_31 = 0; i_31 < 13;i_31 += 1)
                    {
                        var_59 = (min(var_59, 104996783));
                        var_60 = (max(var_60, 1));
                    }
                    for (int i_32 = 0; i_32 < 13;i_32 += 1) /* same iter space */
                    {
                        var_61 = (max(var_61, (((!(~var_1))))));
                        var_62 = (((((var_9 ? 1878370500 : var_5))) ? (~var_9) : var_8));
                        var_63 = (min(var_63, (((0 ? 0 : var_9)))));
                        arr_103 [i_13] [i_23] = ((0 ? (((var_8 ? var_13 : 1))) : 264282908));
                    }
                    for (int i_33 = 0; i_33 < 13;i_33 += 1) /* same iter space */
                    {
                        var_64 = (max(var_64, (arr_82 [i_9] [i_23] [i_33])));
                        var_65 = (min(var_65, ((((arr_61 [i_13] [i_13]) && (arr_35 [i_9]))))));
                        var_66 = (min(var_66, var_5));
                        arr_108 [12] [12] [12] [i_33] = (arr_73 [i_9] [i_9]);
                    }
                    for (int i_34 = 0; i_34 < 13;i_34 += 1) /* same iter space */
                    {
                        var_67 = (min(var_67, 1));
                        arr_113 [i_30] [i_23] [i_13] [i_9] = (arr_32 [i_23]);
                        arr_114 [i_9] [12] [i_23] [i_23] [i_30] [i_34] = (((-(arr_106 [i_9]))));
                    }

                    for (int i_35 = 0; i_35 < 13;i_35 += 1)
                    {
                        arr_118 [i_9] [i_9] [i_13] [i_23] [i_30] [i_35] [i_35] = (((((arr_49 [i_23]) ? var_11 : 1878370500))) ? (((arr_98 [i_9] [i_23] [3] [3]) ? (arr_84 [1] [i_13] [i_13] [i_13] [1] [i_13]) : var_7)) : 1);
                        arr_119 [i_35] [i_35] [4] [i_23] [i_13] [i_13] [i_9] = (((1023 ? var_10 : var_10)));
                    }
                    arr_120 [i_9] [i_13] [i_23] [i_30] = (arr_75 [i_9] [i_9] [i_9] [i_9]);
                }
            }
        }
    }
    var_68 = (max(var_68, (((~((~(~var_3))))))));
    #pragma endscop
}
