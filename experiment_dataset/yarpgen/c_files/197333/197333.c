/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_18 = ((-(((~(arr_2 [i_0]))))));
        var_19 = (min(var_19, (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_20 = (arr_0 [i_3]);
                            arr_14 [i_0 - 1] [i_3 + 1] [i_1] [i_0 - 1] [8] = (arr_9 [i_0] [i_1] [i_2] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0 - 1] [i_1] = (arr_10 [i_1] [i_3] [i_1] [i_1] [i_1] [i_0]);
                            var_21 = (arr_10 [i_0] [i_0] [i_0] [i_3] [i_5] [i_5]);
                            var_22 = arr_11 [i_3] [i_3] [7] [i_3 + 1] [i_3 + 1];
                        }
                        arr_20 [i_0] [i_1] = ((+((241 ? ((-2067362665 ? (arr_11 [i_3] [i_3] [i_2] [i_1] [i_0]) : 250)) : (((arr_18 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_1]) ? (arr_18 [i_0] [i_1] [i_1] [2] [i_1] [11] [i_1]) : 65528))))));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((-(((-(arr_1 [i_0]))))));
                            arr_24 [i_0] [i_1] [i_3] [8] = ((~(arr_11 [i_0] [i_0] [i_0] [i_3] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_24 |= ((-(((!(arr_12 [i_2 - 1]))))));
                            var_25 = ((-(arr_25 [i_0] [i_0] [4] [i_0] [i_3] [i_1] [i_1])));
                        }
                        var_26 += (((-(arr_6 [i_0] [i_1] [i_2]))));
                        var_27 &= (arr_18 [i_0] [i_1] [i_2] [i_3] [10] [i_2] [4]);
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_28 = arr_1 [i_0];
                        var_29 = (((((~(arr_22 [i_0] [i_0] [i_0] [i_1] [i_2] [i_8])))) ? -828001901785969297 : (((~(arr_28 [i_1] [i_1] [i_2 - 3]))))));
                    }
                    var_30 = (((!(arr_18 [1] [i_0 - 1] [7] [11] [i_0 - 1] [11] [i_1]))));

                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        var_31 = (((-(arr_22 [i_0] [5] [i_2 + 2] [i_1] [i_1] [i_9]))));

                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_10] [i_0] [i_1] [i_1] [i_10] [5] = ((+(((((arr_2 [i_9]) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : (arr_12 [i_0])))))));
                            arr_38 [i_0] [i_0] [i_0] [i_1] [i_2 + 2] [i_0] [i_0] = ((~(((!((!(arr_4 [i_1]))))))));
                            arr_39 [i_0 - 1] [i_1] [i_0 - 1] [i_2] = (-((~(((!(arr_18 [i_0] [i_1] [i_1] [i_1] [i_9 + 1] [1] [i_1])))))));
                            var_32 = (arr_17 [i_0 + 1] [i_1] [i_9 + 1] [i_10]);
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_33 += ((((((-(arr_6 [i_0] [i_0] [i_0]))))) ? (arr_41 [i_2 + 1] [i_2 - 1] [i_2] [7] [i_2] [i_2 - 1] [i_2]) : 15));
                            arr_42 [i_0] [i_1] [i_0] [1] [i_11] [2] &= (~(arr_40 [i_2] [i_2] [i_2] [i_2 + 1] [10] [8] [i_2]));
                            arr_43 [i_1] [i_0] [i_1] = ((!(arr_7 [i_1] [i_1] [i_1] [i_1])));
                            var_34 = -19532;
                            arr_44 [i_0] [i_1] [i_2] [i_11] = ((!((!(arr_27 [i_0] [i_1] [i_0])))));
                        }
                        var_35 &= (arr_34 [i_2 - 3] [10] [2] [i_2] [i_2] [4] [i_2]);
                    }
                    var_36 -= (~130);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_50 [i_1] [i_1] [i_1] [i_1] [i_12] |= ((-(~7638948373803072332)));
                                var_37 = ((~((-(arr_21 [4] [4] [i_0] [i_12] [i_13] [i_12])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 &= ((~(!var_3)));
    #pragma endscop
}
