/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = 3130654212875252378;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 *= 9;
                            var_21 *= ((max(((((arr_7 [i_0] [i_1]) ? -3130654212875252360 : (arr_4 [i_1])))), (max((arr_9 [i_0]), (arr_8 [i_0] [i_0] [8] [i_0] [i_0] [i_0]))))) >= (arr_7 [i_0] [i_0]));
                            arr_10 [i_0] [i_2] [i_1] [i_1] [i_0] = (arr_8 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]);
                        }
                    }
                }
                arr_11 [i_1] [i_0] = (max(((((max(4503599627370480, 8176)) >= (arr_6 [i_0] [i_0] [i_0] [i_0])))), (arr_9 [12])));
                var_22 = (min((~63371), (max((arr_7 [i_0] [i_1]), (arr_9 [i_0])))));
            }
        }
    }
    var_23 -= 9205357638345293824;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_24 [i_6] [i_7] [14] [i_5] [i_6] = ((!((((((57359 ? -28462 : (arr_13 [i_4] [i_5])))) ? ((((arr_13 [i_4] [7]) & 0))) : ((~(arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
                                arr_25 [i_6] = ((!((max((3130654212875252364 >> 1), (arr_20 [i_8] [i_6] [i_6] [i_4]))))));
                                var_24 = arr_16 [i_6];
                                var_25 += 18;
                            }
                        }
                    }
                    var_26 |= ((((((arr_12 [i_4] [i_5]) >= (arr_15 [i_4] [i_5] [i_4])))) > (((!(arr_18 [i_4] [i_5] [i_6] [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_27 = (45851 * ((((arr_26 [i_9 + 2] [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9] [i_6]) ? (1 <= 8176) : (((arr_17 [18] [i_4] [i_6]) ? (arr_22 [4] [15] [i_6] [i_9] [19]) : (arr_13 [i_4] [i_5])))))));
                                var_28 |= min((arr_28 [i_10] [i_10] [i_10] [i_10] [i_10]), ((~(arr_21 [i_9 + 3] [i_9] [i_9 + 2] [i_9 + 3] [i_9 + 3] [i_9]))));
                                var_29 = ((~(((!(arr_18 [i_9 + 2] [i_6] [i_6] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = var_12;
    /* LoopNest 2 */
    for (int i_11 = 4; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            {
                var_31 = (((((((arr_33 [i_11] [i_11]) ? 46315 : (arr_28 [i_12] [i_11 - 4] [i_11] [i_11] [0])))) ? (min((arr_16 [i_11]), (arr_27 [23] [i_12] [i_12] [i_12 + 3] [i_12 + 3]))) : (((((arr_33 [i_11] [i_12]) && (arr_22 [i_11] [7] [i_11] [6] [i_12]))))))));
                /* LoopNest 3 */
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_32 = -63086;
                                arr_44 [i_11] [i_12 + 3] [i_13] [i_14] [i_15] = (max(-73, -37));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
