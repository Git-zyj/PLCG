/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = ((55662 ? -21362 : (arr_10 [i_1] [i_4] [i_4] [i_4 - 2] [i_4 - 1])));
                                arr_15 [i_0] [i_0] [i_1] = (((max(-21364, ((7756867503995433442 ? var_0 : var_1)))) != (arr_1 [i_2] [i_4])));
                                var_21 = ((min(52943, ((var_12 ? 176 : 52943)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] = (arr_17 [i_2 - 1] [i_1] [i_2 + 1] [i_5] [i_5 - 1] [i_2 - 1]);
                                var_22 = (52940 + 0);
                                var_23 -= ((((13408 || ((max((arr_7 [i_0] [i_1] [i_5 + 1] [i_6]), var_15))))) ? (arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 1]) : var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_24 -= ((min(21362, (arr_14 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                                var_25 = (max(var_25, ((max((((((arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]) + 9223372036854775807)) << (var_0 - 45940))), (25558 >= 0))))));
                                var_26 -= (max((max(1, (arr_13 [i_7] [i_2 + 1] [i_7] [i_8]))), (((((!(arr_16 [i_2 + 1] [i_8])))) != 2146435072))));
                                var_27 ^= (((((((min((arr_7 [i_0] [i_1] [i_2] [i_8]), (arr_5 [i_0] [i_8])))) ? (arr_9 [i_0] [i_2 + 1] [i_2] [i_7] [i_8] [i_0]) : 2303141740))) | var_3));
                                var_28 = arr_9 [i_0] [i_1] [i_2 + 1] [i_7] [i_8] [i_1];
                            }
                        }
                    }
                    var_29 = var_5;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_30 [i_9] [i_9] [i_10] = (arr_25 [i_9] [i_10]);
                arr_31 [i_9] [i_10] = ((~((~((max(1, (arr_26 [i_9]))))))));
                var_30 = (((~(arr_27 [i_9]))));
                arr_32 [i_10] = (!503316480);
            }
        }
    }
    var_31 = var_11;
    var_32 = -25559;
    var_33 = (min(var_33, (((((max(var_1, -var_5))) >= var_9)))));
    #pragma endscop
}
