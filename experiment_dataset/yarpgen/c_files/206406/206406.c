/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 = ((((((~2147483647) ? ((3740879668123247437 ? (arr_1 [i_2]) : (arr_3 [i_0] [i_0]))) : (arr_2 [i_0] [i_1] [i_0])))) ? var_0 : (arr_2 [i_0] [i_1] [i_0])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_4] [i_0] [i_0] [i_0] = (((((-(arr_8 [12] [i_1] [i_1] [i_1] [1])))) && var_4));
                            var_19 |= ((+((var_14 ? (var_0 % var_3) : ((var_0 ? (arr_12 [12] [i_1] [i_2] [i_3] [i_4] [18]) : var_17))))));
                            var_20 += ((var_0 - (((var_0 * var_7) / ((var_11 ? (arr_1 [i_3]) : 8))))));
                            var_21 = (min(var_21, var_13));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_17 [2] [2] [i_2] [i_3] [i_2] |= (min((~var_10), var_14));
                            arr_18 [i_0] [i_3] [i_0] = (min((min(var_4, (0 && 2047))), (((((max(var_12, var_15))) ? (arr_5 [i_0] [i_0]) : ((((arr_13 [i_5] [i_3] [i_0] [i_0] [i_0] [i_0]) > var_4))))))));
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] [1] [i_0] = var_1;
                            var_22 ^= max(((((max(1, 17128003673712704664))) ? (((arr_4 [2] [2] [16]) ? var_8 : (arr_16 [i_5] [i_1] [i_2] [i_3] [i_2] [2] [10]))) : (arr_5 [1] [i_1]))), var_1);
                        }
                        var_23 |= (((((arr_6 [i_2]) ^ (arr_9 [10] [10] [10] [i_2] [1] [10])))) ? (((~(max(var_10, var_6))))) : ((1 ? ((max(-1593239267, 2147483647))) : (arr_6 [i_1]))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_24 = ((((max(((((arr_12 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6]) ? var_0 : (arr_7 [i_0] [i_0] [i_2])))), (arr_13 [3] [i_0] [i_0] [i_0] [1] [6])))) ? (var_4 && 1) : ((((~(arr_2 [i_0] [i_2] [i_0]))) - ((min((arr_11 [i_0] [i_0] [i_0] [8] [8] [i_0]), 127)))))));
                        arr_23 [i_0] [6] [i_2] [i_0] [i_0] [i_0] = ((var_14 << ((max((!65535), (((arr_13 [14] [i_1] [i_2] [i_0] [i_1] [19]) < 8190)))))));
                        var_25 = (max(var_25, (max((max(var_7, (((arr_5 [4] [i_6]) ? 9 : var_3)))), (((-(((!(arr_16 [i_0] [6] [i_6] [i_6] [i_0] [i_2] [14])))))))))));
                    }
                    var_26 = (arr_5 [i_0] [i_0]);
                    arr_24 [i_0] [i_0] [i_0] [i_2] = (((var_4 ? var_4 : (arr_4 [i_0] [i_1] [i_0]))) != ((((((arr_20 [i_0] [i_2]) ? (arr_22 [2] [i_2] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_2])))) ? (arr_10 [i_0] [i_1] [i_1] [i_2] [i_0] [15]) : -65535)));
                    var_27 = var_11;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_29 [i_8] [i_0] [14] [i_2] [i_1] [i_0] [i_0] = ((~((((min((arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [1] [i_0]), (arr_4 [19] [i_1] [i_0])))) ? (arr_10 [i_0] [i_0] [i_2] [i_7] [i_8] [i_0]) : (max((arr_6 [i_1]), (arr_6 [i_0])))))));
                                var_28 ^= (-(((arr_20 [i_0] [i_0]) ? var_15 : var_15)));
                                var_29 = (min(var_29, 37));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_30 += 1;
                    var_31 = (min(var_31, ((max(1, ((var_10 ? (arr_15 [i_0] [i_1] [0] [i_9] [i_9]) : (arr_5 [18] [i_9]))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_32 = ((((((var_12 & var_2) ? 3754595811 : (((27275 != (arr_4 [13] [i_9] [i_0]))))))) < (max((arr_34 [i_0]), (max(var_3, var_4))))));
                                arr_38 [i_11] [i_0] [i_0] [i_1] [i_0] = ((var_11 ? (arr_7 [i_0] [i_1] [i_9]) : (arr_16 [i_9] [i_1] [i_11] [5] [i_1] [i_11] [i_0])));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    var_33 = (((min(var_11, var_15))) ? var_0 : -var_7);
                    var_34 ^= (max((~100), (((!(arr_28 [i_0] [i_0] [i_12] [1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                arr_46 [5] [i_0] [i_12] [i_0] [i_0] = (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_47 [16] |= var_1;
                                arr_48 [i_0] [i_0] = var_15;
                                var_35 += (((arr_3 [14] [0]) % ((~(max((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]), 44470))))));
                                arr_49 [i_0] [i_0] [i_0] [18] [i_14] |= var_14;
                            }
                        }
                    }
                    var_36 = (((((max((arr_7 [i_0] [i_0] [i_0]), (arr_35 [i_0] [6] [i_0])))) ? (arr_8 [i_0] [i_1] [i_1] [7] [i_1]) : ((min(var_16, var_14))))));
                }
                arr_50 [i_0] [i_1] [i_0] = (((max((arr_3 [i_0] [i_0]), ((var_12 ? var_14 : var_5)))) != (((!(((arr_37 [i_0] [i_0] [i_0] [i_0]) < var_3)))))));
            }
        }
    }
    var_37 = ((!((((var_11 ^ var_14) ? var_7 : ((9978806891322794675 ? var_14 : var_15)))))));
    var_38 = (min(var_6, 1206165429));
    #pragma endscop
}
