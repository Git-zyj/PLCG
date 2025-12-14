/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_20 = max(((max(((max(14254, -20464))), (min(var_19, (arr_4 [0] [i_1])))))), (min(((max(-20464, var_4))), (max(var_19, var_11)))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_21 &= (max((max(((min(var_3, -16518))), (max(var_11, (arr_9 [i_3]))))), (max(((min(-20444, 16522))), (min((arr_6 [i_0] [i_1] [i_2] [i_3]), var_2))))));
                            var_22 = (min(((min((min((arr_1 [i_4]), var_18)), ((min((arr_0 [i_4]), (arr_7 [15] [15] [i_3] [i_4]))))))), (max(((min(1790258334, 16517))), (min(0, 16513))))));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
            {
                var_23 = max(((min((max(var_16, var_7)), (min(var_13, (arr_12 [i_5] [i_0] [i_0] [i_1] [i_0] [i_0] [9])))))), (max((min(17, 0)), (max(var_17, var_15)))));
                arr_18 [i_1] [i_1 - 3] = (max(-125, -125));
                arr_19 [i_1] = (max(((max(((min(0, var_0))), (min(var_14, var_16))))), (max(((min(16523, 1))), (min((arr_4 [15] [i_1]), 18446744073709551602))))));
                var_24 = (max(((max(((max(var_6, (arr_13 [i_5] [6] [i_1] [8] [13] [i_0] [i_0])))), (max((arr_17 [i_0] [i_0]), 13))))), (min(((max(224, var_4))), (max(4294967280, (arr_16 [i_5] [i_5] [i_1] [i_0])))))));
            }
            arr_20 [i_0] [14] [i_1] = (min((min((min(65517, var_12)), ((max(16517, -11062))))), (max((min(0, 91)), ((max(0, (arr_15 [i_0] [i_0] [1] [i_0]))))))));
            var_25 = (max(-7396, (-32767 - 1)));
            arr_21 [14] [i_1] [i_0] = (min((max((min(0, 14)), ((min(-159, 1))))), (max((min(4077512346095493361, 12353274311218480019)), ((max(-16524, (arr_7 [i_1 - 3] [i_1 - 2] [i_1 - 3] [16]))))))));
        }
        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_26 = (max(var_26, ((min((min((max((arr_3 [i_0] [i_0] [i_0]), 7779436008490008720)), ((min((arr_10 [i_0] [i_0] [i_0] [i_0]), var_2))))), (min((max(var_17, (arr_4 [i_0] [i_0]))), ((min(var_5, 4))))))))));
            arr_26 [i_0] [i_6 + 3] = (max((min((max(var_13, 18062260155002354283)), ((max(64, 4294967291))))), (max(((max(var_18, 1))), (max((arr_3 [i_0] [14] [i_6]), (arr_8 [i_0] [i_0] [i_0] [i_6])))))));
            var_27 = max((max(((min((arr_24 [i_6 - 2] [i_0] [i_0]), (arr_17 [4] [13])))), (max(202, (arr_8 [14] [i_0] [16] [8]))))), ((max(-16524, (min(7087783190507234602, 32765))))));
        }
        for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
        {
            arr_30 [i_0] [i_0] [6] &= (max((max((min(4292870144, 1)), ((max(1, var_14))))), ((min((max(var_4, 524256)), (max((arr_17 [i_0] [9]), (arr_28 [i_0] [i_7]))))))));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    {
                        var_28 = (max((max((max(0, var_11)), (min(-512, (arr_2 [i_0]))))), (max(((min(-524256, 1900965652))), (min((arr_12 [0] [0] [0] [i_9] [i_9 + 1] [i_0] [12]), 20))))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_29 -= 14;
                            arr_37 [i_10] [i_10] [4] [i_8 + 1] [i_7] [4] = -9488;
                        }
                        for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_0] [i_0] [5] [5] [5] = (max((min((min(31, (arr_31 [i_0] [i_0]))), ((min(524259, (arr_24 [i_0] [i_8 - 1] [7])))))), ((min((max((arr_15 [i_0] [i_0] [i_9 + 1] [i_11]), var_6)), ((max(var_13, (arr_24 [i_0] [i_0] [i_8])))))))));
                            var_30 = (min((min(2857137409, 128)), (min((min(2394001650, 1073217536)), (max(4294967294, var_5))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            arr_44 [i_0] [1] [i_8] [i_8] [i_0] = 151;
                            arr_45 [i_12 + 1] [i_9] [i_7] [i_7 + 1] [i_7] [i_0] = 0;
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            var_31 = 17;
                            var_32 = (max(var_32, 14));
                            var_33 = -3982;
                            var_34 = 515;
                            arr_50 [i_13 - 1] [i_13] [i_13] [i_13] [7] [7] = 0;
                        }
                    }
                }
            }
        }
        var_35 &= (max(((min((max(var_7, 9223372036854775807)), ((max(2016, (arr_15 [2] [7] [i_0] [0]))))))), (min(((min(4294967282, 0))), (max((arr_17 [9] [i_0]), 18446744073709551608))))));
        var_36 = (max((min(((max(var_3, var_4))), (max(1900965646, (arr_12 [i_0] [i_0] [13] [i_0] [i_0] [11] [i_0]))))), (max(-1284088621933218984, -32743))));
        arr_51 [i_0] = (min(((max((min((arr_36 [11] [i_0] [4] [i_0] [i_0] [10]), var_9)), (min(2044, 2019331034))))), (min(9223372036854775807, 158))));
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    var_37 = max((max((max((arr_7 [i_0] [i_0] [i_0] [i_15]), (arr_48 [i_0] [0] [i_15] [i_0]))), ((max(239, (arr_34 [15] [16] [i_15] [i_15])))))), ((max(2036, -2044))));
                    arr_56 [i_0] [13] [i_14] = (min(((min((min(var_15, var_11)), ((min((arr_55 [i_15]), 58)))))), (max(((min((arr_17 [i_0] [i_14 + 1]), var_8))), (max((arr_54 [i_15]), (arr_14 [i_0] [i_14] [i_14] [i_15] [i_15] [i_15])))))));

                    for (int i_16 = 3; i_16 < 15;i_16 += 1)
                    {
                        var_38 -= (max(((min(((max((arr_43 [1] [i_15] [i_14] [i_0] [i_0]), (arr_13 [i_0] [0] [i_15] [i_15] [i_15] [i_15] [i_15])))), (min(var_16, (arr_38 [i_0] [i_0] [i_0] [i_0] [10])))))), (min((min(0, (arr_59 [i_0] [i_14]))), ((min((arr_5 [i_0]), var_4)))))));
                        arr_60 [i_14] [i_15] [1] [i_14] = (max(((max((min(var_5, var_11)), ((min((arr_16 [1] [i_14] [i_14] [1]), 260046848)))))), (min((max((arr_42 [i_0] [12] [i_15] [12] [i_16 + 2]), (arr_11 [i_15] [i_15] [13] [13] [i_0]))), ((min(var_8, 2044)))))));
                        var_39 = (min((max(-2044, 1532354257639195512)), ((max(((max(var_4, (arr_33 [i_0] [i_14] [i_0] [i_0])))), (min((arr_59 [i_14] [i_14]), 81)))))));
                        var_40 += (min((min((min(3723342123, 4618096679995564271)), ((min(var_0, 1073741568))))), (max((max(var_13, (arr_12 [i_15] [i_14] [i_15] [i_14 + 2] [i_14 + 2] [i_14] [i_0]))), (min(31, (arr_7 [i_16] [i_14] [i_14] [i_0])))))));
                    }
                    for (int i_17 = 1; i_17 < 16;i_17 += 1)
                    {
                        arr_64 [i_14] [i_14] = (max((min((max(26, 3773044874372301363)), ((min(var_19, (arr_14 [i_0] [i_14] [i_14] [i_15] [i_17] [11])))))), ((min((min((arr_63 [i_14 - 1]), 3221225728)), (max(var_4, 3221225728)))))));
                        var_41 = (min(var_41, ((max((min(((min((arr_17 [i_0] [i_0]), 5768199339272269888))), (max(224, (arr_48 [i_0] [i_14 + 2] [i_15] [i_17]))))), ((max(58, 21))))))));
                    }
                    var_42 &= (min((min(((max(-16647, 2044))), (max((arr_62 [i_0]), var_19)))), ((max((max((arr_10 [i_0] [6] [i_0] [i_0]), (arr_7 [i_0] [i_14 + 1] [i_14] [i_15]))), ((max(0, 0))))))));
                }
            }
        }
    }
    for (int i_18 = 2; i_18 < 16;i_18 += 1)
    {
        var_43 = (max(var_43, ((max((max((min(var_18, -64)), ((min((arr_13 [i_18] [i_18] [i_18 - 1] [i_18] [i_18] [i_18] [i_18]), 786932517))))), ((max((min((arr_5 [4]), 2465739479)), (max(var_12, var_2))))))))));
        var_44 = (max((min((min((arr_8 [i_18] [i_18] [i_18] [i_18]), var_11)), ((max(231, var_18))))), ((max(((max(-2044, 231))), (max(7, 26)))))));
        var_45 = max(((min(((max(var_13, 16384))), (max((arr_65 [8] [i_18]), (arr_25 [i_18])))))), (max(((min((arr_47 [i_18] [i_18]), var_12))), (max(var_19, (arr_48 [i_18] [i_18] [i_18] [i_18]))))));
    }
    var_46 = (min(786932514, 0));
    var_47 = (min(var_47, ((min((max((min(var_14, var_6)), ((min(var_15, var_4))))), (min((min(var_14, var_0)), ((max(var_3, var_0))))))))));
    #pragma endscop
}
