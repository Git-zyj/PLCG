/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 ^= ((!(((36028797018963967 ? 65535 : 46447)))));
                                var_18 = (32 / 96);
                                arr_14 [4] = ((((arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_4]) ? (arr_8 [i_2 - 1] [2] [i_2 + 1] [i_2 - 1]) : (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [1]))));
                                arr_15 [9] [i_1] [16] [12] [i_4] = (((~(var_10 - var_2))));
                            }
                        }
                    }
                    var_19 = (max(((1 ? 31801 : 23)), ((128 ? (arr_7 [i_2 + 1]) : -19))));
                    var_20 = (max(var_20, ((((((~((19 ? -44 : 96))))) ? ((((((arr_10 [i_0] [i_1] [i_1] [i_0]) ? var_14 : var_16))) ? 33736 : (-62 & var_4))) : (((~(min(var_13, var_10))))))))));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_19 [i_0] [3] [i_0] [i_0] = var_4;

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_21 ^= (max((arr_12 [i_6] [i_6] [7] [18]), ((-73 ? 31801 : ((2147483647 ? 1 : 13))))));
                            var_22 = (min(var_22, ((((((~((var_7 ? -1028723866 : (arr_21 [i_0] [i_1] [i_2 + 1] [18] [i_6])))))) ? (((min(var_15, (arr_7 [4]))))) : (((arr_0 [i_2 - 1]) & 7103)))))));
                            arr_24 [i_1] [i_5] = ((((min(var_2, (arr_23 [i_2 - 1] [1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))) ? (arr_23 [i_2 - 1] [1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) : (var_11 && 7)));
                            arr_25 [i_1] [i_2] [1] [i_5] [i_6] [i_2] = ((((((var_8 ? var_2 : (arr_5 [i_1] [i_1] [1] [i_6]))) < ((min(var_14, var_3))))) ? (~var_14) : (!var_8)));
                            var_23 = (min(var_23, (((((-((min(var_15, 27))))) / ((var_8 << (var_12 - 919553661099947029))))))));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_24 = ((((max(-2147483644, 7113))) ? (max(var_16, (arr_9 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]))) : (!1)));
                            arr_29 [i_0] = (((!-1531596656) ? ((max(((40 ? 7119 : var_1)), (max((arr_21 [i_0] [i_1] [i_1] [9] [1]), 29650))))) : ((var_0 + ((var_1 ? var_8 : -1423436588662871606))))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_25 = ((1 ? 19 : 1));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            arr_35 [11] [i_1] [i_2 + 1] = (((arr_4 [17] [i_2 + 1] [4] [i_8]) + var_13));
                            var_26 = (min(var_26, (arr_4 [18] [i_1] [i_8] [3])));
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            arr_40 [17] [i_1] [i_1] [i_1] [i_1] = (max((((((1 ? 58414 : 693))) || (((var_16 ? var_1 : (arr_38 [i_0] [i_0] [i_0] [i_0] [1])))))), ((((min(1, (arr_23 [i_0] [i_1] [i_2] [i_2] [i_10])))) && (((var_13 ? (arr_18 [i_0] [11] [i_8] [11]) : (arr_27 [18] [i_8] [1] [i_2] [21] [i_0] [18]))))))));
                            var_27 ^= ((((var_1 ? 58419 : ((max(var_9, var_5))))) > 2434));
                            arr_41 [i_10] [i_10] [i_0] [i_8] [i_2] [19] [i_0] = -var_3;
                        }

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_28 -= var_8;
                            var_29 ^= (-854958163 * 0);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            {
                arr_49 [i_12] = -1;
                arr_50 [i_12] = 1;
                var_30 = ((((min((((arr_38 [i_12] [i_12] [i_12] [i_12] [i_12]) ? 1 : 1)), var_15))) ? var_14 : (-2455371886320771759 / -41)));
                arr_51 [6] [6] = (arr_47 [i_12] [i_12] [i_12]);
                arr_52 [i_13] [13] = 61;
            }
        }
    }
    var_31 = (max(((var_0 ? ((var_4 ? 7117 : var_0)) : ((max(var_13, var_1))))), var_15));
    #pragma endscop
}
