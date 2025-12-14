/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 = (max(((max(((~(arr_0 [i_0]))), 49259))), (max(4294967295, 160))));
        var_19 = (arr_1 [i_0] [i_0]);
        var_20 = (--204);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_21 = (max((arr_2 [i_1]), (arr_2 [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_22 = ((-(((!(arr_3 [i_2] [i_1]))))));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    var_23 = (!2399584992);

                    for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                    {
                        var_24 = -6835444131782455098;
                        var_25 = (!16140593828738749238);
                        var_26 = (max(var_26, (arr_0 [i_4])));
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
                    {
                        var_27 = (~(arr_14 [i_4 - 1] [i_4] [i_2] [i_6 - 1]));
                        var_28 = ((-(arr_13 [0] [0] [1] [i_6 - 2] [i_6])));
                    }
                    var_29 = (arr_5 [i_2]);
                    var_30 = (arr_5 [i_2]);
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    var_31 = arr_5 [i_2];

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_32 &= (arr_10 [i_1] [i_3] [i_7] [i_8]);
                        var_33 = ((-(arr_5 [i_2])));
                        var_34 |= ((~(arr_7 [9] [i_7])));
                    }
                    var_35 = (arr_12 [5] [i_2] [i_2] [i_2] [i_2]);
                    var_36 = ((!(arr_6 [i_2])));
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    var_37 = ((~(arr_2 [i_1])));
                    var_38 *= (arr_4 [i_1] [i_9]);
                }
                var_39 = (arr_2 [i_1]);
                var_40 = (arr_1 [i_1] [i_2]);
            }
            for (int i_10 = 2; i_10 < 7;i_10 += 1) /* same iter space */
            {
                var_41 = 1178659952;
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            var_42 ^= ((!(arr_30 [i_1] [i_1] [i_10])));
                            var_43 = (max(var_43, (((!(arr_27 [i_12] [i_10 + 1]))))));
                        }
                    }
                }
            }
            for (int i_13 = 2; i_13 < 7;i_13 += 1) /* same iter space */
            {
                var_44 = (arr_33 [i_1] [i_1] [i_2] [9] [i_13 + 3] [i_13 + 3]);
                var_45 = (arr_14 [i_13 + 1] [i_2] [i_2] [i_13 - 1]);
            }
            for (int i_14 = 1; i_14 < 7;i_14 += 1)
            {
                var_46 = ((!(arr_12 [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 2] [i_14 + 2])));
                var_47 = (arr_38 [i_1] [i_1] [i_1]);
                var_48 = (min(var_48, (arr_31 [1] [i_2] [i_14 - 1] [i_2] [0])));
                var_49 = (arr_6 [i_2]);
                var_50 += -122;
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                var_51 |= -39299;
                var_52 = (min(var_52, (((-(arr_9 [i_1] [i_15] [4] [i_16]))))));
            }
            for (int i_17 = 4; i_17 < 8;i_17 += 1)
            {
                var_53 = (min(var_53, (!1895382290)));
                var_54 = (arr_10 [i_1] [i_15] [i_17 - 1] [i_17 + 1]);
            }
            var_55 = (arr_7 [i_1] [i_15]);
            var_56 = (arr_18 [8] [i_1] [8] [i_15] [i_15] [i_1]);
        }
        for (int i_18 = 0; i_18 < 10;i_18 += 1)
        {
            var_57 = max((arr_23 [i_1] [i_18] [i_1] [i_1] [i_1]), (max((arr_34 [i_1] [i_18] [i_18]), (arr_43 [i_18]))));
            var_58 = (max((arr_17 [i_1] [2] [i_18] [i_1]), ((min((!1), ((!(arr_6 [i_18]))))))));
        }
        var_59 = (arr_1 [i_1] [i_1]);
    }
    /* LoopNest 3 */
    for (int i_19 = 1; i_19 < 22;i_19 += 1)
    {
        for (int i_20 = 3; i_20 < 23;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 21;i_21 += 1)
            {
                {
                    var_60 = (min(var_60, ((max((arr_50 [i_21]), (min((arr_56 [i_19 + 2] [i_20 - 3] [i_21]), (arr_50 [i_21]))))))));
                    var_61 = (min(var_61, (((!((min((arr_53 [i_21 + 1] [i_19]), (arr_49 [i_19] [i_21])))))))));
                }
            }
        }
    }

    for (int i_22 = 1; i_22 < 11;i_22 += 1)
    {

        for (int i_23 = 1; i_23 < 11;i_23 += 1)
        {
            var_62 = (min((arr_58 [i_22] [i_23]), (arr_56 [i_22] [i_22] [i_22])));
            var_63 = (arr_51 [i_22]);
            var_64 = 61816;
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                for (int i_25 = 3; i_25 < 11;i_25 += 1)
                {
                    {
                        var_65 = (arr_59 [i_23 + 1]);
                        var_66 = (min(var_66, ((max((min((arr_68 [i_25] [i_25] [i_25 - 3] [i_25] [i_25 - 3] [i_25 - 3]), (arr_68 [i_22] [i_23 - 1] [i_24] [i_24] [i_24] [3]))), (arr_68 [i_22] [i_22] [i_24] [i_24] [i_22] [i_25]))))));
                        var_67 = 1895382290;
                    }
                }
            }
        }

        for (int i_26 = 1; i_26 < 12;i_26 += 1)
        {
            var_68 = (max((arr_56 [i_26] [i_26] [i_22]), (((!(arr_51 [i_22]))))));
            var_69 = ((~(((!((max(0, (arr_70 [i_22])))))))));
        }
        /* vectorizable */
        for (int i_27 = 0; i_27 < 13;i_27 += 1)
        {

            for (int i_28 = 0; i_28 < 1;i_28 += 1)
            {

                for (int i_29 = 1; i_29 < 12;i_29 += 1)
                {
                    var_70 = ((-(arr_73 [i_22] [i_22 + 1])));
                    var_71 &= (arr_60 [i_22 + 2] [i_22]);
                }
                var_72 = (max(var_72, 13));
                var_73 = arr_56 [i_22] [22] [i_22];
            }

            for (int i_30 = 1; i_30 < 12;i_30 += 1)
            {
                var_74 = (max(var_74, (((!(arr_74 [i_30] [i_27] [i_27] [i_22]))))));
                var_75 = ((!(arr_78 [i_22] [i_22 - 1] [i_22 - 1] [i_30 + 1] [i_30 + 1])));
            }
            for (int i_31 = 3; i_31 < 12;i_31 += 1)
            {
                var_76 &= ((!(arr_73 [i_31] [i_27])));

                for (int i_32 = 1; i_32 < 11;i_32 += 1)
                {

                    for (int i_33 = 0; i_33 < 13;i_33 += 1)
                    {
                        var_77 = (arr_54 [i_27] [i_33]);
                        var_78 = -1561916162;
                        var_79 = (arr_77 [i_22 + 1] [i_31 - 2] [i_22]);
                    }
                    for (int i_34 = 2; i_34 < 12;i_34 += 1)
                    {
                        var_80 = arr_71 [i_27] [i_31 - 2] [i_34 + 1];
                        var_81 = (arr_49 [i_22] [i_32 + 2]);
                        var_82 = (min(var_82, (((!(arr_88 [i_22] [i_27] [i_31 - 1]))))));
                        var_83 = 0;
                    }
                    for (int i_35 = 0; i_35 < 13;i_35 += 1)
                    {
                        var_84 -= (arr_65 [i_35] [i_27] [i_31]);
                        var_85 = (arr_72 [i_35]);
                        var_86 = (arr_94 [i_22] [i_22] [i_27] [i_27] [i_27] [i_32] [i_35]);
                        var_87 = (--96);
                        var_88 = (arr_61 [i_22] [i_31 + 1]);
                    }
                    var_89 = (arr_65 [i_22] [i_22] [12]);
                    var_90 = (arr_50 [i_22]);
                    var_91 = -10292;
                }
                for (int i_36 = 0; i_36 < 1;i_36 += 1)
                {

                    for (int i_37 = 1; i_37 < 11;i_37 += 1)
                    {
                        var_92 = (arr_73 [i_22 + 2] [i_22 + 2]);
                        var_93 -= (arr_69 [i_27]);
                        var_94 = arr_73 [i_31] [i_27];
                        var_95 = ((!(arr_74 [i_22 - 1] [i_22 - 1] [i_31 - 2] [i_31 - 1])));
                    }
                    for (int i_38 = 4; i_38 < 12;i_38 += 1) /* same iter space */
                    {
                        var_96 = ((~(arr_74 [i_22] [i_31 - 2] [i_36] [i_38 + 1])));
                        var_97 += (arr_62 [i_22]);
                        var_98 = (arr_100 [i_38 + 1] [i_22 + 1] [i_31 - 1] [i_36] [i_38 + 1]);
                    }
                    for (int i_39 = 4; i_39 < 12;i_39 += 1) /* same iter space */
                    {
                        var_99 = 26603;
                        var_100 = (~(arr_75 [i_22 + 1]));
                        var_101 = (arr_95 [i_22] [i_22] [i_22] [i_31 - 1]);
                        var_102 = ((-(arr_97 [i_22] [i_39 - 1] [i_39 - 2])));
                    }
                    var_103 = (arr_54 [1] [i_27]);
                }
            }
        }
        for (int i_40 = 3; i_40 < 12;i_40 += 1)
        {
            var_104 = (max(var_104, (((+((min((arr_53 [i_40 + 1] [i_22 + 1]), (arr_53 [i_40 - 3] [i_22 + 1])))))))));
            var_105 ^= (arr_83 [i_22]);
            var_106 = (arr_67 [i_22] [i_40 - 2]);
        }
        var_107 = (min((((!(arr_51 [i_22 + 2])))), (arr_82 [i_22] [i_22 - 1] [i_22] [i_22])));
        var_108 = (arr_76 [i_22 + 2] [i_22] [10]);
        var_109 = (min((arr_50 [i_22]), (arr_83 [i_22])));
    }
    for (int i_41 = 1; i_41 < 21;i_41 += 1)
    {
        var_110 = (max(var_110, (((!((max(((-(arr_50 [14]))), 0))))))));
        var_111 = (max(50, (arr_54 [i_41 - 1] [i_41 + 1])));
        var_112 = -2080295255;
        var_113 = (min(var_113, (arr_51 [i_41 + 1])));

        /* vectorizable */
        for (int i_42 = 0; i_42 < 22;i_42 += 1)
        {
            var_114 = ((!(arr_110 [i_41])));
            var_115 = 84;
        }
    }
    #pragma endscop
}
