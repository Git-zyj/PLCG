/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_13);

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = ((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 1]) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))));
        var_21 |= (((arr_1 [i_0 - 1]) ? (min((arr_0 [i_0 + 1]), (arr_2 [i_0 + 2] [8]))) : (max((((var_3 ? (arr_2 [i_0] [10]) : (arr_1 [i_0])))), (((arr_1 [i_0]) ? (arr_0 [i_0]) : -550320733))))));
    }
    var_22 = (min(-var_18, ((var_17 << (var_7 - 76)))));
    var_23 = ((var_3 != ((((var_5 ? -9691 : var_15))))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_17 [i_2] [i_2] [i_2] [3] [i_5] = (((~2) ? (arr_3 [i_1]) : (((~(arr_8 [7] [i_4]))))));
                            arr_18 [i_1] [i_1] [i_3] [i_5] = ((!((((arr_15 [i_4] [i_4] [i_4] [i_4] [2] [i_4]) ? var_14 : var_16)))));
                        }
                        var_24 = (arr_5 [i_1]);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_25 = ((((((max((arr_11 [i_1]), var_14))) ? 9688 : (arr_11 [i_3]))) - (var_15 != 9691)));
                        arr_21 [i_1] [i_1] [i_2] [i_3] [i_6] [i_6] = (arr_16 [i_6]);
                        arr_22 [i_1] = ((((-1 - 111) & (var_15 + var_13))));

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_1 - 1] = ((((((arr_9 [i_1] [i_1 - 1] [i_3] [i_6]) ? ((169 ? var_16 : (arr_8 [i_1] [i_1]))) : (arr_20 [i_7] [i_7] [i_7 - 1])))) ? (arr_11 [i_7]) : ((((min(9680, (arr_15 [i_1] [i_1] [i_1] [i_6] [i_7] [i_1])))) ? ((~(arr_24 [8] [i_2] [i_2] [i_3] [i_6] [i_7 - 1]))) : (arr_24 [i_1] [i_7 - 1] [i_3] [10] [i_2] [i_6])))));
                            var_26 -= (min((arr_15 [i_7 - 1] [8] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]), (arr_15 [i_7 - 1] [4] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])));
                            arr_26 [i_6] [i_6] [i_3] [i_6] [6] [i_6] = (max((max(((~(arr_24 [i_1] [i_1] [i_1] [5] [i_1] [i_1]))), (((arr_19 [i_7]) ? (arr_14 [i_3] [i_3] [i_3]) : (arr_7 [i_1 - 1] [i_1]))))), 1159437782));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_31 [7] = ((((((arr_3 [i_9]) - (arr_16 [i_1])))) ? ((((((arr_12 [2] [i_2]) >> (((arr_7 [i_3] [i_3]) - 14143)))) - (arr_29 [i_8] [i_8] [i_8] [6] [1])))) : (((arr_20 [i_1] [i_1] [i_1]) ? -9675 : var_10))));
                                arr_32 [i_1] = (((((arr_15 [i_1] [i_1] [i_1] [i_3] [i_8] [i_1]) - (arr_10 [i_1])))) ? (((~var_7) ? (arr_14 [i_2] [i_2] [i_2]) : (arr_23 [i_1] [i_1 - 1] [i_1]))) : (((!(arr_8 [i_1 - 1] [i_1 - 1])))));
                                arr_33 [i_1 - 1] [i_1] [9] = (max((arr_14 [5] [i_8] [i_8]), (arr_6 [i_1 - 1])));
                            }
                        }
                    }
                    arr_34 [i_1 - 1] [0] = ((+(((arr_3 [i_1 - 1]) >> (((arr_3 [i_1 - 1]) - 2596267415))))));
                    arr_35 [i_3] [i_3] = ((((max(((min(var_3, 32760))), (arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? (((((min(var_0, var_9)))) + (~var_5))) : (((min((!2147483647), -43))))));
                    var_27 = (arr_19 [i_2]);
                }
                var_28 = (((((var_4 ? (arr_12 [i_1 - 1] [i_1 - 1]) : (arr_12 [i_1 - 1] [i_1 - 1])))) ? (((arr_12 [i_1 - 1] [i_1 - 1]) ? (arr_16 [i_1 - 1]) : (arr_16 [i_1 - 1]))) : ((~(arr_16 [i_1 - 1])))));

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_29 = (min(var_29, (((-((-(min((arr_28 [i_1] [i_1] [i_1] [5] [i_10] [i_1]), var_2)))))))));
                    arr_38 [i_1] [i_1] [i_1] = ((((((32772 ? 32772 : (arr_6 [i_1]))) != (arr_37 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])))));
                }
                arr_39 [i_1] = ((((var_0 % (arr_19 [i_1])))));
                var_30 += var_7;
            }
        }
    }
    #pragma endscop
}
