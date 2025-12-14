/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = ((-((-(((arr_1 [i_0] [i_0]) ? var_12 : (arr_0 [i_0] [i_1])))))));
                arr_6 [i_1] = (((max((arr_2 [i_0]), ((((arr_3 [i_0]) & (arr_4 [i_1 + 2] [i_0] [i_0])))))) >= 192));
            }
        }
    }
    var_15 = (min(var_15, var_3));
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_17 += (min(((((((((arr_8 [i_2]) == var_9)))) < ((0 ? 7 : 255))))), ((~(arr_15 [i_5] [i_4] [i_3] [i_2])))));
                            var_18 -= (min(var_10, (min(255, 241))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_19 |= (max(-1, var_0));
                            var_20 += 1;
                            var_21 = 112;
                            arr_23 [i_2] [i_2] = ((var_7 + ((((arr_13 [i_2] [i_3] [i_6]) == ((((arr_1 [i_3] [i_7]) || var_2))))))));
                        }
                    }
                }
                var_22 |= ((((max(12085864324533782849, 16383))) ? ((((!(arr_5 [i_3] [i_3]))))) : 255));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_35 [i_8 - 1] [i_10] [i_11] = ((-((-1662482594 ? var_7 : (~8)))));
                            arr_36 [i_8 - 1] [i_9] [i_11] = (min(1, var_10));
                            var_23 = (((((30720 & (arr_27 [i_8 - 2])))) && ((max((arr_1 [i_8 - 2] [i_8 - 2]), 18446744073709551347)))));
                            arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] |= var_12;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_24 -= (arr_41 [i_13] [i_9] [i_12] [i_8 - 1]);
                            arr_44 [i_13] [i_12] [i_8 + 1] = ((((max(2253210978303465844, 1) & ((((arr_38 [i_8 - 2] [i_9] [i_12] [i_13]) ? 0 : var_9)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 16;i_16 += 1)
                        {
                            {
                                arr_54 [i_9] [i_9] [i_9] &= (((((var_2 * (arr_47 [i_8])))) ? (arr_46 [i_8] [i_9] [i_9]) : (arr_30 [i_16 - 2] [i_16 - 1] [i_16 - 3])));
                                var_25 = ((8772771218554968255 ^ ((((!((((arr_53 [i_8 - 2]) & (arr_45 [i_16 + 1] [i_15] [i_14] [i_9]))))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 17;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 18;i_19 += 1)
                        {
                            {
                                var_26 ^= arr_53 [i_8];
                                arr_62 [i_18 - 1] [i_18 - 1] [i_9] [i_9] [i_8] = ((((min(18446744073709551347, var_0))) ? (max((max(1410166907, -1662482594)), (arr_46 [i_8] [i_9] [i_19]))) : ((min(1, ((1 < (arr_61 [i_8] [i_8] [i_8] [i_8] [i_8 - 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
