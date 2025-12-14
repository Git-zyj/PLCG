/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, var_10));
                                var_13 = -var_5;
                                var_14 = 18446744073709551615;
                                arr_14 [3] [i_0] [i_1 - 1] [1] [1] [i_4] [1] = ((((((arr_5 [i_1 + 1]) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 + 1])))) ? ((-(arr_5 [i_1 + 1]))) : (((((arr_5 [i_1 + 1]) && var_3))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((((((!(arr_17 [4] [4] [i_6 + 2]))))) > (arr_17 [i_0] [i_5] [i_6 - 3]))))));
                            var_16 = ((+((65534 ? (arr_17 [i_0] [i_1] [i_6 - 3]) : 779611996281629471))));
                            arr_20 [i_6 - 4] [i_5] [2] [i_1 + 1] [i_0] = ((-(arr_7 [i_0] [i_1] [i_5] [i_6])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_17 = -6078395140022402732;
                            var_18 = (max(var_18, var_10));
                            var_19 = ((((84 > (arr_12 [i_7 - 1] [i_7 - 1] [i_1 - 1]))) ? ((((!(arr_5 [i_1 + 1]))))) : ((-85 + (arr_5 [i_1 + 1])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_20 = (min((arr_34 [i_13 - 2] [21] [1] [1]), (~var_4)));
                                arr_42 [i_9] [i_10] [i_10] [i_12] [9] = 21790;
                                arr_43 [i_10] [i_11] [i_13] = ((-(((12132530151901852248 > (arr_39 [i_13 - 4] [i_13 - 4] [i_13 - 3] [i_13 - 3] [i_13 - 3] [i_13 - 1] [i_13 + 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((((!(arr_30 [i_10] [i_10] [i_10])))) >= (((arr_46 [i_9] [i_10] [i_11] [i_14] [i_15]) ? (~var_7) : (arr_32 [i_15] [i_11]))))))));
                                arr_49 [i_9] [i_10] [i_10] [i_15] [i_15] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 9;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 4; i_19 < 12;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            {
                                arr_65 [i_19] [i_19 - 3] [i_17] [i_17] [i_19] = (((~var_0) ? (max(((var_5 ? var_1 : (arr_47 [i_16] [i_16] [i_18] [i_19] [i_20] [i_20]))), var_6)) : ((((!(arr_1 [i_20] [i_16]))) ? (!-5560561472474404210) : ((9404320466554430078 >> (-403838322 + 403838367)))))));
                                var_22 = (min((!var_0), ((~(arr_3 [i_19 - 4] [i_18 + 1] [i_17 - 2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 11;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 9;i_22 += 1)
                        {
                            {
                                var_23 = (min(var_23, (arr_69 [i_21 + 1])));
                                arr_72 [i_16] [i_17 - 2] [i_18] [i_18] [i_21] [i_21] [5] = (arr_8 [i_16] [i_16] [i_16]);
                                var_24 = (((!(arr_18 [i_16] [i_17]))) ? (max((arr_38 [i_22 + 2] [i_21 + 1] [i_18 + 2] [i_17] [i_16]), -5560561472474404210)) : ((((((arr_38 [i_16] [i_16] [i_18 + 2] [i_21 - 1] [i_22]) + 2147483647)) << (((((arr_38 [2] [i_17 - 1] [i_18 + 4] [i_21 + 1] [i_22 + 3]) + 886556330)) - 6))))));
                                var_25 = ((var_6 ? (((arr_33 [i_16] [i_18 + 4] [i_21 + 1] [i_22]) ? (arr_33 [i_16] [i_16] [i_18] [i_22]) : (arr_27 [i_16]))) : ((((arr_33 [i_22 - 2] [i_21 + 1] [i_18 + 1] [i_17 - 3]) ? var_4 : var_7)))));
                                var_26 = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
