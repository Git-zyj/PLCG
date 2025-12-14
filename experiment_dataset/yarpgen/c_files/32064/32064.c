/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= 188;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] |= ((31093 ? 18446744073709551614 : 4185));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_2] [i_2] [10] = (156 == 136);
                        arr_13 [i_2] = (--45669);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_16 = ((-31094 ? 1 : 11728));
                        var_17 = (((((var_14 ? var_12 : var_5))) ? var_11 : (188 >= -7243)));

                        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_18 ^= 54;
                            var_19 += (arr_6 [6] [2] [i_1]);
                            arr_19 [i_5] [i_1] [i_1] [i_0] |= 39;
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_20 = (!var_7);
                            arr_22 [i_2] [i_1 + 2] [i_2] [i_4 + 1] [i_2] [i_1 - 2] = (arr_0 [1] [1]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_25 [i_2] [i_2] = var_0;

                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            var_21 ^= 9251;
                            var_22 = (min(var_22, (arr_17 [i_1] [i_1] [i_8 + 1])));
                            arr_29 [i_0] [i_0] [0] [i_7] [i_8] &= (min(((!(arr_6 [i_0] [i_0] [i_8]))), (!81)));
                        }
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            var_23 *= (min((max(174, (arr_0 [i_9 + 1] [i_7]))), ((31957 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_1 - 1] [i_2])))));
                            arr_32 [i_2] = var_8;
                            var_24 = -var_12;
                            var_25 = 54;
                        }

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_26 &= (arr_27 [i_0] [i_0] [i_10] [i_0]);
                            arr_35 [0] [i_2] = ((((-165 ? 201 : ((7262042125627089318 ? 32767 : var_12)))) <= ((min(91, 97)))));
                        }
                        for (int i_11 = 3; i_11 < 19;i_11 += 1)
                        {
                            var_27 = var_2;
                            arr_38 [i_0] [i_1] [i_2] [i_2] [i_11] = arr_28 [i_11 - 1] [i_0];
                            var_28 = ((~(arr_26 [i_0] [i_1] [i_2] [i_7] [i_11 - 2] [i_0])));
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_29 = ((((((arr_7 [i_0] [i_1 + 3] [i_2]) ? (arr_17 [i_2] [i_2] [i_2]) : 32759))) ? (max(((9252 ? 32767 : (arr_11 [i_0] [i_2] [i_0] [i_2] [i_0]))), (arr_24 [i_1] [i_1] [i_1 - 1] [i_1] [i_1]))) : ((max((arr_34 [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 + 3] [i_1] [i_1 - 1] [i_7]), (arr_34 [i_1 + 2] [12] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [13]))))));
                            var_30 = (~241);
                        }
                    }
                    var_31 = min((arr_10 [i_1] [i_1] [i_2] [i_1 + 2] [i_1 - 2]), (arr_5 [i_0]));
                    var_32 = ((-(arr_10 [i_1 - 2] [13] [i_2] [i_1 - 1] [i_1 + 3])));
                }
            }
        }
    }
    #pragma endscop
}
