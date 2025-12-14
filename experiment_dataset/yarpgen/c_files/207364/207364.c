/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_3 [i_0] = ((var_2 ? (arr_1 [i_0] [14]) : var_2));
        arr_4 [i_0] [i_0] = var_7;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_12 -= (((((~((var_6 ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : (arr_1 [i_1] [i_1])))))) ? (((arr_10 [i_1] [i_2] [0]) ? (arr_9 [i_2 - 3] [i_2 - 2]) : ((min(var_3, 1557712244))))) : (((((max(var_0, (arr_8 [i_1] [i_2] [i_3]))) > var_2))))));
                    arr_15 [i_1] [i_1] [i_1] &= (((((~(arr_8 [i_1] [i_2 - 1] [i_1])))) ? (min((arr_8 [1] [i_2 - 1] [i_2]), (arr_8 [i_3] [i_2 - 1] [i_1]))) : (arr_8 [i_2] [i_2 - 1] [i_1])));

                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        arr_19 [i_1] [i_1] [9] [i_4] |= arr_0 [i_2];
                        arr_20 [i_1] [i_1] [i_2 - 4] [9] [i_4 + 4] = (((((arr_12 [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4 + 1]) ? (arr_12 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 1]) : var_7)) > ((min((arr_12 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 + 2]), (arr_16 [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_4]))))));
                        arr_21 [i_2] = (~652701371);
                        arr_22 [i_3] [i_3] [11] [i_3] = (2011623859 / -1557712245);
                        var_13 &= ((((arr_9 [i_1] [i_1]) < var_9)));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_14 = var_4;
                        arr_26 [i_1] [i_2] [i_5] [i_1] [i_5] = (((((((max((arr_17 [i_3]), var_7))) ? ((((arr_16 [i_1] [i_1] [i_1] [i_5] [9]) ? (arr_16 [18] [i_3] [11] [i_3] [i_3]) : var_9))) : (max(var_8, var_0))))) ? (arr_8 [i_1] [i_1] [i_1]) : ((min(((var_2 ? (arr_17 [i_3]) : (arr_13 [i_5]))), var_1)))));
                        arr_27 [i_3] [i_2] [i_5] [i_2] [10] = min(((((arr_5 [i_3]) > (var_5 > var_1)))), ((-((~(arr_10 [i_2] [i_3] [i_3]))))));
                    }
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_15 = (min(var_15, (arr_1 [i_6] [i_6])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_16 = (min(var_16, var_0));
                                var_17 -= ((max((arr_32 [i_2 - 4] [i_2 - 4]), (arr_31 [i_2 - 1] [i_2 - 1]))));
                                var_18 |= (min(((((arr_10 [i_2 - 4] [i_2] [i_6]) < ((var_5 & (arr_36 [i_2] [i_7])))))), var_0));
                                var_19 = var_10;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_20 = (+(((arr_25 [i_1] [12] [i_2 - 4] [i_9]) ? (arr_0 [1]) : (arr_23 [i_9] [i_9] [i_9] [i_1]))));
                    var_21 = (max(var_21, var_7));

                    for (int i_10 = 4; i_10 < 19;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_46 [2] [i_9] [2] [i_11] = ((~(arr_41 [i_9] [i_2 - 2] [i_2] [i_2 - 2] [i_10 - 3])));
                            var_22 = (max(var_22, (((((var_2 & (arr_44 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2])))) ? ((((var_6 > (arr_6 [i_1]))))) : (arr_44 [i_1] [6] [i_1] [i_9] [6] [i_11])))));
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_23 -= (~(((arr_40 [8] [i_1] [i_1] [i_1]) & (arr_45 [i_10]))));
                            var_24 = 1557712244;
                            var_25 &= var_2;
                        }
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            var_26 = 1557712244;
                            arr_53 [i_9] [1] = (((var_1 - var_4) ? ((var_7 ? (arr_14 [i_9] [i_10] [i_13]) : (arr_5 [i_10]))) : var_7));
                            var_27 -= (((arr_16 [i_2] [i_2 - 1] [i_10] [i_10 - 4] [i_13 - 1]) > (((arr_37 [i_10] [i_10] [i_10] [i_10] [i_10]) ? var_5 : (arr_44 [i_13 - 1] [i_13 - 1] [i_10] [i_13 - 1] [i_13] [i_13 - 1])))));
                            var_28 = (arr_11 [i_2 - 2] [i_2 + 1]);
                            arr_54 [i_9] [i_10] &= (((arr_33 [i_10 - 2] [4]) ? (((arr_30 [i_1] [i_1] [i_1] [i_10 - 1]) ? var_0 : (arr_35 [i_1] [i_2] [i_2] [i_2]))) : (arr_24 [i_1] [i_2] [i_1] [i_9] [i_9] [i_13])));
                        }
                        arr_55 [i_1] [i_1] [i_1] [i_9] = ((((var_8 ? (arr_52 [i_1] [i_2] [i_9] [i_2 + 1]) : var_0))) ? var_11 : var_4);
                    }
                    arr_56 [i_9] = (arr_51 [i_2 - 3] [i_2 + 1] [i_2] [i_9] [i_2 - 3]);
                    var_29 = ((arr_24 [i_2] [i_2 - 1] [i_9] [i_2] [i_2 - 1] [7]) ? (arr_38 [i_1] [14] [i_2]) : (arr_18 [i_1] [i_1] [i_2 - 2] [i_2 - 2]));
                }
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    arr_59 [i_1] [i_1] [i_14] = (arr_39 [i_1] [i_2 - 3] [17] [i_14]);

                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {

                        for (int i_16 = 2; i_16 < 17;i_16 += 1)
                        {
                            var_30 ^= ((23 ? 435642772 : 0));
                            arr_66 [i_1] [i_2 + 1] [3] [i_1] [i_14] [i_15] [i_16] = (max(var_10, (arr_33 [i_2 - 4] [i_2 - 1])));
                            arr_67 [i_16 - 1] [i_15] [i_15] [1] [i_2] [1] [i_1] = ((((((((arr_8 [i_1] [3] [i_1]) ? var_10 : (arr_57 [i_1] [i_1] [i_1] [i_15]))) & (((~(arr_62 [i_1] [i_2] [i_14] [i_14] [i_15] [i_16]))))))) ^ (max(((var_10 ? var_8 : (arr_36 [i_1] [i_2 - 3]))), (var_1 | var_4)))));
                        }
                        arr_68 [16] [16] [i_14] [i_14] [i_14] [i_14] = ((max(((((arr_40 [i_1] [i_2] [i_1] [i_15]) ? (arr_47 [1]) : var_6))), ((var_9 ? (arr_24 [i_1] [14] [i_2] [2] [i_1] [i_15]) : (arr_30 [i_1] [i_14] [i_1] [i_1]))))) < (min(var_8, var_0)));
                    }
                }
                arr_69 [i_1] = var_0;
            }
        }
    }
    var_31 = var_8;
    #pragma endscop
}
