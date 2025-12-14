/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(((min(var_13, -31))), (max(var_12, 31)))), ((min(38, 36)))));
    var_15 = (max((max(((max(-31, var_8))), (max(var_0, var_0)))), ((min(((min(12425, 127))), (min(var_7, var_2)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, -1));
        var_17 = -642056356;
        var_18 = 1;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 ^= (min((max((min((arr_2 [i_1] [i_2]), var_12)), ((min((arr_1 [1]), (arr_2 [i_2] [i_1])))))), (max((max(var_3, (arr_4 [i_2]))), ((max(0, var_1)))))));
            var_20 = (max(((max((min((arr_2 [i_1] [i_1]), (-2147483647 - 1))), ((max((arr_1 [i_1]), (arr_2 [i_1] [i_1]))))))), (max(((min((arr_6 [i_2] [i_2] [i_2]), 65535))), (max(var_0, var_4))))));
            var_21 = (max(var_21, ((max((max((max(0, var_0)), ((min((arr_6 [i_1] [2] [i_2]), var_10))))), ((min(((min((arr_2 [i_1] [i_2]), var_3))), (min(480, 38057))))))))));
            var_22 = (max(((max((min(0, 255)), ((min(1, (arr_3 [i_2]))))))), (max((min((arr_0 [i_1] [i_2]), (arr_5 [18] [i_1] [i_1]))), (max(58701, -1))))));
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_23 = (min((max((max((arr_2 [i_3] [5]), (arr_7 [i_1] [i_1] [i_1]))), ((max((arr_5 [24] [24] [i_1]), 0))))), (max((min(var_0, (arr_10 [1] [1]))), ((max(4294967295, 31)))))));
                        var_24 -= (max(((max(-36, 1))), (max(((max((arr_3 [i_1]), 0))), (min(-23256, -8355451125092415971))))));
                        var_25 ^= (max((min(((min(0, 1))), (max(var_13, 1235642019121109629)))), ((max((min(var_6, -1968674556)), ((min(1, 30))))))));
                        arr_16 [i_5] [i_4] [i_1] [i_1] = (min((max((max(var_2, 1)), ((min(20314, -3141))))), ((max((max((arr_13 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1]), var_8)), (max(var_5, var_11)))))));
                    }
                }
            }
            var_26 = (max(((max((min((arr_3 [i_1]), (arr_9 [i_3]))), (min(var_7, var_6))))), (max(((max(var_3, (arr_5 [i_1] [12] [19])))), (min(369602146119361115, 8355451125092415959))))));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_27 -= (min((max((max((arr_7 [i_1] [i_6] [i_1]), 0)), ((max(350, 32764))))), ((max((max((arr_15 [i_1] [i_1]), var_11)), ((max((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_15 [16] [i_6])))))))));
            var_28 = min((min(((max(-10, (arr_11 [i_1] [i_6] [i_1])))), (min(-8355451125092415964, 1)))), ((max(36, 1956331133))));
            arr_21 [i_1] [i_1] = (min(((min((max(1, 37512)), (min((arr_18 [1]), 36))))), (max((min(10647502716914669136, 42564)), ((max((arr_14 [i_1] [i_6] [i_1] [i_6] [0] [i_1]), var_9)))))));
        }

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                arr_28 [i_1] [i_1] [i_1] [i_1] = (max(((min(-23, -32))), (max((max(var_11, (arr_26 [i_1] [i_7] [i_1]))), ((max((arr_13 [i_8] [19] [i_7] [i_7] [13] [19]), (arr_19 [i_1] [i_7]))))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_29 = (max(((max((max((arr_20 [i_7] [i_7] [i_7]), (arr_14 [i_7] [i_8] [i_10] [i_7] [i_10] [i_7]))), ((max(var_3, var_8)))))), (max((max(var_2, (arr_8 [i_8] [i_8]))), ((max(var_6, var_1)))))));
                            arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] = (min((min(((min((arr_17 [i_10]), (arr_13 [i_1] [i_7] [i_7] [16] [i_9] [i_10])))), (max((arr_31 [1] [i_7]), var_1)))), ((max((max((arr_1 [i_1]), (arr_2 [i_10] [i_1]))), ((max(var_10, 1))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            arr_39 [i_1] [i_7] [i_8 + 1] [i_12] [i_12] = (max((max(((max(-8355451125092415971, 7231143037007015449))), (min((arr_29 [i_1] [17] [i_1] [i_11]), var_0)))), ((min((max(var_4, var_5)), (min(var_3, var_4)))))));
                            arr_40 [i_12] [i_11] [i_11] [i_11] [i_11] = (max(((min((max(-10673, -8578980081753231549)), (max(-8355451125092415967, -10))))), (max((min((arr_15 [i_1] [i_11]), var_0)), ((max(var_12, 65535)))))));
                            arr_41 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [19] = (min((max((min((arr_14 [23] [i_7] [i_7] [5] [i_11] [5]), 8355451125092415970)), ((min(var_10, (arr_35 [i_8] [i_8] [i_8 - 1] [i_8])))))), ((max(((min(1, var_6))), (min((arr_12 [i_12] [i_8] [i_1]), 4863)))))));
                            var_30 = (max(((max((max((arr_19 [i_1] [i_8 + 1]), var_1)), (max(228, var_5))))), (min((min((arr_25 [i_1] [i_7] [i_8] [i_1]), 6823567234485455108)), (min((arr_4 [i_1]), var_13))))));
                        }
                    }
                }
                arr_42 [i_8] [i_7] = (min((max((max(var_0, (arr_17 [2]))), ((min(var_4, var_10))))), ((max((min((arr_15 [i_1] [i_1]), (arr_33 [i_7] [i_8 + 1]))), (max(-1158, 49820)))))));
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_31 = (max((min((max((arr_6 [i_1] [i_1] [i_13]), (arr_30 [i_13] [i_7] [i_7] [i_7]))), ((min(var_8, (arr_46 [i_14] [i_1] [i_1])))))), ((min((min(var_8, var_13)), ((max(var_6, (arr_5 [i_1] [i_7] [i_14])))))))));
                        var_32 = (max((max(((max(-22, 60659))), (max(var_12, (arr_45 [i_13]))))), ((max((min(-1635171820, 25)), ((min(26, 238))))))));
                        var_33 = (max((max(((max((arr_20 [i_1] [i_1] [i_1]), 1564803534))), (min((arr_32 [8] [i_7] [i_1]), -6)))), (max(((min(1, (arr_37 [i_1] [i_1] [i_1] [i_13])))), (max(var_8, 8355451125092415970))))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        {
                            arr_58 [i_15 - 1] [i_7] [i_15] [i_16] [14] [i_17] [i_15 - 1] = (min(((max((max(-10, 60655)), ((min(var_5, (arr_29 [i_1] [1] [i_15] [i_17]))))))), (min((min(-36, (arr_8 [i_1] [i_7]))), ((max(var_3, var_3)))))));
                            var_34 = (max(((max(((max(var_5, (arr_54 [i_1] [i_7] [16] [16] [16] [16] [i_17])))), (max((arr_17 [i_1]), var_7))))), (max(((max(-36, var_11))), (min(-34, var_12))))));
                        }
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            var_35 = (max((min(((max(36, -1))), (max((arr_36 [i_1] [i_18] [4] [i_18] [i_1]), var_10)))), ((max((min((arr_10 [i_1] [i_18]), 26)), ((max((arr_29 [24] [i_18] [i_18] [i_18]), var_10))))))));
            var_36 = (max(1381995991, 123));
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            var_37 = (min(var_37, 23806));
            var_38 = 112;
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 22;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        {
                            var_39 ^= 3423;
                            arr_76 [i_23] [i_22 - 2] [i_21] = 4;
                            var_40 *= 40742;
                            var_41 |= (-127 - 1);
                            var_42 = 3423;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 25;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {
                        {
                            var_43 = 103;
                            var_44 = 127;
                            arr_81 [i_25] [i_25] [i_24] [i_21] [i_20] [i_25] [i_1] = -56;
                        }
                    }
                }
                var_45 = -3;
                arr_82 [i_21] = 4191724951;
                arr_83 [i_1] [i_20] [i_21] = -122;
            }
            for (int i_26 = 2; i_26 < 24;i_26 += 1)
            {
                var_46 = 7621043564655216670;

                for (int i_27 = 3; i_27 < 23;i_27 += 1)
                {
                    var_47 = 253;
                    var_48 = 4863;
                    var_49 = 60672;
                    arr_89 [i_1] [i_1] = 138;
                    var_50 |= 34;
                }
                for (int i_28 = 0; i_28 < 25;i_28 += 1)
                {
                    var_51 += 1;
                    var_52 = -32;
                }
                for (int i_29 = 1; i_29 < 24;i_29 += 1)
                {
                    var_53 *= 1;
                    var_54 = 37960;
                }
                var_55 = 227;
                var_56 += 32767;
            }
            arr_98 [i_20] = -1;

            for (int i_30 = 0; i_30 < 1;i_30 += 1)
            {
                var_57 = 44;
                var_58 = 4294967295;
                var_59 |= 4927;
                arr_101 [i_1] [19] [i_20] &= 8177879844253897365;
            }
        }
        var_60 = (min(var_60, ((max((max((min((arr_25 [14] [i_1] [3] [i_1]), var_12)), (min(var_12, var_2)))), (min((min(4382205624060986000, (arr_4 [i_1]))), ((min((arr_14 [i_1] [i_1] [i_1] [i_1] [5] [i_1]), (arr_35 [i_1] [i_1] [i_1] [i_1])))))))))));
    }
    #pragma endscop
}
