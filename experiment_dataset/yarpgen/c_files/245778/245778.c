/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_19 = (min((min(((min((-32767 - 1), var_18))), (max(1690419634, (arr_0 [i_0 - 2]))))), (min(((max((arr_1 [i_0]), var_14))), (max(1043639168, 4294967276))))));
        var_20 = (min(((max((min((arr_0 [i_0]), (arr_1 [i_0]))), (max(var_0, (arr_0 [i_0])))))), (max(((min(var_0, 1043639168))), (min(var_1, (-9223372036854775807 - 1)))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_8 [i_2] = (max((min((min((arr_3 [i_0] [i_0 + 1]), 0)), ((max(var_4, (arr_5 [i_2] [i_2] [i_2])))))), (max((min((arr_2 [i_1] [i_1]), 30)), ((max((arr_4 [i_1]), var_4)))))));
                        arr_9 [i_0] [i_0] [i_0] = (min(((min((max(var_6, var_3)), ((min(var_15, var_9)))))), (min(((min((arr_3 [i_1] [11]), var_11))), (max((arr_7 [i_0] [i_1] [15] [15] [i_3]), (arr_7 [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_3] [i_3])))))));
                        arr_10 [i_0 - 1] [11] [i_2] [11] = (max((min((min(var_7, (arr_0 [i_0]))), ((min((arr_3 [i_0] [i_0]), (arr_4 [i_1])))))), ((min((min(var_12, var_10)), ((max((arr_6 [i_0 + 2] [i_0 + 2] [i_2] [i_2]), var_4))))))));

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            arr_13 [i_4] = (min(((min(127, -1312346952))), (min((min(var_1, (arr_7 [i_0] [i_0] [i_0] [i_3] [i_0]))), ((min(0, (arr_5 [i_0] [18] [i_0]))))))));
                            arr_14 [23] [23] [23] = (max((max(65535, 53113)), ((min(32767, (-32767 - 1))))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_21 = (min(((min(((max(-18628, -30830))), (min(var_10, var_9))))), (max((min((arr_1 [i_3]), -1021479382563601453)), ((max(32752, var_1)))))));
                            arr_18 [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1] = (max((max((min(18626, 534640990)), (min(var_16, var_3)))), (min(((min(var_10, var_16))), (min(var_5, var_8))))));
                            var_22 = (max((min((max(13578301636133728040, (arr_16 [i_0] [i_1 - 1] [i_0] [14] [i_1 - 1] [i_3] [i_5]))), ((max(var_0, (arr_12 [i_2] [i_2] [i_2])))))), (min(((max(0, (arr_0 [i_5])))), (min(18446744073709551615, (arr_1 [i_1])))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_23 -= (min((max((min(0, var_1)), ((min(22605, (arr_7 [i_6] [i_6] [i_6 - 1] [i_6] [i_6])))))), ((min(((min(var_10, (arr_2 [i_6] [i_6])))), (min(var_9, var_3)))))));
        var_24 = (min((max(((max(var_1, (arr_1 [14])))), (min(1186271603, 4294967270)))), (max((min(2970721087, 5383)), ((min((arr_4 [i_6]), (arr_17 [i_6 + 2] [i_6] [i_6] [i_6] [i_6]))))))));
        var_25 = (max(((min((min(var_7, 18636)), ((max(61847, 18636)))))), (min((min(22033, 14388015069562788267)), ((min((arr_15 [i_6] [i_6 + 1] [i_6 + 1] [i_6]), var_17)))))));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {

        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            var_26 = (min((min((min(-18171, var_5)), ((max(var_4, 1))))), ((min(((min((arr_21 [i_7] [8]), (arr_24 [i_7] [i_7] [i_7])))), (min(var_4, 0)))))));
            var_27 -= (min(((min((max(3055721585, (arr_12 [i_8 + 1] [i_8 + 1] [i_7]))), ((min(var_4, (arr_3 [i_7] [i_8 - 3]))))))), (min((max(8257357167807408797, var_8)), ((min((arr_1 [i_8]), (arr_6 [i_7] [i_8] [i_7] [i_7]))))))));
            var_28 |= (min((max(((min((arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [16] [i_7]), (arr_5 [i_7] [i_7] [i_8])))), (min((arr_20 [1] [i_8]), -2961298108519610370)))), ((max((max(3441333603, 32744)), ((min(var_16, var_16))))))));
            arr_26 [5] = (min(((max(((min(var_2, 0))), (min(18171, var_7))))), (max((min((-32767 - 1), 18446744073709551615)), ((max(1043639173, var_16)))))));

            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                var_29 = (max(var_29, ((max((max((max((arr_11 [i_7] [i_8 + 2] [22] [i_9]), (arr_27 [i_7] [i_8 - 3]))), ((min((-9223372036854775807 - 1), (arr_6 [i_7] [i_7] [i_7] [i_7])))))), (max(((min(var_0, (arr_17 [i_9 + 1] [i_7] [i_8 + 2] [i_7] [i_7])))), (max(var_13, (arr_11 [i_7] [i_8] [i_9 - 1] [i_9 + 1]))))))))));
                var_30 = (min((min((min(2147483647, 2225153110)), ((min((arr_0 [i_7]), 0))))), (min(((min(-2147483646, var_11))), (max(4294967264, var_7))))));

                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    var_31 -= (max(((max(((min(-26896, (arr_22 [i_7] [i_8 - 1])))), (min(-1563649819, var_5))))), (min(((min(var_1, -32745))), (max(4058729004146763331, var_15))))));
                    var_32 ^= (min((min(((max((arr_3 [i_9] [i_10 + 2]), var_1))), (min((arr_3 [i_7] [i_7]), (arr_27 [i_7] [i_8]))))), (min((max(var_7, 30830)), ((min(30829, 0)))))));
                    arr_32 [i_10] [i_7] [i_7] [1] [i_7] [i_10] = (min(((min((max(var_0, (arr_5 [i_7] [i_7] [i_7]))), (min(-23913, 30829))))), (min((min(2560763892, 1641598753)), ((max(209, var_7)))))));
                    var_33 = (min(((min((max((arr_3 [i_7] [i_7]), var_3)), ((min(var_2, var_4)))))), (max((min((arr_23 [i_8 - 2]), var_12)), ((max(var_6, (arr_25 [7]))))))));
                }
            }
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                var_34 = (min((min((min((arr_28 [i_11]), 188)), ((min((arr_16 [i_7] [i_8] [i_7] [i_8] [i_7] [i_11] [i_7]), var_18))))), (min((max(var_15, 4294967286)), ((max((arr_25 [i_7]), var_16)))))));
                arr_35 [7] = (max(((min((min((arr_23 [i_8 - 1]), -7492)), ((min((arr_21 [i_7] [i_11]), 4294967264)))))), (min((max((arr_31 [i_7] [i_11] [5] [i_7]), 7655671680554289583)), ((min(var_0, var_6)))))));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_39 [i_7] [i_7] [i_12] [i_12] = (min(((max((max(var_0, (arr_23 [i_7]))), ((min((arr_29 [i_7] [i_7] [i_8] [i_8]), 4249679008)))))), (min(((max(32744, (arr_20 [i_12] [i_12])))), (max(15011865647569500847, 32))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 7;i_14 += 1)
                    {
                        {
                            var_35 = (max((min(((max((arr_43 [6] [i_8] [i_8] [i_12] [i_12] [i_12] [6]), (arr_15 [i_8] [i_12] [18] [i_14])))), (max(var_17, 63952)))), ((max((max(var_16, (arr_38 [i_7] [i_7] [i_12] [i_13]))), (max(7491, var_16)))))));
                            var_36 = (min((max((max(1, var_8)), (min(var_7, (arr_33 [i_8]))))), ((min((min(var_11, (arr_30 [i_7] [i_8] [i_12] [i_8] [7] [i_14 + 3]))), (max(var_4, (arr_33 [i_13]))))))));
                            var_37 *= (min((min((max((arr_21 [i_7] [i_13]), 6183214651554119120)), ((min((arr_20 [i_13] [i_12]), 4294967286))))), ((min(((min(var_9, var_2))), (max(-1285403860387310306, var_18)))))));
                            arr_44 [i_7] [i_12] [i_7] [i_13] [i_14 + 3] = (min(1678874665, 18446744073709551615));
                        }
                    }
                }
            }
        }
        var_38 = (min(((min((min(911962373, var_14)), ((min(var_10, 1)))))), (min(((max(var_13, var_8))), (max(var_8, var_3))))));
    }
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 24;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            {
                var_39 = (min(var_39, ((min(((min(-10983, 7492))), (max((max((arr_46 [i_15 - 1]), var_7)), (min((arr_47 [i_15]), 2842830325)))))))));
                arr_49 [i_16] [i_15] [i_16] = (min(((min((min((arr_45 [i_16]), (arr_47 [i_15 - 1]))), (max((arr_45 [i_15 + 1]), 18))))), (max(((max((arr_47 [i_16]), var_14))), (min(1, 3297845629))))));
                arr_50 [i_15] [i_16] [i_16] = (min((min(2147483645, 9223372036854775807)), ((max((max(1, 4294967295)), ((min(var_4, 37314))))))));
                /* LoopNest 3 */
                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 22;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 25;i_19 += 1)
                        {
                            {
                                var_40 = (min(((min(((max((arr_45 [i_19]), 109))), (min(var_6, var_9))))), (max((min(var_8, var_17)), (min(0, var_11))))));
                                var_41 ^= (max(((max(((min(var_13, (arr_56 [i_15] [i_15] [i_15] [i_17 - 1] [i_18] [i_19])))), (max(var_11, (arr_54 [i_15] [i_16] [i_15] [i_17] [i_15] [0])))))), (min((min(136, 2815298531)), ((max(2147483630, 1)))))));
                                var_42 = (min((max((max(var_11, (arr_51 [i_15] [i_16] [i_15]))), ((max(6484, var_15))))), ((min((max(-2147483646, -737)), ((min((arr_48 [i_16]), 11720))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        {
                            arr_61 [i_15 + 1] [i_15 + 1] [i_15] [i_16] = (min((max((min((arr_51 [i_15] [i_16] [i_15]), (arr_60 [5] [i_20] [i_16] [i_15]))), (min(45, 803864782638978957)))), ((min((min(var_7, 4294967295)), (max(4294967295, (arr_45 [i_15]))))))));
                            arr_62 [i_15] [i_16] [19] [i_16] [i_16] = (min(((min((min((arr_46 [i_21]), 6472)), ((max(1, var_2)))))), (max((min(var_9, (arr_57 [i_16]))), ((max(1953097268, 1840302752)))))));
                            var_43 = (max(-6668304943223944904, 240));
                            var_44 = min((min((max((arr_60 [i_20] [i_20] [i_15] [i_15]), (arr_48 [i_16]))), ((min(1665072919, 1))))), (max(1134297608, 0)));
                            arr_63 [i_16] [i_20] [2] [i_16] = (max((min((min(8, -16855)), ((max(2101252001, var_18))))), (min(((max(var_11, (arr_48 [i_16])))), (max((arr_56 [i_15] [0] [i_16] [0] [i_21] [i_21]), (arr_60 [i_15] [i_15 - 1] [i_15 - 1] [i_15 + 1])))))));
                        }
                    }
                }
            }
        }
    }
    var_45 = (max((min(((max(54, var_4))), (min(-6668304943223944904, 12229099755181899088)))), ((min((min(var_17, var_3)), ((max(var_0, 20))))))));
    var_46 = (min(((max((max(var_12, var_0)), (min(var_18, 227))))), (min((min(var_16, 22)), ((min(var_10, var_0)))))));
    var_47 = min((min(((min(var_10, var_4))), (min(var_3, 1)))), ((min(1665072919, -3114))));
    #pragma endscop
}
