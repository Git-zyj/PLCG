/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = ((~(26095564238183032 ^ 40)));
                    var_19 = (((73 && (var_16 | -1813065677461651684))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max((arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((!(arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 2]))))));
                                var_21 = (max((arr_12 [i_1] [i_1 - 1]), (((!(arr_9 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_22 = (~(((!(arr_15 [i_5 - 1] [i_5 + 1])))));
                            arr_28 [i_5] [i_6] [i_7 + 1] [i_6] = var_12;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_23 = (~-26095564238183039);
                            arr_35 [i_5] [i_6] = (max((!18446744073709551608), (max((arr_30 [i_5 + 1] [i_5 - 1] [i_6]), (arr_31 [i_10] [i_10] [i_5 + 1] [i_5] [7])))));
                            var_24 = (arr_25 [i_5 - 1] [i_6]);
                            arr_36 [i_6] [i_5 + 1] [i_9] [6] [i_5] [i_5 + 1] = ((((((var_14 - (arr_18 [i_5]))))) <= ((((12186938740804145044 ? (arr_29 [7] [i_6] [0] [1]) : (arr_19 [i_10] [i_6])))))));
                            var_25 = ((-((~(var_1 || 1)))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (max((~var_8), var_0));
    /* LoopNest 2 */
    for (int i_11 = 4; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            {
                var_27 = (i_12 % 2 == 0) ? ((((((~-1276172445) + (arr_41 [i_12] [i_12]))) * ((max((arr_37 [i_11 + 2]), (arr_37 [i_11 - 4]))))))) : ((((((~-1276172445) - (arr_41 [i_12] [i_12]))) * ((max((arr_37 [i_11 + 2]), (arr_37 [i_11 - 4])))))));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_47 [i_12] = (((((var_11 ? ((min((arr_42 [i_12]), (arr_44 [i_11] [i_12 + 1] [i_13] [i_12])))) : (max(var_10, 2321034619))))) ? (arr_41 [i_12] [16]) : (arr_44 [i_11] [i_13] [i_13 + 2] [i_12])));
                            var_28 = (max(var_28, (((!((((((-(arr_44 [i_13] [i_13 + 2] [i_12] [i_13])))) ? (max((arr_43 [i_14] [i_13] [i_13] [2]), (arr_46 [i_11]))) : (var_3 ^ 16777215)))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 17;i_16 += 1)
                    {
                        {
                            arr_54 [i_16] [i_12] [i_12] [i_11] = ((~(arr_49 [i_12] [i_16 - 1] [i_12 - 1])));
                            var_29 &= var_7;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
