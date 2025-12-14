/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((((((min(884035669, 1)) ^ (var_7 >= var_11)))) ? var_2 : var_12));
    var_15 &= ((max((max(10, 884035669)), ((1 ? var_1 : var_7)))));
    var_16 = ((3025977565 ? var_11 : (((var_8 == var_4) >> ((var_2 ? var_11 : var_3))))));
    var_17 = (((((!((max(var_10, var_4)))))) > (var_3 > var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [8] [17] [i_0] [i_0] = ((((3025977536 == (arr_7 [i_0] [i_1] [i_2])) ? (~var_10) : (min(10, 3324201624)))));
                            arr_11 [i_1] |= (((arr_3 [i_2]) >> (min((arr_2 [i_2 + 1] [i_2 - 2] [i_2 - 2]), (arr_1 [i_3])))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (+(((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (arr_14 [i_0] [i_0] [20] [i_0] [i_3] [i_0]) : (arr_13 [i_0] [15] [i_2] [i_3] [i_4]))));
                                var_18 ^= (((arr_7 [i_0] [i_1] [i_2]) ? (arr_13 [i_0] [17] [i_0] [i_0] [i_0]) : 10526));
                            }
                            for (int i_5 = 2; i_5 < 21;i_5 += 1)
                            {
                                arr_19 [i_0] [i_0] = (min((((!(var_12 >= 2393768716)))), (((3253509574 > (arr_8 [i_0] [i_1] [i_2] [i_3] [i_5] [20]))))));
                                arr_20 [19] [i_1] [0] [i_3] [i_0] = (arr_18 [i_5] [i_3] [i_0] [i_2 + 1] [i_1] [i_0]);
                                arr_21 [i_5] [i_0] [i_2] [i_0] [i_0] = max(((((max((arr_9 [i_0] [1] [i_0] [15] [i_0]), (arr_12 [i_0] [i_0] [16] [i_0])))) ? var_7 : ((var_2 ? -2291 : 1901198580)))), ((((~48276) & (arr_18 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 1])))));
                            }
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {

                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        arr_26 [i_0] [i_1] [0] [i_6] [i_7] &= ((-(var_9 / var_3)));

                        for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_0] [i_8] = 970765670;
                            arr_32 [i_0] [i_1] [i_0] [i_0] [i_8] = var_3;
                            var_19 *= var_11;
                        }
                        for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_6] = ((10540 == (~var_9)));
                            arr_36 [i_0] [i_0] [i_6] [i_7] [i_0] = (((arr_1 [3]) ^ (max((max(8770350554900194988, -1447141354424850133)), 30318))));
                        }
                        arr_37 [17] [i_1] [i_1] [i_0] [21] = ((0 > ((~(arr_23 [i_0])))));
                        arr_38 [i_0] [1] [i_0] [i_0] [i_0] [i_0] = ((+(max((-29839 > 2), (max((arr_16 [i_0] [16]), 0))))));

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_20 = (min(var_20, ((max((arr_14 [20] [i_1] [i_1] [i_1] [i_1] [i_1]), (((arr_12 [i_7] [i_7] [i_7 - 2] [i_7]) ? (arr_30 [16] [i_7] [i_0] [i_0] [i_0] [i_0]) : (((48283 >> (((arr_5 [i_6] [i_6] [i_6] [i_6]) - 2010791659046393608))))))))))));
                            var_21 = (max(((min(((var_1 ? (arr_12 [i_0] [i_1] [20] [i_7 - 2]) : (arr_25 [i_0]))), ((max(var_4, 1)))))), ((-(max((arr_16 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
                            var_22 ^= (0 + 182);
                        }
                    }
                    arr_42 [i_6] |= (max((((((!(arr_23 [i_6]))) ? (max(var_1, (arr_30 [10] [i_0] [i_0] [i_1] [i_1] [i_6]))) : 652891195))), ((max((arr_29 [i_0]), 0)))));
                }
                /* vectorizable */
                for (int i_11 = 2; i_11 < 19;i_11 += 1)
                {
                    arr_46 [18] [i_1] [i_11 - 1] &= (arr_6 [i_0] [i_1] [i_11 + 3]);
                    var_23 += ((((879800964 > (arr_12 [i_0] [i_1] [i_11] [i_0]))) ? (((var_12 > (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [17])))) : (arr_28 [i_0] [i_0])));
                    var_24 = (arr_33 [i_11 - 2]);
                }
                arr_47 [i_0] = (max(((max(var_8, (max((arr_8 [i_0] [i_0] [i_0] [17] [i_0] [i_0]), (arr_27 [1] [i_0] [i_0] [i_0] [i_0])))))), ((((max((arr_4 [i_0]), (arr_23 [i_0])))) ? (((((arr_30 [14] [i_1] [16] [i_1] [i_1] [i_1]) == (arr_4 [i_0]))))) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
