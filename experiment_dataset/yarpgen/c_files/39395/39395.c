/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((((max(1, var_11))) ? (arr_1 [0] [i_0 - 2]) : ((max(70, 86))))) & ((~(max((arr_2 [i_0 + 1]), -1)))))))));
                var_14 ^= (((arr_5 [i_0] [i_1]) ? (((((!(arr_5 [23] [i_0])))) * var_6)) : (((arr_5 [i_1] [i_0]) ? 221 : -14842))));
                var_15 = ((~(((arr_3 [i_0 + 1]) ? (arr_3 [i_0 - 2]) : (arr_3 [i_1])))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = (((((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) == (arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) != ((((1 < (arr_2 [i_0 + 1]))) ? (((!(arr_5 [i_0] [i_0])))) : (arr_2 [i_1]))));
                    var_17 |= (((((~(arr_5 [i_2] [i_1])))) ? (((arr_2 [i_2]) ^ var_5)) : ((~(arr_2 [i_0 - 1])))));
                    var_18 = (max((((((var_1 < (arr_4 [8] [23])))) ^ (arr_1 [i_2] [i_2]))), (arr_2 [i_0])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_19 |= (arr_2 [i_3]);

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_20 = ((arr_10 [i_4] [i_3] [14]) > ((((var_6 <= (arr_2 [i_3]))))));
                        var_21 = (((~var_4) >= (((arr_0 [i_4]) - 35))));
                        arr_12 [i_0] [i_0] = ((-14832 ? 162 : -14832));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_22 = (min(var_22, -var_0));
                        var_23 = (max(var_23, (((~(((arr_9 [i_0] [i_0] [11] [23]) * (arr_10 [i_3] [i_3] [9]))))))));
                        var_24 = ((arr_1 [i_0 - 2] [6]) != ((((arr_1 [1] [1]) > (arr_7 [i_1] [i_1] [i_1])))));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_25 = ((-16939 - (arr_16 [i_1])));
                        arr_18 [i_6] = ((var_0 ? (arr_11 [i_0 - 1] [i_6 - 1]) : (arr_2 [i_0 - 1])));
                        var_26 = (-((((arr_16 [i_0]) >= var_2))));

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_27 += var_7;
                            arr_22 [i_6] [i_1] [i_6] [i_6] [i_7] = ((arr_17 [i_3] [i_3] [i_6 - 1] [i_7]) ? (((arr_16 [i_0]) ? 1 : var_2)) : (((-(arr_19 [i_0] [i_1] [i_1] [i_3])))));
                            var_28 = (min(var_28, (arr_3 [i_0 - 1])));
                            var_29 ^= ((var_8 ? var_12 : (arr_11 [i_0 + 1] [i_0 - 1])));
                            arr_23 [i_7] [i_6] [17] [i_6] [13] = (arr_14 [i_0] [i_0] [i_0] [i_6] [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_30 += ((((((arr_11 [i_1] [i_1]) >= (arr_6 [i_0] [i_1] [i_3] [19])))) << (((arr_7 [i_0 + 1] [i_1] [i_0]) - 209))));
                            var_31 = (arr_25 [i_6 - 1] [i_0 + 1]);
                        }
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            var_32 = (arr_14 [i_3] [i_1] [i_3] [i_6 - 1] [13]);
                            var_33 = 7290203993367725222;
                            var_34 |= (((arr_0 [i_0 - 1]) >> (arr_0 [i_0 + 1])));
                            arr_30 [i_6] [i_6] = ((35 ? 0 : -2190663167649661641));
                        }
                        arr_31 [i_0] [i_6] [i_3] [i_6] [1] [i_0] = (+-32640);
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_35 = var_10;
                            var_36 = var_3;
                            arr_39 [i_10] = var_10;
                            var_37 = ((~(arr_27 [i_0 - 2] [i_0 + 1] [i_1] [i_0 - 2] [0] [i_0 - 2])));
                        }
                    }
                }
            }
        }
    }
    var_38 = var_11;
    #pragma endscop
}
