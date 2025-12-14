/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((var_8 <= ((((((arr_1 [i_0]) * var_0)) + ((((!(arr_9 [i_0] [i_0] [i_2]))))))))));
                    var_14 = var_10;
                    var_15 = (((max(var_2, -var_1)) & (((var_0 <= ((((var_8 && (arr_7 [i_0] [i_1] [2] [i_2]))))))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_16 = (arr_5 [i_0] [i_2] [i_3]);
                        var_17 = (max(var_17, (arr_4 [i_1] [i_2] [i_3])));
                        var_18 = ((((~((1 ? 100930543 : -8)))) << (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_10 [i_3] [i_3] [i_3] [17] [i_3])))));
                        var_19 = var_6;
                        var_20 = (max((((var_11 > var_10) % ((min((arr_2 [i_0]), var_11))))), ((~(((arr_2 [i_0]) + var_1))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_21 = (max(var_21, ((((((var_2 % var_5) || (((var_7 | (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? var_4 : ((((((((arr_2 [i_0]) != (arr_13 [16] [10] [i_2] [i_2] [i_2])))) > (arr_2 [i_0]))))))))));
                        var_22 = ((~(max((((arr_7 [i_0] [i_1] [i_2] [i_4]) ^ var_4)), (arr_14 [i_2] [1] [i_2] [1] [i_2])))));
                    }
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        var_23 &= ((var_3 << (((((arr_14 [i_1] [i_2] [i_5] [i_5] [i_5 - 1]) + (arr_7 [i_2] [i_2] [i_2] [i_2]))) - 6082935634521476092))));
                        var_24 = (max(var_24, (arr_2 [i_0])));
                        var_25 = (min(var_25, var_0));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_26 = ((((((-(arr_6 [i_0] [i_1]))))) ^ (((arr_13 [i_5] [i_5] [i_5 + 3] [i_5] [i_5]) ? (arr_15 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_5]) : (arr_15 [i_5] [i_5 - 2] [i_5 + 2] [i_5] [i_5] [i_5])))));
                            var_27 = (i_2 % 2 == zero) ? (((var_7 >= (((arr_14 [i_2] [i_1] [i_2] [i_5] [i_6]) ? (((arr_7 [12] [17] [i_5 - 1] [i_6]) << (((arr_18 [i_0] [i_1] [i_1] [i_2] [i_2] [i_6]) - 1936261849224893623)))) : (arr_14 [i_2] [i_1] [i_1] [i_1] [i_1])))))) : (((var_7 >= (((arr_14 [i_2] [i_1] [i_2] [i_5] [i_6]) ? (((arr_7 [12] [17] [i_5 - 1] [i_6]) << (((((arr_18 [i_0] [i_1] [i_1] [i_2] [i_2] [i_6]) - 1936261849224893623)) - 1978415120762529058)))) : (arr_14 [i_2] [i_1] [i_1] [i_1] [i_1]))))));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_28 = var_5;
                            var_29 = (((~(var_3 || var_3))));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_30 = (arr_1 [i_8]);
                            var_31 = ((var_9 * ((((((arr_15 [i_1] [i_1] [i_1] [i_1] [0] [i_1]) >= (arr_1 [i_1]))))))));
                        }
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_32 = (24230 < 65520);
                            var_33 = (((arr_17 [i_1] [i_1]) + ((((!(arr_23 [i_0] [i_5 + 3] [i_2] [i_9 - 1] [i_9] [6])))))));
                            var_34 |= (((max((arr_15 [i_0] [i_5] [15] [i_5] [i_5 + 2] [3]), (arr_15 [1] [15] [i_0] [i_0] [i_5 + 3] [i_5 + 3]))) ? (arr_10 [i_0] [i_0] [7] [i_5] [i_5 + 3]) : var_10));
                        }
                        var_35 = (((var_11 | (arr_14 [i_2] [i_0] [i_1] [i_2] [i_5]))));
                    }

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {

                        for (int i_11 = 2; i_11 < 15;i_11 += 1)
                        {
                            var_36 = (arr_23 [i_0] [i_0] [i_1] [i_2] [i_10] [2]);
                            var_37 = (((arr_25 [i_11 + 3] [i_0] [i_10] [i_10] [1]) ^ ((((max(var_11, var_10))) ? (arr_10 [i_0] [i_0] [i_0] [i_10] [i_11]) : var_0))));
                        }
                        var_38 *= (min((arr_15 [17] [i_1] [i_1] [i_1] [i_1] [i_1]), var_1));
                        var_39 = ((((max((arr_1 [i_2]), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) < (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        var_40 = (((arr_4 [i_0] [i_1] [i_2]) - (arr_26 [i_0] [i_1] [i_2] [i_1] [i_1] [5])));
                        var_41 &= var_1;
                        var_42 += ((((((max((arr_2 [i_0]), var_2))) && ((((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_15 [i_0] [i_12] [i_2] [i_1] [i_1] [i_1])))))) || (((~(arr_3 [i_12 + 2]))))));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_43 = ((var_0 <= (((65534 * 0) ? (arr_12 [i_0] [i_0] [i_1] [i_2] [i_13] [15]) : (~var_9)))));
                        var_44 = (max(var_44, ((max(113, 126)))));
                        var_45 = ((var_10 & (arr_3 [i_1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
