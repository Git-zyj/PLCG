/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (var_17 >= var_16);
    var_19 |= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] &= (min((((arr_1 [i_2 - 2]) ? (arr_1 [i_2 + 1]) : (arr_0 [i_2 - 2]))), (max(var_10, var_15))));
                    arr_7 [i_0] [13] [i_2 - 1] &= ((-var_0 ? (arr_5 [i_2 - 1] [i_1 - 2] [i_1 - 1] [i_1 + 2]) : ((var_4 ? var_11 : (arr_2 [i_0] [i_1 + 1] [i_0])))));
                }
                var_20 += (arr_3 [i_0]);
                arr_8 [6] [13] = arr_4 [i_0] [i_1] [i_1];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_4 - 1] [i_4] [i_5] [1] [i_4 - 1] |= (arr_13 [i_3]);
                                var_21 = ((((max((((arr_17 [i_6]) & var_3)), (arr_17 [i_4 - 1])))) ? ((3349691854 ? (arr_18 [i_3] [i_4 - 1] [i_5]) : (-127 - 1))) : (arr_2 [i_3] [i_3] [i_6])));
                                var_22 |= (~(max(((max((arr_13 [i_3]), 63))), var_6)));
                            }
                        }
                    }
                    arr_27 [i_3] [1] [i_5] [i_3] = (((((9223372036854775779 ? -1 : 6813279763487937304))) ? ((-((var_10 / (arr_19 [i_3] [i_3] [6]))))) : 8589934591));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    arr_30 [i_3] [1] [i_8] = (arr_4 [1] [1] [i_8]);

                    for (int i_9 = 4; i_9 < 11;i_9 += 1)
                    {
                        var_23 += max((min(((max(540090247215890029, var_6))), ((202 ? 1 : 13866263737335170503)))), 1);
                        arr_33 [i_9 - 2] [i_9 + 3] [i_9] [i_9 - 2] = (((((max((arr_16 [i_3] [i_8] [4] [i_3]), (arr_2 [18] [3] [i_8]))))) ? var_8 : ((((arr_4 [19] [19] [i_8]) ? var_3 : (arr_0 [4]))))));
                        arr_34 [11] [i_9 + 3] = ((-1714281054 ? 44796 : 0));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_41 [1] [i_11] [i_10] [i_8] [i_11] = ((8200629603713777664 ? -1883446759682802500 : 61765));
                            var_24 &= -8200629603713777657;
                            arr_42 [i_3] [5] [5] [5] [5] [i_10] [7] = arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 1];
                            arr_43 [i_3] [i_8] [i_10] [i_11] = var_17;
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_25 += (arr_25 [i_3] [6] [i_3] [i_3] [i_3]);
                            arr_46 [i_12] [i_10] [i_8] [10] [i_4 + 1] [4] = (min((arr_4 [i_8] [i_4 - 1] [i_3]), (arr_0 [i_3])));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_26 += var_14;
                            arr_51 [i_3] [i_13] = (min((arr_35 [1] [i_4] [4] [i_4 - 1]), (((arr_35 [6] [i_3] [i_4 + 1] [i_4 - 1]) ? (arr_35 [i_3] [i_4 - 1] [i_4] [i_4 + 1]) : (arr_35 [i_3] [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                            var_27 = (max(var_27, (arr_36 [i_4 - 1] [i_8] [i_10] [13])));
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_28 = (max(var_28, (((~(arr_16 [i_4 + 1] [i_4] [i_4 + 1] [1]))))));
                            var_29 = (arr_16 [i_4 - 1] [i_3] [9] [i_3]);
                            arr_55 [i_3] [8] [i_4] [12] [1] [i_8] |= (arr_40 [6] [6] [i_4 + 1] [13] [4] [i_14] [12]);
                            var_30 = (max(var_30, (arr_37 [i_4] [i_10])));
                        }
                        var_31 = (arr_25 [i_3] [i_3] [i_3] [i_10] [i_10]);
                        var_32 = ((-1583998854 ? 183 : ((((arr_32 [i_10]) ? 0 : var_17)))));
                        arr_56 [i_10] [i_4] [i_4] [i_4] [i_4 + 1] [i_3] &= (arr_2 [i_3] [i_4 + 1] [i_8]);
                    }
                    for (int i_15 = 2; i_15 < 13;i_15 += 1)
                    {
                        var_33 = (max(var_33, ((((arr_49 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_57 [i_15] [i_8] [i_3] [i_3]) : ((((!(arr_17 [i_3]))))))))));
                        var_34 *= (arr_32 [i_15]);
                        var_35 = var_1;

                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            var_36 = var_0;
                            arr_62 [i_3] = ((arr_48 [4] [i_4 - 1] [i_8] [4]) ? (arr_11 [i_15 - 2]) : (arr_20 [i_16] [i_16] [i_15 - 2] [4] [i_3]));
                        }
                    }
                    var_37 = ((!(((~(arr_54 [i_8] [6] [i_8] [2] [i_3]))))));
                }
                var_38 = (max(var_38, var_0));
                var_39 = (var_6 ? (arr_60 [i_3] [i_3] [10] [i_4 - 1] [10] [i_4] [i_4]) : ((((max(32652, 9223372036854775807))) ? (arr_0 [i_3]) : ((var_9 ? (arr_28 [i_4] [i_3] [i_3]) : (arr_29 [4] [i_4] [i_4 + 1] [i_3]))))));
            }
        }
    }
    var_40 &= var_9;
    #pragma endscop
}
