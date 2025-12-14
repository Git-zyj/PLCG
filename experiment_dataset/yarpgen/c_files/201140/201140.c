/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_20 |= (arr_8 [i_0] [i_0] [7] [i_3 - 1]);
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [7] = (((((arr_9 [i_2 + 1]) > (((arr_6 [i_0] [i_0]) * (arr_6 [i_0] [i_2 + 1]))))) || (arr_1 [i_0] [i_0 + 1])));
                        var_21 |= (max((max(((min(19663, (arr_7 [i_1] [i_0] [i_1] [i_3])))), var_16)), (--20673)));
                    }
                    var_22 ^= ((~(min((arr_10 [i_1] [i_1] [i_1] [i_0]), (((-17939 >= (arr_0 [i_0]))))))));
                    var_23 = (min(var_23, (((max((arr_9 [i_0]), (arr_9 [i_0])))))));
                    arr_12 [i_0] [i_0] [i_0] = ((((min((arr_8 [i_0] [8] [8] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0])))) && (((min(var_5, -409442963))))));
                    var_24 = (max(var_24, ((min((arr_9 [i_0 - 1]), (~2575058652))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] = ((arr_2 [i_1] [i_1] [i_1]) ? (arr_7 [i_4] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : -3221241332592162795);
                    arr_16 [i_0] = 1654830200;

                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_4] [i_5] |= ((var_1 ? (arr_7 [i_0] [i_0] [0] [i_0]) : (!12)));
                        arr_22 [i_0] [i_1] [i_1] [i_5] = ((~((((arr_6 [i_0] [i_0]) == (arr_4 [i_0] [i_1] [i_1]))))));
                        var_25 = (arr_13 [i_0] [i_0] [i_4] [i_5]);
                    }
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        arr_25 [i_6] [i_4] [i_4] [i_1] [i_0 + 2] = 706;
                        var_26 = (max(var_26, (arr_1 [i_0 + 2] [i_0])));
                    }
                    var_27 ^= ((-((-(arr_23 [i_0] [i_0])))));
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_28 = ((~((-(arr_26 [i_0] [i_0] [i_7])))));
                    var_29 = (((arr_17 [i_0 + 2] [0] [i_0 + 2] [5]) && (((arr_17 [i_0 - 1] [i_1] [i_1] [i_0 - 1]) != (arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1])))));
                    arr_29 [i_0] [i_1] [i_7] = (((var_10 ? var_4 : 1)));
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 14;i_10 += 1)
                        {
                            {
                                arr_37 [i_0] [i_1] [i_8] [i_9] [i_0] = (max((((~(arr_34 [i_10 + 1] [i_9 - 1])))), var_8));
                                arr_38 [i_10] [i_10] [i_9 - 2] [8] [i_8] [8] [i_0] |= ((+(min((~var_2), (((0 != (arr_19 [i_0]))))))));
                                var_30 = 17964284109854778218;
                            }
                        }
                    }
                    var_31 -= (min((((7026658755667005532 != 1141) ^ (arr_4 [i_0] [15] [i_0 + 1]))), (max((arr_23 [i_0 + 1] [i_0 + 2]), (arr_23 [i_0 + 3] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_32 = (((482459963854773378 | (arr_20 [i_0 - 1] [i_1]))));
                                var_33 += (arr_17 [i_0] [i_0 + 1] [i_0 + 3] [i_8]);
                                var_34 ^= max((min((var_6 >= var_0), (~482459963854773397))), (min((var_10 ^ 247), (((arr_9 [i_12]) % var_4)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_35 = (min(var_35, (((min(((max(-19916, (arr_26 [i_14] [i_14] [i_8])))), (arr_49 [i_0 + 1] [i_1] [i_8] [i_8] [i_14])))))));
                                var_36 = (min(var_36, (((((arr_10 [i_14] [15] [15] [i_14]) && (arr_44 [i_0 + 1])))))));
                            }
                        }
                    }
                    var_37 += (arr_24 [i_0] [i_1] [i_8] [i_1]);
                }
                arr_50 [i_0] = ((-((max((max((-32767 - 1), (arr_20 [i_0] [i_1]))), (arr_43 [i_0] [i_0] [i_0 + 2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 14;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                var_38 = ((-(((((~(arr_52 [7] [7])))) ? var_3 : (arr_52 [i_15 + 2] [12])))));
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 13;i_19 += 1)
                        {
                            {
                                var_39 = var_16;
                                arr_64 [i_19] [i_16] [i_17] [i_18] [6] [i_19] = 19916;
                            }
                        }
                    }
                }
            }
        }
    }
    var_40 = max(var_10, (min((var_13 >= 11420085318042546084), (var_9 | var_7))));
    var_41 = var_6;
    #pragma endscop
}
