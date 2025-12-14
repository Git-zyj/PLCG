/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = var_5;
        var_15 ^= var_9;
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                {
                    var_16 *= var_6;
                    var_17 &= var_12;
                }
            }
        }
        var_18 ^= arr_3 [i_1 - 1];
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_19 = (~(arr_5 [i_4] [i_5] [i_4]));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_20 = var_11;
                            var_21 = var_13;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_22 = var_6;
                        arr_28 [i_5] [i_9] [i_5] [i_5] = var_10;
                        var_23 = ((!(arr_4 [i_4])));
                    }
                }
            }

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_24 = (~var_9);
                var_25 = (arr_1 [i_4]);

                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    var_26 = var_10;

                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        var_27 = -230;
                        var_28 = ((-((-(arr_25 [i_12] [i_4] [i_4])))));
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_29 = (max(var_29, (((!(arr_27 [i_12] [i_12] [i_12]))))));
                        arr_39 [i_4] [i_5] = (arr_31 [1] [1] [i_5]);
                        var_30 = var_9;
                    }

                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_31 *= var_0;
                        var_32 = var_3;
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        arr_46 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4] [i_5] = var_5;
                        var_33 = var_9;
                    }
                    var_34 = (max(var_34, -51));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    arr_50 [i_5] [i_17] [i_17] = var_6;
                    var_35 = var_8;
                    var_36 = (arr_34 [i_17] [i_11] [i_5] [i_5] [i_4]);
                    arr_51 [i_4] [i_5] [i_4] [i_4] = (~93);

                    for (int i_18 = 1; i_18 < 13;i_18 += 1)
                    {
                        arr_54 [i_18 - 1] [i_4] [i_5] [i_5] [i_4] [i_4] = (arr_7 [i_5] [i_4]);
                        arr_55 [i_4] [i_5] [i_5] [i_5] [i_4] = (arr_32 [10] [i_5] [i_5] [i_5]);
                        var_37 = -var_12;
                        var_38 *= (arr_8 [i_4] [i_4] [i_4]);
                    }
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        var_39 = var_3;
                        arr_61 [i_4] [i_5] [3] [i_4] [3] = var_5;
                    }
                    for (int i_21 = 3; i_21 < 12;i_21 += 1)
                    {
                        var_40 = var_7;
                        var_41 = var_6;
                    }
                    arr_64 [i_5] [i_5] [i_5] [i_4] = var_1;
                    var_42 = var_3;
                    var_43 = 230;

                    for (int i_22 = 4; i_22 < 11;i_22 += 1)
                    {
                        var_44 = var_7;
                        var_45 *= var_11;
                        var_46 = var_2;
                        var_47 = var_2;
                    }
                }
                /* vectorizable */
                for (int i_23 = 3; i_23 < 11;i_23 += 1)
                {
                    var_48 = (arr_56 [7] [i_23 + 3] [i_5] [i_5] [11] [i_4]);
                    var_49 = (arr_69 [i_23 - 3]);
                }
                arr_72 [i_5] = var_7;
            }
        }
        /* vectorizable */
        for (int i_24 = 3; i_24 < 11;i_24 += 1) /* same iter space */
        {
            var_50 = (arr_43 [i_24] [i_4] [i_4]);
            var_51 ^= (arr_19 [i_4]);
        }
        for (int i_25 = 3; i_25 < 11;i_25 += 1) /* same iter space */
        {
            arr_79 [i_25] = (!227);
            var_52 = var_12;
        }
        for (int i_26 = 0; i_26 < 15;i_26 += 1)
        {
            var_53 *= (arr_8 [i_4] [14] [22]);
            var_54 = (!var_8);
            var_55 = var_4;
        }

        for (int i_27 = 0; i_27 < 15;i_27 += 1)
        {
            var_56 = (arr_17 [i_27] [i_27]);
            var_57 = (arr_7 [i_4] [i_4]);
            arr_87 [i_4] [i_4] [i_27] = arr_13 [i_27];
        }
        var_58 = ((-(arr_16 [i_4])));
    }
    var_59 &= var_1;

    /* vectorizable */
    for (int i_28 = 0; i_28 < 16;i_28 += 1)
    {
        var_60 = (arr_6 [i_28] [23] [23]);
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 16;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 16;i_30 += 1)
            {
                {
                    var_61 = var_10;

                    for (int i_31 = 4; i_31 < 12;i_31 += 1)
                    {
                        arr_96 [i_28] [i_28] [i_28] = var_9;

                        for (int i_32 = 0; i_32 < 16;i_32 += 1) /* same iter space */
                        {
                            var_62 = (!var_1);
                            var_63 = (~var_3);
                        }
                        for (int i_33 = 0; i_33 < 16;i_33 += 1) /* same iter space */
                        {
                            var_64 = (min(var_64, var_4));
                            var_65 = var_3;
                            var_66 = var_11;
                        }
                        for (int i_34 = 0; i_34 < 16;i_34 += 1) /* same iter space */
                        {
                            var_67 &= (arr_4 [i_30]);
                            var_68 = (arr_100 [i_34] [i_34] [i_31 - 1] [1] [i_28]);
                            var_69 = (min(var_69, var_10));
                        }
                        for (int i_35 = 0; i_35 < 16;i_35 += 1) /* same iter space */
                        {
                            arr_105 [i_28] = (arr_9 [i_35] [i_35] [i_28]);
                            var_70 -= var_3;
                        }
                        var_71 += var_2;
                    }
                    for (int i_36 = 0; i_36 < 0;i_36 += 1) /* same iter space */
                    {
                        var_72 = var_0;
                        var_73 = var_9;
                    }
                    for (int i_37 = 0; i_37 < 0;i_37 += 1) /* same iter space */
                    {
                        var_74 = var_0;

                        for (int i_38 = 0; i_38 < 1;i_38 += 1)
                        {
                            var_75 = (!179);
                            var_76 ^= ((-(arr_88 [i_37 + 1])));
                        }
                    }
                    for (int i_39 = 0; i_39 < 0;i_39 += 1) /* same iter space */
                    {
                        var_77 = ((-(arr_110 [i_39 + 1] [8] [i_39 + 1] [i_39])));
                        var_78 = var_0;
                        arr_115 [i_29] [i_29] [i_29] [i_28] &= -17018297758898400757;
                        var_79 = (min(var_79, var_0));
                    }
                    var_80 = var_5;
                    var_81 = var_7;
                }
            }
        }
    }
    var_82 = var_5;
    #pragma endscop
}
