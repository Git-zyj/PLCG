/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max((max(((min(174, var_6))), (max(var_13, 11128301345065770537)))), (min((max(17390428592789176930, var_9)), (max(var_14, var_12)))))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (max((min((max((arr_1 [i_0 - 1] [i_0]), (arr_0 [i_0]))), ((min(var_11, (arr_1 [i_0] [i_0 - 1])))))), (max((max((arr_0 [i_0 - 2]), var_15)), (max((arr_1 [17] [i_0]), (arr_0 [i_0 - 1])))))));
        var_17 = (min(var_17, (min((max(((min(var_5, var_14))), (max(var_9, 8325570132556106759)))), (max(((min(255, var_3))), (min(var_6, var_4))))))));
        arr_3 [i_0] = (min((max(((max((arr_1 [i_0 + 1] [i_0]), var_8))), (min(17390428592789176933, (arr_1 [i_0] [i_0]))))), ((max((max(var_6, var_4)), ((max(var_10, 65534))))))));
        var_18 *= (min(((max((max((arr_0 [i_0 - 1]), 4070713767)), ((max((arr_1 [i_0] [i_0]), 24223)))))), (min(((max((arr_1 [i_0] [i_0]), var_5))), (max(var_10, 1056315480920374686))))));
        arr_4 [i_0] [i_0] = (max((max(((min(-17166, (arr_1 [0] [i_0 + 1])))), (max(var_10, var_0)))), ((max((max(17165, 28)), (max(var_5, 249)))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_3] = (max(((min(((min(var_3, (-32767 - 1)))), (min(194, var_15))))), (min(((max(1, 17165))), (max(var_4, var_6))))));
                    arr_13 [i_1] [1] = (min((min(((max(8191, (arr_8 [i_2] [i_2])))), (max(var_7, 7522528976017754306)))), ((min((max((arr_9 [i_1]), 718420908)), ((max(17168, 1))))))));

                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        arr_18 [5] [i_2] [i_3] [i_2] [i_1] = (min(((max((max(var_3, (arr_6 [i_1]))), (max(833327438, (arr_17 [i_1] [i_1])))))), (max((max((arr_7 [i_1]), 1)), ((min(var_15, 17187)))))));
                        arr_19 [12] [i_2] [i_2] [i_4 - 1] [11] [0] = (max((max((max((arr_1 [13] [13]), 3461639859)), ((min((arr_9 [i_3]), (arr_17 [i_1] [i_1])))))), ((min((min(var_8, (arr_15 [8] [i_2] [8] [8]))), (min(var_14, (arr_9 [i_1]))))))));
                    }
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        arr_23 [i_2] = (max((max((min(718420924, (arr_6 [i_5]))), (max(1, var_15)))), (min((max((arr_20 [11] [i_2] [i_3] [i_5]), 833327418)), ((max(324824677, (arr_9 [i_1]))))))));
                        var_19 += (max((max((min(7522528976017754331, var_1)), ((max(var_14, var_4))))), (max(((min((-32767 - 1), 23758))), (min(7522528976017754306, 1))))));
                        var_20 = (max(((min(((max(1, -17179))), (max(var_15, -17166))))), (min((max(var_13, var_2)), ((max(var_8, (arr_17 [i_1] [i_1]))))))));
                    }
                    var_21 ^= (max((max((max(7318442728643781078, (arr_9 [i_3]))), ((max((arr_22 [i_1] [i_2]), 7))))), ((min(((max(var_6, 8191))), (max(-1, (arr_20 [i_3] [i_3] [i_2] [11]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_22 &= (min((max(((max(26882, 9519))), (min(var_9, var_2)))), ((max((max(15, -9518)), ((max(var_3, (arr_9 [i_7])))))))));
                                var_23 = (max(var_23, ((min((max((min(2718765911194090071, 4050867041)), (max((arr_16 [i_1] [11] [i_6] [i_7]), -4918)))), ((max((min((-127 - 1), 17137)), ((max(var_11, var_11)))))))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_24 += max(((max((min((arr_31 [i_1]), var_7)), (min((arr_14 [7] [i_8] [i_8] [i_8]), -31321))))), (min(((max((arr_0 [i_1]), var_7))), (max((arr_21 [4] [i_8] [i_9] [5]), 7318442728643781078)))));
                    arr_36 [i_1] [i_1] [i_8] [6] = (max(((max((min(1, var_5)), ((min(var_14, var_6)))))), (min((max((arr_17 [6] [i_8]), (arr_6 [i_1]))), (min(3262383, (arr_29 [i_1] [i_8] [i_9])))))));
                }
            }
        }
        arr_37 [i_1] [i_1] |= (max(((max(((max((arr_33 [i_1] [13] [i_1]), (arr_1 [i_1] [i_1])))), (min(var_0, (arr_22 [4] [i_1])))))), (min((max((arr_9 [i_1]), (arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))), ((max(var_5, (arr_24 [i_1]))))))));
        arr_38 [i_1] = (max((max(((max((arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), var_7))), (min(var_2, (arr_14 [i_1] [i_1] [i_1] [i_1]))))), (max(((max((arr_14 [i_1] [i_1] [i_1] [i_1]), var_4))), (min(10924215097691797298, var_7))))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            var_25 = (min(((max(((max(0, 3262374))), (max(var_4, (arr_33 [i_1] [i_10] [i_13])))))), (max((min(1657654531, var_2)), ((max((arr_20 [2] [i_11] [i_12] [i_13]), (arr_24 [i_11]))))))));
                            arr_49 [i_1] [6] [i_1] [i_12 - 1] [i_1] = (min((max((max(1, (arr_44 [i_1] [i_1] [i_11] [i_12] [i_13]))), ((max(1288, 558633221))))), ((min(((max(244100255, (arr_8 [i_1] [i_10])))), (min((arr_10 [i_13]), var_10)))))));
                            arr_50 [i_1] [i_10] [i_12] [12] = (max((max((min(var_11, var_12)), ((min(-2718765911194090058, (arr_15 [i_1] [i_10] [i_10] [1])))))), (min(((max((arr_20 [i_1] [i_10] [i_12] [i_13]), var_10))), (min((arr_45 [i_12]), (arr_7 [i_1])))))));
                            var_26 &= (min((max((max(7522528976017754294, var_4)), ((max(var_6, (arr_20 [i_1] [13] [0] [i_12])))))), (max(((min(-2, var_10))), (max((arr_43 [i_1]), var_12))))));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_27 = (max(var_27, ((max(((min((min(1, 441377757)), ((max(var_8, (arr_54 [i_1] [i_1] [i_11]))))))), (max((max(1, var_9)), (max(3834928188602444815, 266950262)))))))));
                            var_28 = (max((max(((max((arr_20 [i_1] [i_11] [i_11] [i_14]), (arr_6 [i_14])))), (max(var_8, 2718765911194090071)))), ((min(((min(1, var_11))), (max((arr_32 [11] [i_10]), (arr_25 [1]))))))));
                        }
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            var_29 *= (max((min((max(var_2, 43703)), ((max(var_5, (arr_30 [i_1] [i_10] [i_10] [i_10] [5])))))), ((min(((min(1, -23300))), (min(5336, (arr_45 [i_1]))))))));
                            var_30 *= (min((max((max(17809291331843302854, -13899)), ((min(4291704913, (arr_40 [i_1])))))), ((max(((min(var_5, var_5))), (min((arr_9 [i_1]), (arr_22 [i_15] [i_11]))))))));
                            arr_57 [5] [i_10] [i_11 - 1] [5] = max(((max((max((arr_31 [i_15]), 23309)), (min((arr_39 [i_1] [i_10] [i_11]), (arr_35 [i_1])))))), (min((min(18446744073709551610, (arr_14 [3] [12] [12] [i_10]))), ((max(1165564061, (arr_22 [11] [6])))))));
                        }
                        arr_58 [i_1] [i_10] = (min((min(((min(var_10, (arr_24 [i_12])))), (min((arr_54 [i_10] [i_11] [i_10]), var_2)))), ((min(((max(43, var_6))), (max((arr_42 [12] [12] [i_11] [i_12]), (arr_34 [i_12] [i_11] [i_10]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
