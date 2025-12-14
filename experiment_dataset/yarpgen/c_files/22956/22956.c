/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (-47 + 1);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 -= 4294967276;
                                var_18 = (((0 + 0) ^ (arr_7 [i_3 + 1] [i_3] [7] [i_2 + 3])));
                            }
                        }
                    }
                    var_19 ^= ((-(arr_3 [i_2 - 1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_1] [i_2 + 2] [i_2] [i_2] [i_1] [i_0] = (((13712080189565369785 ^ 3667126124) >= ((min(48716, 38)))));
                                var_20 = (arr_18 [12] [i_1] [i_1] [i_1]);
                                var_21 = (((((-(arr_13 [6] [i_1] [i_1] [i_5 + 1] [i_2 + 1])))) <= ((~(0 + 7769781157432464599)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_11;
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 6;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_23 += (arr_18 [i_8] [0] [0] [i_7]);
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {

                            for (int i_11 = 2; i_11 < 9;i_11 += 1)
                            {
                                var_24 = 3358199434245197071;
                                var_25 = (((max(((1 % (arr_29 [0] [0] [1] [1]))), (min(1128740829637221057, -1)))) <= (((((arr_23 [i_7]) && -4))))));
                                arr_32 [i_11 - 1] [0] [i_7 + 2] [i_8] [i_8] [i_7 + 2] = (max((arr_8 [i_10]), ((38 ? (arr_8 [i_11]) : 25))));
                            }
                            for (int i_12 = 2; i_12 < 8;i_12 += 1)
                            {
                                arr_35 [i_7] [i_7] [i_8] [i_7] [i_8] [i_9] [i_12] = ((((min((arr_0 [i_7 + 2]), (arr_0 [i_7 + 4])))) ^ ((~(arr_0 [i_7 + 1])))));
                                arr_36 [i_7] [i_7] [i_7 - 3] [i_7] [i_7] = (min((min(170, 4)), (min(((~(-32767 - 1))), ((min((arr_0 [13]), 0)))))));
                            }
                            for (int i_13 = 0; i_13 < 10;i_13 += 1)
                            {
                                arr_40 [i_7] [i_10] [1] = ((((arr_26 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1]) || (((-107 ? 1 : (-9223372036854775807 - 1)))))));
                                arr_41 [i_7] [i_7] [i_8] [i_9] [i_10] [i_10] [8] |= 16577594551568482933;
                            }
                            var_26 = ((max((((-9223372036854775807 - 1) + 20057)), (((-32767 - 1) | -8677578301039502402)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_46 [i_15] [i_8] [i_8] [i_15] = (min((min((!175316882), (25 & 8677578301039502385))), 1));
                            var_27 = (min(var_27, ((((((min(3981715431, 0)) >> (-24 + 31)))) ? 0 : (((~(min(23007, (arr_13 [i_7] [i_7] [10] [i_7] [i_7]))))))))));
                            var_28 = (max(var_28, (((~(1 % -5894))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
