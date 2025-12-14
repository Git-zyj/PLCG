/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (!var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_1] [i_1] [i_1] [9] [i_1] [i_1] = (((((arr_1 [i_0]) ? (arr_0 [i_0] [5]) : 2097151)) & ((((arr_1 [i_0]) == 1)))));
                        var_13 ^= (arr_3 [i_0]);

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_14 = (!var_9);
                            arr_13 [i_1] [i_4] = (((arr_1 [i_2 - 3]) != -51));
                            arr_14 [i_4] [9] [1] [i_1] [i_1] [i_1] [1] = (arr_1 [i_0]);
                            arr_15 [1] [i_1] [i_2] [i_1] [1] = (((((-(arr_4 [i_0] [i_0] [i_0])))) || 38));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_15 ^= (((((var_3 ? 50 : var_7))) || (var_5 - var_0)));
                            arr_19 [i_1] = (+((45 ? (arr_18 [i_2] [i_1] [i_2] [i_2 + 3] [i_2] [i_2 - 2] [i_2 + 3]) : 40)));
                        }
                    }
                    var_16 ^= var_0;
                    var_17 ^= (((((var_4 ? (max((arr_17 [0] [i_2] [0] [i_2 - 4] [0]), var_4)) : (!50)))) <= (arr_12 [i_1] [i_2] [i_2 - 1])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_18 = ((!(arr_3 [8])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_19 ^= (((arr_0 [i_0] [i_1]) ? (arr_11 [1] [i_6] [i_6] [i_7] [i_8]) : var_8));
                                var_20 = (max(var_20, (((!(arr_3 [i_7]))))));
                            }
                        }
                    }
                    var_21 ^= var_0;
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    arr_30 [0] [i_1] [0] [i_1] = ((-(min((arr_23 [i_0] [i_0] [i_0] [10]), (arr_8 [i_1])))));

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_34 [8] [8] [i_1] = (((-51 && (arr_8 [i_10]))) ? (((max(50, -49)))) : ((~(arr_8 [i_9]))));
                        var_22 ^= 39;
                        arr_35 [i_0] [i_1] [i_1] [i_0] [i_1] = (arr_20 [i_1] [i_1] [i_9] [i_10]);
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        arr_39 [i_0] [i_1] [i_0] [i_11] = (((~(min(31, (arr_25 [i_0] [1] [i_9] [i_9] [1] [i_9] [7]))))));
                        arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] = (((var_1 % ((max((arr_29 [i_1] [1] [1] [1]), (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) & ((((max(-32, (arr_6 [12] [12])))))));
                        arr_41 [4] [i_1] = -51;
                        var_23 ^= (((arr_0 [i_1] [i_1]) == (((var_4 || (((arr_8 [i_1]) >= (arr_29 [i_9] [i_9] [i_11] [i_11]))))))));
                        arr_42 [i_11] [i_11] [i_11] [i_11] [i_11] [i_1] = var_4;
                    }

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_24 = ((-(arr_37 [i_0] [11] [i_12] [i_12] [i_1])));

                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_25 ^= (53 ? -42 : -51);
                            var_26 ^= (((arr_46 [i_9] [i_9] [1] [1] [i_9] [i_9] [1]) ? (arr_45 [i_0] [i_1]) : 72));
                        }

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_27 ^= (arr_23 [i_0] [i_0] [i_0] [i_0]);
                            var_28 ^= (arr_20 [7] [7] [i_9] [i_12]);
                            arr_50 [i_14] [i_1] [1] [6] [i_14] [6] = ((((((arr_36 [i_0] [i_0] [i_9] [i_9]) * (arr_49 [i_1] [i_1] [6] [5] [7] [i_12])))) ? (((arr_43 [i_0] [7] [i_9] [i_12] [i_9]) ? -45 : 31)) : (arr_45 [i_0] [9])));
                            arr_51 [i_9] [2] [i_9] [i_9] [i_1] = (arr_17 [i_0] [i_1] [i_9] [i_1] [i_1]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                var_29 = (arr_2 [i_1] [i_1]);
                                var_30 ^= ((arr_7 [i_1] [10] [i_16]) != (arr_7 [i_0] [i_0] [i_0]));
                            }
                        }
                    }
                }

                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        arr_68 [i_1] [i_1] [i_1] [i_1] = (min(((var_3 ? (((arr_24 [i_0] [i_0] [i_0] [i_17] [i_17] [2]) / (arr_43 [10] [10] [i_17] [2] [i_18]))) : (arr_48 [i_1] [i_1]))), (-32 | 31)));
                        arr_69 [i_0] [i_0] [i_17] [i_1] = (((((max(31, var_0)) ^ -73)) | var_3));
                    }
                    arr_70 [i_0] [i_1] [8] [i_1] = ((-49 ? 51 : 25));
                    arr_71 [i_0] [i_1] [4] [i_0] = max(-36, var_2);
                }
            }
        }
    }

    for (int i_19 = 0; i_19 < 15;i_19 += 1)
    {
        arr_74 [i_19] [4] = (max((arr_72 [i_19]), -32));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                {
                    var_31 ^= ((!((!(arr_79 [i_19] [i_19] [i_21] [i_21])))));
                    var_32 = (max((max((arr_73 [i_19]), (arr_73 [i_19]))), ((((arr_72 [i_19]) ^ (((arr_73 [i_19]) ? -42 : (arr_79 [i_19] [i_19] [i_20] [1]))))))));
                    arr_80 [12] [i_20] [12] = 29;
                }
            }
        }
    }
    var_33 ^= (((max((max(var_4, var_8)), (var_4 ^ var_5))) & ((((((var_3 ? 50 : var_2))) ? (((38 << (48 - 39)))) : var_1)))));
    #pragma endscop
}
