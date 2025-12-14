/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((max((min(var_15, 9)), ((min(9, -9)))))), (min((max(2641189769, 127)), (min(var_5, 2200485719))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((min(((max((max((arr_1 [i_0]), var_1)), ((min(1068568939, var_11)))))), (max(((max(26, -9))), (max(3958471602595624441, 2200485719)))))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_21 = (max((max((max(3958471602595624441, 3010918653)), ((min(var_15, (arr_5 [i_2] [i_0] [i_0])))))), ((max((max((arr_1 [i_2]), -5)), (max(var_2, 2047)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 = (min((max((min(0, 39)), ((max(var_8, 2200485719))))), (max((max(14340636935918791501, 18446744073709551615)), ((max(0, 128)))))));
                                var_23 = (min(((max(((min(var_17, var_8))), (min(2047, (arr_3 [i_0])))))), (max((max(18446744073709551610, (arr_1 [i_3]))), ((min(65535, var_8)))))));
                            }
                        }
                    }
                    var_24 = min((max(((max((arr_2 [5] [i_1] [i_1]), 83))), (max(4106107137790760114, -2815)))), (max((max(58315, 0)), ((max(var_15, (arr_7 [i_0] [i_0] [9] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_25 = (min((min((max((arr_2 [i_0] [i_2] [i_6]), 1284048643)), (max(4100287448, var_5)))), (min((max((arr_8 [i_0] [i_1]), var_12)), ((max((arr_4 [i_0] [i_1] [i_1] [i_5]), (arr_13 [i_1] [i_1] [i_1] [i_1] [2]))))))));
                                var_26 = (max((max((max(0, -1915597307)), ((min(1, (arr_2 [i_6] [i_6] [i_6])))))), ((max(((max(var_16, (arr_1 [i_0])))), (max(var_11, var_13)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                            {
                                var_27 = (min(var_27, ((max((min((max(var_13, var_5)), ((max(var_11, (arr_18 [i_0] [i_1] [i_7] [i_0])))))), ((max((max(var_14, (arr_16 [8] [i_1] [i_0]))), ((min(var_17, var_3)))))))))));
                                var_28 = (max(var_28, ((min(((min((min(66, 56337)), (min(173, 7221))))), (min((max((arr_20 [i_0] [i_8] [i_7] [i_8] [i_8]), (arr_3 [9]))), ((max((arr_12 [i_0] [7] [i_0]), 58329))))))))));
                            }
                            for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                            {
                                var_29 = (min((max((max((arr_17 [2] [9] [i_7] [i_0]), (arr_9 [i_10] [i_8] [i_7] [i_7] [i_1] [i_0] [1]))), ((min(161, (arr_20 [i_0] [0] [i_0] [i_7] [i_7])))))), ((max(173, 1)))));
                                var_30 ^= (min((max((max(14478181174000291967, 0)), (max(var_6, -18922)))), (max((max(-107, 18446744073709551615)), ((max((arr_13 [3] [i_1] [i_7] [i_8] [i_10]), 137)))))));
                                var_31 = (max(((max(((min(82, var_8))), (max((arr_11 [i_0] [i_1] [11]), var_14))))), (min((min((arr_11 [i_1] [i_7] [i_7]), 18446744073709551615)), ((min((arr_18 [i_0] [i_1] [i_0] [8]), 173)))))));
                                var_32 = (max(((max((max(0, (arr_13 [i_10] [7] [i_0] [i_0] [i_0]))), ((max(var_1, (arr_0 [1]))))))), (max((min(var_9, (arr_17 [i_0] [i_0] [i_7] [i_8]))), (min(14478181174000291967, (arr_16 [i_0] [i_0] [i_0])))))));
                            }
                            for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                            {
                                var_33 = (max((max((max(1069547520, var_15)), (min(1787301289, (arr_5 [i_0] [i_1] [i_8]))))), (min(((min((arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_2 [i_1] [i_8] [1])))), (min((arr_8 [5] [i_0]), (arr_3 [i_7])))))));
                                var_34 = (max(((max(((max(119, (arr_6 [10] [i_8] [2] [i_1])))), (min((arr_22 [7] [1] [i_7] [i_8] [i_11]), (arr_6 [i_0] [i_1] [i_8] [6])))))), (max(((max((arr_11 [i_0] [i_1] [i_1]), var_8))), (max(var_16, 2312069445))))));
                                arr_28 [i_11] [i_7] [i_7] [7] [i_0] = (max(((min(173, (max(65535, 1787301289))))), (min(((max(var_4, (arr_4 [i_0] [i_0] [i_0] [i_0])))), (min(var_14, 0))))));
                            }
                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 13;i_12 += 1)
                            {
                                var_35 = 2009893876;
                                arr_31 [8] [i_12] [i_8] [i_8] [i_1] [i_0] &= 83;
                                var_36 = -1069547521;
                            }
                            var_37 = (max(((min(56, 935769106))), (min((min(var_16, var_9)), ((max(83, (arr_1 [i_0]))))))));
                            arr_32 [i_7] [i_0] [i_0] = (min((min((max(1069547521, var_14)), ((max(30720, 30720))))), (max(((max(56343, (arr_20 [i_0] [i_1] [i_7] [i_8] [i_7])))), (max(var_15, -1787301289))))));
                        }
                    }
                }
            }
        }
    }
    var_38 = (max(((max((max(-78, 1787301289)), ((max(var_8, var_11)))))), (max((min(var_5, var_6)), ((max(255, 172)))))));
    #pragma endscop
}
