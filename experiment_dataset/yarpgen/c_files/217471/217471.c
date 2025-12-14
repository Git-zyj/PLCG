/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = ((((((var_2 ^ var_7) ? (~var_8) : (((arr_0 [i_2] [1]) & (arr_8 [8] [1] [8] [1] [i_1] [3])))))) < (((((~(arr_6 [i_3] [i_1] [i_2] [i_2])))) & (~var_15)))));
                            var_20 = (((min((max(0, 27813)), (var_13 & var_10))) <= var_13));
                            var_21 = (((((((var_1 ? 6366360991143706958 : 32767))) ? var_10 : (min(var_17, (arr_4 [1] [1] [7]))))) / (min(var_0, (((var_7 ? var_3 : var_12)))))));
                            var_22 ^= (((!(7515720790979166295 | 16383))));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    var_23 = (max(var_23, ((((-(min(var_2, var_0))))))));
                    var_24 = ((((max((~255), ((var_18 ? var_9 : var_12))))) ? (7 || 15) : (var_6 <= 733727989)));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_25 = (max(var_25, (((1 ? 36257 : (min(((max(var_3, 42))), (max(32766, -1722353306)))))))));
                        arr_17 [i_1] [i_1] [3] = ((max(var_12, (max(var_1, -23)))));
                        var_26 -= (((((!(11720383844480659110 | var_14)))) ^ (((!(!var_0))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] = ((!(((((min(var_16, var_18))) ? (3463292809 / var_12) : var_10)))));
                                var_27 -= (((((var_3 ^ var_1) + 2147483647)) >> ((min(var_6, 1)))));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_28 = (((((var_2 ? (arr_25 [i_1] [i_1]) : var_17))) < var_6));
                        var_29 = (max(var_29, var_8));
                        arr_28 [i_1] [i_1] [i_9] = ((!18176141851975214750) ? 5644647404901288827 : 9137100468813691909);
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_30 = (max(var_30, ((((((!(!-3865)))) << ((((32207 ? (max(var_4, 36543)) : (((18446744073709551615 ? var_8 : 1156676457))))) - 36542)))))));
                        arr_33 [i_1] [i_1] [i_1] [12] = (min(((max(var_2, var_12))), (((arr_10 [i_1] [i_10 - 1] [i_10]) ? var_11 : (arr_10 [i_1] [i_10 - 1] [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_31 = (max(var_31, var_8));
                        var_32 = ((1713862282815615980 ? var_12 : var_18));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_41 [i_0] [i_1] [i_8] [2] [i_1] = max(((var_6 ? var_18 : 11)), ((-(~var_18))));
                        arr_42 [9] [i_1] [i_1] [11] [i_8] [i_12] = (max(((((max(var_0, var_13)) > var_18))), ((((arr_6 [7] [4] [i_8] [7]) ^ var_0)))));
                    }
                    var_33 = ((var_4 / ((min((arr_1 [i_8 + 1] [i_8 + 1]), var_17)))));
                    arr_43 [9] [i_1] [7] [1] = (((max(2797, ((var_4 ? var_11 : var_9)))) - ((((var_1 * var_6) >> var_12)))));
                    var_34 = (max(var_34, ((max((max((var_1 != var_6), 5594003419821250696)), var_12)))));
                }
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    var_35 = ((((var_15 ? 3634609201 : var_11)) ^ (arr_6 [i_1] [i_1] [i_1 - 1] [i_1 - 1])));
                    var_36 = ((-(min((!9127964405891352796), (arr_14 [1] [i_1] [i_1] [i_0])))));
                    var_37 = (max((!0), ((-(var_11 % var_14)))));

                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_38 = (((((~(~var_15)))) - (((!var_15) ? ((var_3 ? var_7 : var_4)) : (arr_26 [i_0] [i_1] [i_0] [12])))));
                        var_39 = (((-(~var_2))));
                    }
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 13;i_17 += 1)
                        {
                            {
                                var_40 -= -23364;
                                arr_59 [i_1] [i_1] [i_1] [i_1] [i_1] = (min((max(((var_18 ? var_0 : var_10)), ((max(var_10, 0))))), 32760));
                                var_41 = (max(var_41, (((-((((-4787307992215712480 ? 13 : 20547)) + ((max(var_9, var_10))))))))));
                                var_42 = (max(var_42, var_1));
                                var_43 = ((~(((arr_58 [i_1] [i_1] [i_17 + 1] [5] [i_17]) | (var_14 | var_7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_44 += (max(-var_7, (127 > var_10)));
    var_45 = var_14;
    var_46 = (max(var_46, var_2));
    #pragma endscop
}
