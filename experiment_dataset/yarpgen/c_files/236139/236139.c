/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0 + 2] [i_0 + 2] = ((((((65512 >= (arr_1 [i_0 + 2]))) ? (((min((arr_8 [i_1] [i_1]), (arr_7 [i_0] [i_1 + 1] [i_3] [8]))))) : (arr_9 [i_0] [i_0] [i_0] [i_0]))) | (((~(var_3 | var_9))))));
                                var_13 += 32;
                                arr_13 [i_1] [i_1] [1] [1] [i_4] = arr_4 [i_4];
                                arr_14 [i_1] = ((9936 | (min((arr_3 [i_0 + 1] [i_0 + 1] [i_3]), (max((arr_11 [i_0 - 1] [3] [i_2] [i_3] [i_4] [i_1] [5]), (arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }
                    var_14 = (max(var_14, ((max(32885, (10784 - 49))))));
                    var_15 ^= (max(((-(((arr_9 [i_0] [i_1 - 3] [i_2] [i_1]) / (arr_1 [i_2]))))), ((max((arr_4 [i_2]), (((arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_0 - 1]) - (arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_16 = -var_4;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_17 = (arr_20 [i_6] [i_6]);
                                arr_30 [i_9] [i_8] [i_5] [i_6] [i_5] = ((((min((var_4 + var_6), (min((arr_26 [i_5] [i_5] [i_5] [6]), (arr_7 [i_6] [i_7] [i_8] [1])))))) ? (253 | -6179758400624801863) : (((((max(9930, (arr_20 [i_6] [4]))) <= (arr_23 [i_9] [i_8])))))));
                                var_18 = (max(var_18, (((((max((!32954), (arr_9 [i_6] [i_6] [i_6] [i_6])))) || (arr_1 [i_6]))))));
                                var_19 = (max((arr_20 [i_5] [i_6]), ((((1 / 18446744073709551611) ? 9918 : (arr_24 [i_8] [i_8] [i_8]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_20 += ((((max(((((arr_1 [i_6]) << (((arr_25 [i_5] [i_6] [i_5] [i_10 + 2]) - 14937))))), (arr_9 [10] [i_10 + 1] [i_10 + 1] [i_10 - 1])))) ? (((arr_26 [i_5] [i_10 - 1] [i_7] [i_10]) ^ 98)) : (arr_18 [12])));
                                var_21 = (min((((arr_35 [i_11] [i_10] [i_7] [i_6] [i_5] [i_5]) ? var_4 : (min((arr_18 [i_7]), (arr_19 [i_5] [8]))))), ((min((min((arr_6 [i_10] [i_10]), -1608268086)), (((arr_27 [i_5]) << (((arr_3 [i_5] [i_6] [i_6]) - 8069095112921332385)))))))));
                                var_22 = ((((((arr_35 [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10 + 1]) ? (arr_33 [i_10] [i_10 + 2] [i_10 + 1] [i_10 + 2] [i_10 - 1] [i_10]) : (arr_33 [i_10] [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 2] [i_10])))) ? (((((arr_33 [i_10] [i_10 + 2] [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_10]) >= 6)))) : (max((arr_33 [i_10] [i_10 + 2] [i_10 - 1] [i_10 + 1] [i_10 + 2] [i_10]), (arr_35 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 1] [i_10 + 1])))));
                                var_23 = (min((min(-1488769612156541909, (((!(arr_23 [i_5] [8])))))), 32635));
                            }
                        }
                    }
                }
                var_24 |= (min((arr_18 [i_5]), ((min((-14 || -1809920709), ((var_3 ? var_1 : 189)))))));
            }
        }
    }
    #pragma endscop
}
