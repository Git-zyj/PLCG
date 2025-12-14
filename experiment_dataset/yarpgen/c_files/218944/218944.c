/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_3] [i_3] [i_3] [20] [i_3] [i_3] = (((((var_8 ? -1509520590 : var_15))) ? (((((-(arr_3 [i_1] [i_1])))) ? ((-1307752473997795095 ? -390584731 : var_1)) : ((max(var_3, (arr_12 [i_1] [i_1] [21] [i_3] [1])))))) : 13640802435515767889));
                                arr_16 [12] [i_1] [i_2] [i_3] [i_4] = 429386438;
                            }
                        }
                    }
                }
                arr_17 [i_1] [i_1] = ((~(arr_4 [i_0] [i_0] [i_0])));
                arr_18 [i_0] [i_1] = var_3;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_26 [i_1] [i_1] = ((((min(4805941638193783727, 152) + var_16))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [1] [i_1] = 18446744073709551614;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_34 [i_1] [i_7] [i_7] = var_2;
                            var_17 = var_11;
                            arr_35 [i_1] = (arr_2 [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                {
                    arr_42 [8] [1] [i_11] [i_11] = (arr_8 [i_10 - 2] [i_11] [i_11 - 1] [i_11]);
                    arr_43 [i_9] [i_9] [i_11] [i_11] = (!(((+(((arr_13 [i_10] [i_10] [i_10] [i_11] [i_9]) ? (arr_24 [i_9] [i_9] [22] [4] [i_11]) : (arr_14 [i_9] [i_9] [i_9] [i_9] [5])))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_48 [i_10] [5] [i_10] [0] [i_10] = (~var_0);
                                var_18 = (~((~(arr_6 [i_10] [i_11 - 1] [i_13]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_19 = var_6;
                                arr_53 [4] [i_14] [i_15] = (~0);
                                var_20 = ((((((((var_11 ? var_5 : 1))) ? ((var_7 ? -9075801832634848489 : var_8)) : 50752))) || 18446744073709551615));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_14;
    #pragma endscop
}
