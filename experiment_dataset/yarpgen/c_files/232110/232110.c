/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min((min((max(1344645178, 1344645176)), (max(1344645158, (-2147483647 - 1))))), 1344645158)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 *= min(((max((min((arr_0 [i_0]), var_6)), (min(var_6, (arr_1 [i_0])))))), (max((min(var_2, var_4)), (max(2950322138, var_6)))));
        arr_2 [i_0] = (min((max(((max(var_7, var_5))), (max(var_4, var_1)))), ((min((max(var_8, var_9)), (max((arr_0 [i_0]), (arr_0 [i_0]))))))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (min((max(((min(var_8, (arr_1 [i_0])))), (max(var_4, 1344645178)))), ((min((min(146575423, 1)), (min(146575426, var_7)))))));
            var_13 = (min(var_13, ((min((max((max((arr_4 [i_1 - 1] [i_0] [i_0]), var_1)), (min(var_0, var_7)))), ((max((max(74, 152)), (min(var_3, var_9))))))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (min((max((min((arr_5 [2] [i_1]), 59253)), (max(2950322138, (arr_3 [i_0] [i_0]))))), ((min(((max(var_9, var_7))), (max(146575439, -146575441)))))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_15 = (max(((min(((min(var_8, (arr_12 [i_3] [i_2] [i_0])))), (max(var_10, 2950322117))))), (min((min((arr_14 [i_0] [i_1] [12] [12] [12] [i_4]), (arr_9 [i_2] [i_3] [i_2]))), ((max(var_10, (arr_11 [i_1]))))))));
                            var_16 = (min((min(74, (max(146575402, 146575402)))), 1));
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_17 = (max(((max((max((arr_17 [i_5] [i_3] [i_0] [i_0] [i_0]), 1)), (min(var_5, (arr_15 [i_5])))))), (min((max(2950322137, -79)), (max(var_2, 1344645178))))));
                            var_18 += max(((min((min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5]), 1)), ((max(var_3, var_7)))))), (min(((min(-146575424, 1483841465))), (min(var_2, var_3)))));
                            arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] = (min((min(((min(var_4, -84))), (min(12111261451362213497, 0)))), ((min(((min(var_7, 132))), (max(2950322159, 112)))))));
                        }

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_19 = (min((min((min(1321571836, 35)), 1)), (max((max(var_10, (arr_14 [i_6] [i_3] [i_2 + 1] [i_2 + 2] [17] [i_0]))), ((min(var_4, (arr_20 [i_0] [i_1 - 2] [i_2 + 1] [i_0] [i_6]))))))));
                            var_20 = (min(((max(((min(1, 132))), (min(var_1, -146575408))))), (min((max(1344645178, var_0)), (min(var_8, (arr_22 [17] [17])))))));
                        }
                        var_21 = (min((max((max(11478533617510059073, (arr_10 [i_0] [i_1] [i_0] [i_1] [i_3]))), (min((arr_13 [i_3] [i_2] [i_0] [i_0]), 3735408067066794981)))), (max(((max((arr_7 [i_0] [i_1] [i_0]), var_6))), (min((arr_3 [i_1] [i_1]), var_3))))));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
            {
                var_22 = (max(((max(1344645178, -2008025669))), (min((max((arr_3 [i_0] [i_7]), 1)), (max((arr_3 [i_0] [i_1]), (arr_8 [i_0] [i_0] [i_7] [i_0])))))));

                for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_23 = min(((min((max((arr_26 [i_1]), var_9)), ((max((arr_24 [i_0] [i_1] [i_7] [i_7]), 1)))))), (max(((max(var_6, var_9))), (max(17838157027595592921, (arr_21 [i_7] [i_7] [i_7] [13]))))));
                        arr_30 [i_0] [i_1] [i_0] [i_7] [i_8] [i_1] [i_9] = min((max((min((arr_23 [i_0] [i_1] [6] [i_9]), 17838157027595592921)), ((max((arr_15 [i_0]), -79))))), ((min((min((arr_21 [i_0] [i_0] [17] [i_0]), var_8)), ((min((arr_13 [i_0] [i_0] [i_7] [i_9]), (arr_0 [5]))))))));
                    }
                    var_24 = (max((min((min((arr_3 [i_7] [i_7]), var_4)), ((min(var_8, var_10))))), ((min(((min((arr_0 [i_1]), var_10))), (min((arr_11 [i_7]), -146575423)))))));
                    arr_31 [i_8] [i_7] [i_0] [i_0] = (min((min((max(17838157027595592893, 1)), ((min(146575424, var_5))))), ((max((min(1, 3053354825)), ((max(var_3, 8798))))))));
                    var_25 = (max(((min((min(146575415, 1)), ((min((arr_24 [i_0] [i_0] [i_7] [i_8]), (arr_16 [i_0] [i_0] [i_1 - 1] [i_0] [i_0]))))))), (max(((max(var_10, (arr_15 [i_0])))), (max((arr_28 [i_8] [i_1]), 1344645178))))));
                    arr_32 [i_0] [i_0] [21] = (min((min(((min((arr_16 [i_0] [18] [18] [i_8] [i_8]), (arr_13 [i_7] [i_7] [i_7] [i_7])))), (min(2950322118, (arr_28 [i_0] [i_1]))))), ((min((min(1, -101)), ((min(var_9, (arr_12 [i_1] [i_7] [i_8])))))))));
                }
                for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_26 = (min((min(((min(var_3, (arr_10 [i_0] [i_0] [14] [14] [14])))), (min(var_0, var_5)))), ((max(((min(162, (arr_1 [i_0])))), (min(666725208, 1)))))));
                    var_27 = (min((max((min(var_8, (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (min(var_0, 17838157027595592900)))), (max((min((arr_0 [1]), (arr_3 [i_0] [i_0]))), ((min((arr_10 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_7]), (arr_16 [i_10 - 1] [i_7] [i_1] [i_1] [i_0]))))))));
                    var_28 = (max(var_28, (max(((min((min((arr_26 [i_0]), (arr_16 [i_0] [i_10 - 2] [i_10 - 2] [i_10] [i_10 - 2]))), ((min((arr_7 [i_0] [i_0] [i_7]), var_4)))))), (min((max((arr_22 [i_0] [i_1]), -23355)), ((max(-79, 79)))))))));
                    var_29 = (min((max(((min(var_9, var_10))), (min(3345766857, 17838157027595592892)))), (max(((min(0, 37888))), (max(17013799229294808498, (arr_23 [i_0] [i_0] [3] [3])))))));
                }
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
            {
                arr_38 [i_0] [i_0] [22] = max((min((min((arr_14 [22] [22] [22] [22] [22] [22]), (arr_21 [i_11] [i_11] [i_11] [i_11]))), ((min((arr_18 [i_0]), (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), ((min((min(var_9, (arr_21 [21] [i_1 - 1] [7] [i_11]))), ((min(var_4, 1)))))));

                /* vectorizable */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    var_30 = 2950322159;
                    var_31 = 3809113533;
                    var_32 -= 1;
                    var_33 = 2043844116;
                }
                for (int i_13 = 2; i_13 < 22;i_13 += 1) /* same iter space */
                {
                    var_34 = (min(((min(2950322137, 79))), (max((max(36793, var_0)), ((max((arr_16 [i_0] [i_0] [5] [i_0] [5]), (arr_34 [i_0] [i_1] [i_1] [i_1] [i_13]))))))));
                    var_35 = (max((max((max(-1164895404, 1305507669)), ((min(1, 1))))), ((min((min(1, 1164895413)), ((max((arr_8 [i_0] [i_0] [i_1] [i_13]), (arr_28 [i_0] [i_0])))))))));
                }
                /* vectorizable */
                for (int i_14 = 2; i_14 < 22;i_14 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_11] [i_0] = 1344645171;

                    for (int i_15 = 0; i_15 < 0;i_15 += 1)
                    {
                        var_36 = 3359231411085440767;
                        var_37 = -119;
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_38 = 200;
                        arr_53 [i_0] [5] [i_11] [i_11] [i_1 + 1] [5] [i_0] = 42269;
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        var_39 = -1164895420;
                        var_40 = 3798220656;
                        var_41 = 23283;
                        arr_57 [i_0] [i_0] [i_0] [i_0] [i_17] = 56;
                        var_42 = 1;
                    }
                    arr_58 [i_14 - 2] [i_0] [i_1] [i_0] = 23293;
                }
                arr_59 [i_0] [i_0] [i_0] = (max(5953637639834937876, -33));

                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    var_43 = (min((max((min(116, 5953637639834937869)), ((min(var_3, (arr_39 [i_1] [i_11] [10])))))), ((max((max(-2398589602495261329, 1164895437)), ((max((arr_23 [i_18] [9] [i_11] [i_11]), 204))))))));
                    var_44 = (max((min(0, 1752545472)), (max((max(-1164895399, (arr_51 [i_0] [i_0] [i_0]))), (min(var_1, 1))))));
                    var_45 = max((max(18446744073709551614, 1)), (min((min((arr_52 [i_0] [i_0] [i_0] [i_1] [i_18]), 12493106433874613749)), ((min(1, 96))))));
                }
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                arr_66 [i_0] [i_0] [i_1] [i_0] = -8259507276763348495;
                var_46 = (min(var_46, 86));
                var_47 = -36;

                for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
                {
                    arr_69 [i_0] [i_0] [i_0] [i_0] = 1604479250003641325;

                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        arr_73 [i_0] [i_1] [i_19] [i_19] [i_21] [5] = 1;
                        var_48 = 1164895399;
                    }
                    for (int i_22 = 4; i_22 < 19;i_22 += 1)
                    {
                        arr_77 [i_0] [i_1] [i_19] [i_19] [i_19] [i_0] = 69;
                        var_49 = -419376271;
                    }
                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        var_50 = 348236647;
                        arr_82 [i_19] [i_19] [i_19] [12] [i_0] = -72;
                    }
                }
                for (int i_24 = 0; i_24 < 23;i_24 += 1) /* same iter space */
                {
                    arr_87 [i_0] [i_0] [i_19] [i_24] = -87;
                    var_51 = 105;
                    arr_88 [i_0] [i_0] [i_19] [i_24] = -12;
                    var_52 = 229;
                    var_53 = 79;
                }
                for (int i_25 = 0; i_25 < 23;i_25 += 1) /* same iter space */
                {
                    var_54 = (min(var_54, 229));
                    var_55 = 695459784608119458;
                }
                for (int i_26 = 3; i_26 < 21;i_26 += 1)
                {

                    for (int i_27 = 4; i_27 < 22;i_27 += 1)
                    {
                        var_56 = 1;
                        var_57 = -1164895438;
                    }
                    var_58 = -457512466;
                }
            }
        }
        var_59 = (min(((min(((max(-91, -79))), (min(1823524577, 0))))), (min(((max(35393, 1))), (max(16188915517586182198, 5))))));
    }
    #pragma endscop
}
