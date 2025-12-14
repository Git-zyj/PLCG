/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [2] [i_1] = (max((max(((min(var_9, (arr_5 [i_1] [2])))), var_0)), (arr_8 [i_0 - 2] [i_0 - 1] [0] [i_0 + 1])));
                        arr_11 [i_0] [1] = (((((var_1 - var_9) ? (arr_3 [5]) : (max((arr_3 [i_0]), (arr_8 [i_0 - 2] [i_0] [i_0 - 2] [0]))))) > ((min((max((arr_1 [i_2]), (arr_1 [i_0]))), (arr_3 [i_3]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        arr_15 [1] [i_0] [i_1] [i_2] [i_2] = (((((arr_12 [i_0] [i_1] [i_2] [4]) || (arr_2 [7] [7] [i_2]))) || ((!(arr_3 [i_0])))));
                        var_20 = (min(var_20, ((((arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_4]) <= (arr_4 [i_0 - 4]))))));
                        var_21 = (arr_1 [i_1]);
                        arr_16 [i_0] [i_1] [i_1] [i_2] [7] [i_0] = (arr_12 [4] [i_1] [4] [i_4 - 1]);
                    }
                    var_22 ^= min((((arr_7 [i_0 + 1]) ? var_3 : (arr_2 [i_0 + 2] [i_1] [9]))), (arr_5 [i_0 + 1] [i_0 - 3]));
                }
            }
        }
    }
    var_23 = (((var_2 ? var_8 : ((max(var_11, var_17))))));
    var_24 &= ((((1286295608 * 1286295614) ? (!var_7) : 1286295617)));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_25 = (max(var_25, ((((arr_26 [i_5] [i_6 - 1] [i_7] [i_7]) ? -19 : ((max((arr_21 [i_5] [i_6] [12]), (arr_19 [i_5])))))))));
                    arr_27 [i_5 - 1] [i_6 - 1] [i_7] [i_5] = ((~((max((arr_17 [i_5 - 1]), (arr_17 [i_5 - 1]))))));

                    for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        var_26 = (arr_19 [i_7]);
                        arr_30 [i_5] [i_6 + 1] [0] [i_5] = (((((max(var_7, var_5))) ? (arr_26 [i_5 - 1] [i_6 - 1] [i_6 + 2] [i_8 + 3]) : (arr_29 [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 + 1]))));
                        arr_31 [i_5] = (max((arr_21 [i_5 + 1] [i_6 + 2] [i_8 + 1]), (arr_18 [3] [i_8 + 1])));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_6] [i_6] [i_7] [i_9] [i_9 + 1] [i_9] = var_11;
                        arr_35 [6] [i_6 - 1] [i_7] [15] |= (~var_8);
                        var_27 = (~var_10);
                        var_28 = (max(var_28, var_4));
                    }
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_44 [i_5] [i_6] [i_10] [20] [i_12 + 1] = var_10;
                                arr_45 [i_10] = (arr_19 [i_5 - 2]);
                                var_29 = (max(var_29, (((max((arr_40 [i_6 - 1] [i_5]), ((var_5 << (((arr_43 [i_5] [i_5]) - 32))))))))));
                                arr_46 [i_11 - 3] [i_6] [i_10] [i_11] [i_12] = (max((min((((109 <= (arr_25 [i_5])))), 44636)), (min((arr_22 [i_5 - 2]), (arr_22 [i_5 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_30 += (arr_33 [i_5] [i_6] [i_10] [i_14]);
                                var_31 += 141;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_15 = 1; i_15 < 21;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_32 = (((arr_43 [i_15] [i_15]) > var_17));
                        arr_60 [i_5] [5] [10] [i_15] [1] [9] = (~(arr_37 [i_15]));
                        arr_61 [i_5] [i_15] [i_16] = ((-(arr_58 [i_6 + 1])));
                    }
                    arr_62 [6] [i_6] [i_15] = var_4;
                    arr_63 [i_5] [i_5 - 2] [i_15] = ((!(arr_51 [i_5] [17] [i_15 + 2] [i_15])));
                }
                var_33 = ((!(arr_32 [i_6 + 2])));
                var_34 = ((((((arr_24 [i_5 - 2] [i_6 + 1] [5]) ? (arr_22 [i_5 + 1]) : (arr_22 [i_5 - 1])))) ? (arr_24 [i_5 - 2] [i_6 + 2] [i_5 - 2]) : (((!(arr_52 [i_5 + 1] [i_5 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6] [i_6]))))));
                var_35 -= (((((((var_11 ? var_1 : var_13)) + (~var_2)))) ? (((!(arr_43 [i_5] [i_5])))) : 97));
            }
        }
    }
    #pragma endscop
}
