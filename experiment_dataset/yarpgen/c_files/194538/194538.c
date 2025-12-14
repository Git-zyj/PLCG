/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_5, (var_4 == var_8)));
    var_16 = (-2147483647 - 1);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_8 [i_0] = (18446744073709551603 >> (((arr_7 [i_0 + 1] [i_0] [i_1]) - 3151417419)));
            var_17 = (max(var_17, var_7));
        }
        arr_9 [i_0] [10] = ((~((+((((arr_6 [i_0]) != var_9)))))));
        var_18 = (-2147483647 - 1);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = (arr_12 [i_2]);
        var_19 = (((min(var_7, (!var_14))) & (arr_13 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_23 [13] [6] [13] [13] [i_6] |= ((((min((arr_13 [i_2]), ((((arr_17 [i_2] [i_2] [i_2] [7]) > -77)))))) ? ((69 ? 18014394214514688 : (255 > 221))) : (arr_10 [12])));
                                var_20 &= (((((!(arr_13 [i_4]))))) != (((203 <= var_5) ? (max((arr_16 [i_2]), -67)) : (((max(27050, (arr_15 [i_2] [i_3] [7]))))))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_29 [i_2] [i_2] [i_3] [i_4] [i_7] [i_8] [i_8] = (arr_16 [i_4 - 1]);
                            arr_30 [i_2] [i_3] [i_4 - 1] [i_7] [i_8] [11] = ((!((((arr_12 [i_2]) ? (arr_24 [i_2] [11] [i_4] [i_7] [10] [i_3 - 1]) : (arr_25 [i_2] [1] [i_2] [i_7] [i_8]))))));
                        }
                        var_21 = (((((var_8 ? (arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : var_13))) ? (((((arr_16 [i_2]) != (arr_24 [7] [i_3 - 1] [i_2] [i_2] [i_4 - 1] [i_2]))))) : (var_10 ^ var_5)));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            arr_37 [i_2] &= ((arr_11 [i_9 + 1]) >= (arr_11 [i_9 + 1]));
                            var_22 &= 1;
                            arr_38 [i_10] [i_10] [1] [i_9] [i_10] [10] = (arr_35 [i_3] [i_4] [i_9 - 1] [i_10 - 2] [i_10] [i_10]);
                        }
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            arr_42 [i_2] [i_3] [i_2] [i_2] |= (arr_33 [i_2] [i_11] [i_4] [2] [i_9 + 2] [6] [4]);
                            var_23 |= ((var_6 ? (arr_28 [1] [i_3] [i_3] [i_3 + 3] [1]) : (var_2 & var_11)));
                            arr_43 [i_2] [i_3] [i_2] [i_3] [i_3] [i_11] |= 7200594402999387148;
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_48 [4] [i_9] [i_9] [10] [i_3] [i_2] = var_3;
                            arr_49 [i_2] [1] [i_2] [i_9] [i_12] |= ((~1) ? 1 : (arr_26 [i_4] [i_4] [i_4 - 1]));
                        }
                        var_24 = ((var_14 ^ (arr_36 [i_3 + 2] [i_3] [i_3] [i_3])));
                        var_25 |= -1279640004;
                    }
                }
            }
        }
    }
    #pragma endscop
}
