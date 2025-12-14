/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 = (((~23314) < var_11));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = ((((min(var_8, (1 == var_6)))) ? ((11470103309500598812 % (~var_8))) : var_13));
                                var_22 = (min(var_22, (((+((+((-23315 ? (arr_5 [i_0 + 1] [i_0]) : var_7)))))))));
                                var_23 = (arr_9 [i_4] [i_3] [i_3] [i_2] [i_1 + 4] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_6] [i_6] [0] [0] = (min((((-((min(1, var_16)))))), (((((max(20274, 1)))) * 14204597154800993838))));
                                var_24 = ((var_16 ? var_17 : 23314));
                                var_25 = (!217);
                            }
                        }
                    }
                    var_26 = (!(var_12 || var_17));
                    arr_18 [i_0] [i_2] [i_0] [i_2] &= (~-32756);
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    var_27 = var_12;
                    var_28 = ((((32755 ? (((arr_9 [8] [i_1] [2] [i_0] [i_0] [i_0]) * var_6)) : (~var_5))) / var_6));
                    var_29 = (max(var_29, 23314));
                    var_30 = (+(((var_17 < var_15) ? (((((arr_11 [11] [i_0] [5] [i_1] [1] [i_7 - 1] [i_7 + 2]) == (arr_5 [i_0 + 1] [i_7 + 1]))))) : (((arr_4 [i_0 - 1] [i_1 + 2] [i_1 + 2]) ^ 4294967295)))));
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        {
                            arr_28 [i_0 - 2] [i_1] [i_0] = (max(4272, (arr_11 [8] [3] [5] [4] [i_8] [i_9] [i_9 + 1])));
                            var_31 ^= ((!(arr_16 [14])));
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_32 = ((((-32756 ? (arr_13 [i_0 - 2] [i_1 + 1] [13] [i_10] [i_10]) : (arr_13 [i_0 - 2] [i_1 - 2] [i_1 + 1] [i_10] [i_0]))) > var_16));
                    var_33 = (max(777553013, (0 > var_12)));
                    var_34 -= ((~(23 & 0)));
                }
                /* vectorizable */
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    var_35 = (!var_14);
                    var_36 = (max(var_36, (arr_25 [i_1] [i_1 + 3] [1] [i_1 + 4])));
                    var_37 &= 1;
                }
                for (int i_12 = 3; i_12 < 13;i_12 += 1)
                {
                    var_38 = ((var_18 < (((arr_31 [1]) - (((arr_1 [i_1] [12]) + 4294967295))))));
                    arr_37 [i_0] [i_1 - 1] [i_12] [14] = 14;
                }
            }
        }
    }
    #pragma endscop
}
