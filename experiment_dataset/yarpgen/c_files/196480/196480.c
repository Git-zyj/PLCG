/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(var_10, (max((min(var_7, var_18)), var_18)));
    var_20 = min(var_11, ((max((min(var_14, var_3)), (min(var_9, var_14))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (min(((max(384378372, (arr_4 [i_0] [i_0] [i_0] [i_0])))), (min(6008243472225320921, var_18))));
                    var_22 = (max(var_22, ((max((max(-6008243472225320911, (arr_4 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1]))), ((min(var_9, 29073))))))));
                    arr_6 [i_1] = (min((max(-6008243472225320911, (arr_4 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1]))), ((max((arr_4 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]), (arr_4 [i_2] [i_2] [i_2 - 1] [i_2 + 1]))))));
                }
            }
        }
        arr_7 [i_0] = (min(((max((arr_0 [i_0] [i_0]), (max((arr_4 [i_0] [i_0] [i_0] [i_0]), var_6))))), (min((max(var_10, (arr_3 [i_0] [i_0] [i_0]))), ((max(43511, -29073)))))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_23 = (min(((min(0, 29073))), (min((max((arr_3 [i_3] [i_3] [i_4]), (arr_9 [6] [i_4]))), ((min(43511, var_8)))))));

            for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
            {
                arr_16 [i_3] [i_3] [i_4] [i_5] = (min((max(var_1, 6008243472225320910)), (max(((max(var_9, 29073))), 6008243472225320910))));

                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_24 = (min(((min(5, 41808))), (max((arr_12 [i_5 + 3]), ((min(85, (arr_5 [i_3] [i_3] [19]))))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_25 = 193;
                        var_26 = -6008243472225320901;
                        arr_22 [i_3] = -6008243472225320922;
                        arr_23 [i_5] [i_6] [i_5] [i_4] [i_3] = 30662;
                        var_27 = -6008243472225320901;
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_26 [i_8] = (max(((min((arr_20 [i_8] [i_5] [i_5] [i_5 - 2] [i_4] [10]), var_9))), (max(var_4, var_4))));
                        var_28 = (min((min(-29078, var_16)), ((min(((min(var_6, 16376))), (min((arr_3 [i_5] [i_4] [i_3]), 40)))))));
                        var_29 *= (min(((max(var_13, (arr_4 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1])))), (min(5901812722408757052, 29045))));
                        var_30 ^= (max((min(var_5, (arr_9 [i_4] [i_5 - 2]))), (max(116, (arr_9 [i_3] [i_3])))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_31 |= 32600878;
                        arr_29 [i_5] [i_5] [i_5] [i_6] [i_9] [i_4] = 5901812722408757060;
                        arr_30 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] &= 25;
                        arr_31 [i_3] [6] [i_3] = 6008243472225320909;
                        var_32 = 6008243472225320910;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_35 [i_3] [i_4] [i_5 + 2] [12] [i_10] = 33850;
                        var_33 = 35756;
                        var_34 |= (-127 - 1);
                    }
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    var_35 = (min(((max((arr_19 [i_5] [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5] [i_5 + 2]), (arr_19 [i_5] [i_5] [i_5 + 1] [3] [i_5] [i_5 - 2])))), (min(35, (arr_2 [i_11] [i_5 + 1])))));
                    var_36 = (max(((max(252, (arr_0 [i_11] [i_3])))), (max((max(4262366418, var_4)), ((max(85, 30106)))))));
                    arr_39 [i_3] [i_11] = (max((max((arr_11 [i_4]), 49160)), (min((max(22032, 153)), ((max(var_1, 18857)))))));
                }
                for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    var_37 = (max((min(-5769334372941315283, ((max(-127, var_18))))), ((max(var_3, var_11)))));
                    var_38 ^= (min((min(133, 7)), ((min(18857, (-127 - 1))))));
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                {
                    var_39 = (min((min(1128610233, ((max((arr_14 [i_3] [18] [i_5] [i_13]), var_10))))), ((min((arr_37 [i_5] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5] [i_5]), (max(-127, 126)))))));
                    var_40 -= (min(((min((arr_40 [i_5] [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 1] [i_5]), var_12))), (max((arr_40 [2] [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 3]), 8421795898077325418))));
                }
                var_41 = (min((min(var_9, 6008243472225320914)), ((max((arr_10 [i_5 + 1]), var_13)))));
            }
            for (int i_14 = 2; i_14 < 17;i_14 += 1) /* same iter space */
            {
                arr_49 [i_3] &= (max(((max(var_18, var_13))), (min((arr_21 [i_3] [i_14 + 1] [i_14 + 3] [i_14] [i_14]), var_11))));
                var_42 = (max(((max(18304, var_18))), (max(20, -64))));
                var_43 = max((min(3, (arr_17 [i_3] [i_3] [i_4] [i_14 + 3]))), (max(4294967289, var_12)));
            }
            for (int i_15 = 2; i_15 < 17;i_15 += 1) /* same iter space */
            {
                var_44 = (max(var_44, ((max((max(var_14, (arr_11 [i_15 - 1]))), (min(var_10, (arr_11 [i_15 - 2]))))))));
                var_45 = (min(var_45, ((min((max((arr_13 [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_15 + 1]), 64)), (min((arr_13 [i_15 + 2] [i_15 - 2] [i_15 + 2] [i_15 - 2]), (arr_13 [i_15 + 3] [i_15 - 1] [i_15 + 3] [i_15 + 2]))))))));
                arr_53 [i_15] [i_15] [i_15] [i_3] = (min((min(32600878, 65124)), ((min(var_2, (arr_20 [i_15 + 3] [i_15] [i_15] [i_15 - 2] [i_15 + 3] [i_15 - 1]))))));
                var_46 ^= (min(((min((min(-1816285045, (arr_46 [i_15]))), 65535))), (min((min(var_16, var_14)), ((min(-20852, 4262366421)))))));
                var_47 = (min((min(6008243472225320906, (arr_52 [i_15 - 1] [i_15 - 1] [17] [i_15 - 2]))), ((min(var_9, var_11)))));
            }
        }
        arr_54 [i_3] = (min(((max(var_3, (arr_50 [i_3])))), (min((arr_42 [i_3] [i_3] [i_3]), 62))));
        var_48 -= (min(((max(var_5, 1040473818))), (min(var_0, (arr_1 [i_3] [i_3])))));
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
    {

        for (int i_17 = 1; i_17 < 18;i_17 += 1)
        {
            var_49 *= max((max(15777622990287381061, 8)), ((min(var_11, var_9))));
            var_50 = (max((min((arr_43 [i_17] [i_17 + 2] [i_17] [i_17 + 1]), var_5)), ((min((arr_43 [i_16] [i_17] [i_17] [i_17 + 2]), var_15)))));
        }
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            arr_63 [9] [i_18] [i_16] = (max(((min(var_9, (arr_33 [i_18] [i_18] [i_16] [i_16] [i_16] [i_18] [i_16])))), (max((arr_3 [i_16] [i_16] [i_18]), var_16))));
            var_51 = min(((max((arr_0 [i_16] [i_16]), 22))), (min(1, var_5)));
        }
        var_52 = (max(((min(var_1, (arr_4 [i_16] [i_16] [3] [i_16])))), (min(-20852, 94))));
        var_53 = (max(((min((arr_14 [i_16] [i_16] [i_16] [i_16]), var_13))), (max(var_0, var_2))));
        var_54 = (min(var_54, ((min((max((arr_13 [i_16] [i_16] [i_16] [i_16]), (arr_55 [i_16]))), (max(1816285044, (arr_55 [i_16]))))))));
    }
    for (int i_19 = 0; i_19 < 22;i_19 += 1)
    {
        /* LoopNest 2 */
        for (int i_20 = 2; i_20 < 19;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                {
                    arr_70 [i_21] [i_21] [i_21] = (max((max((arr_68 [i_20 + 3] [i_20 + 2] [i_20 - 1]), 20865)), (max((arr_68 [i_20 + 3] [i_20 + 2] [i_20 - 1]), (arr_68 [i_20 + 3] [i_20 + 2] [i_20 - 1])))));
                    var_55 ^= (max(((min(var_17, 4262366418))), (max(7446318311736142468, (arr_64 [i_20 + 3])))));
                }
            }
        }
        var_56 = (max(var_56, ((min((max(1897, 14443)), (max(0, (arr_64 [i_19]))))))));
        arr_71 [i_19] [i_19] = (min(((max(20863, var_0))), (min(0, (arr_69 [0] [i_19] [i_19] [0])))));
    }
    #pragma endscop
}
