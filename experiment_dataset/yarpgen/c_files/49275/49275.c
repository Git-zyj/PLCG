/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((-(var_3 < var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_1] = (max((max(var_6, (((arr_2 [i_0] [i_0]) & 34923)))), (!var_10)));
                    var_21 += ((-((((((((arr_0 [i_1] [i_2]) && (arr_0 [i_1] [i_1]))))) > (1048575 + var_0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_22 &= var_3;
                                arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_0] = ((!((((17691572019663731233 && (arr_12 [i_4] [i_0] [i_2] [i_1] [i_0] [19])))))));
                                arr_15 [i_2] [i_3] [15] [i_3] [i_3] [i_0] [2] = ((var_18 > (((((max(var_10, 1122879417))) ? (arr_5 [i_0]) : (((arr_1 [i_3] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))))));
                                var_23 = (max(var_18, (((((var_14 ? (arr_9 [16] [i_1] [i_1] [16]) : (arr_5 [i_0])))) ? ((((!(arr_9 [i_0] [1] [i_2] [3]))))) : (arr_9 [i_0 + 1] [3] [i_2] [i_4])))));
                                arr_16 [i_4] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = ((+((((arr_9 [22] [i_2] [i_3] [i_3]) && (((var_4 ? (arr_11 [i_0]) : (arr_9 [i_0 + 1] [i_0 + 1] [i_3] [i_4])))))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_24 = (((((-(var_4 == var_4)))) ? var_11 : ((max(((-8806 || (arr_10 [i_0]))), ((32767 == (arr_13 [i_1] [i_0]))))))));
                    arr_19 [i_0] [i_1] [i_5] = arr_6 [i_5];
                    var_25 = ((((max((arr_17 [i_5] [i_5] [i_5]), var_3))) ? (arr_17 [i_0] [i_1] [i_5]) : (874261858 == -10)));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_22 [i_0] = (((arr_12 [i_0] [i_0] [i_6] [i_0] [i_6] [i_1]) != (arr_4 [i_1])));
                    var_26 = ((-var_11 >= ((511 ? var_19 : (arr_12 [14] [i_0] [i_1] [i_0] [i_0] [i_6])))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_27 = (max(var_27, (((-var_15 ? (((var_3 > (arr_6 [i_0])))) : ((((arr_6 [i_1]) == var_0))))))));
                                var_28 = (34904 + 48);
                                var_29 = ((var_1 ? (arr_17 [i_0 - 1] [i_1] [i_7]) : (arr_20 [i_0] [i_0] [i_0 - 2])));
                                var_30 = (((arr_5 [i_0]) ? (arr_7 [i_0 + 1] [i_1] [i_7] [i_8]) : (arr_7 [i_1] [i_7] [i_1] [i_7])));
                            }
                        }
                    }
                    arr_32 [i_1] [i_1] [i_1] |= (((arr_6 [i_0 - 2]) >> ((((var_0 ? var_2 : (arr_30 [i_0] [i_0 - 1] [i_1] [i_1] [i_7] [i_7] [i_7]))) - 26460))));
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            {
                                arr_41 [i_1] [i_0] [i_10] [i_0] [i_0 - 2] = ((-((max(var_16, 0)))));
                                arr_42 [i_0] [i_11] [i_10] [i_10] = ((2017612633061982208 ? ((((((arr_24 [i_0]) ^ 144115188073758720))) ? 4619704760523583195 : -13977)) : (max(-72057594037927935, (((11834481584394651434 ? 1 : 0)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 -= var_0;
    #pragma endscop
}
