/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [5] [i_2] [i_0] = ((+(max(var_8, ((var_5 ? (arr_7 [15] [16] [13]) : var_0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 -= var_8;
                                var_21 = (max(var_21, (((((~(((arr_4 [i_4]) ? 232 : (arr_3 [i_3]))))) * (((!((var_9 && (arr_0 [i_0])))))))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] [i_0] &= ((!(arr_12 [6] [i_0 - 2] [i_0 + 1] [i_0] [i_2] [i_0 - 2] [i_1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                arr_22 [i_6] = ((!(!var_19)));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_32 [i_5] [15] [1] [i_6] [i_7] [i_8] [i_6] = (((((-(arr_12 [18] [i_6] [i_9 + 1] [i_8] [i_6] [i_9] [i_7])))) || (!-22)));
                                var_22 *= (((((((arr_28 [8] [i_5] [i_9 - 1] [17] [i_9 + 1]) && (arr_28 [i_6] [i_8] [i_9 + 2] [8] [i_9 + 3]))))) <= (~var_18)));
                                arr_33 [i_5] [i_6] [i_7] [i_8] [0] [i_9] = ((!(((((((arr_16 [i_7] [i_9 + 2]) << (var_5 - 2275088169)))) ? var_12 : (var_9 || var_6))))));
                            }
                        }
                    }
                    var_23 = (max(var_23, ((((((var_3 + ((((arr_15 [i_7] [i_7]) >> (arr_24 [i_5] [i_6] [9] [1]))))))) ? ((min(var_13, (arr_0 [i_5])))) : var_3)))));

                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        arr_37 [i_6] [i_7] [11] [i_6] = (((arr_6 [i_5] [12] [i_7] [i_10]) | (arr_12 [17] [16] [i_7] [i_7] [i_6] [i_7] [3])));
                        var_24 = ((var_15 ? (arr_23 [i_5] [1] [i_7] [i_10 - 1]) : (((((!(arr_15 [i_7] [i_10])))) | ((((arr_0 [i_6]) != 174)))))));
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_25 = (min(var_25, (arr_30 [i_5] [i_7])));
                            var_26 = (min(var_26, (arr_17 [i_5])));
                            var_27 = (((arr_24 [6] [i_6] [i_6] [8]) <= ((((arr_15 [i_5] [i_6]) != var_17)))));
                        }
                        arr_45 [i_6] [i_6] [i_7] = (var_18 >= var_2);
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_28 = arr_46 [5] [15] [13] [i_6] [i_6] [i_5];
                                var_29 = (((((arr_26 [1] [i_6] [i_6] [10] [i_6]) ? var_5 : (arr_35 [i_14] [i_13] [9] [i_5])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 18;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 17;i_16 += 1)
                    {
                        {
                            arr_57 [18] [i_6] [1] = (var_0 ? (((((arr_56 [i_15]) && (arr_50 [4] [i_6] [i_6] [i_16 + 1] [i_16] [4]))))) : var_6);

                            /* vectorizable */
                            for (int i_17 = 2; i_17 < 16;i_17 += 1)
                            {
                                var_30 = ((143 ? 18218 : 143));
                                var_31 = (min(var_31, ((((arr_21 [i_16 - 1] [i_15 - 3] [i_6]) << (((arr_21 [8] [i_6] [0]) - 77)))))));
                            }
                            var_32 = (min(var_32, (((((min(((43654 ? var_18 : (arr_13 [i_15]))), (~var_16)))) ? (((((((max(var_4, -22)))) > var_9)))) : var_3)))));
                            var_33 = (min(var_33, (((!((!(((var_10 ? (arr_15 [14] [i_16]) : var_13))))))))));
                        }
                    }
                }
                arr_60 [i_5] [i_6] = ((13899609369892808955 ? var_14 : (arr_35 [i_5] [i_5] [i_6] [17])));
            }
        }
    }
    #pragma endscop
}
