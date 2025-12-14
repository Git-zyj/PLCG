/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = ((~(((!(((arr_1 [i_0]) && (arr_0 [i_1] [i_1]))))))));
                arr_5 [i_0] = -var_14;

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_1] [i_2] = (-974348423187801376 * 409268607954484733);
                    var_17 = ((1 ? -7588 : 4294967290));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_18 = (((((!((((arr_2 [i_0] [i_0] [i_0]) | 18037475465755066882)))))) >= ((-(arr_3 [i_0])))));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_17 [i_4] [i_1] = 1;
                        arr_18 [i_0] [i_1] [i_0] [i_4] [i_3] [i_4] = (!var_11);
                        var_19 = (var_5 & 28);
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_5] [i_5] [i_1] = -25251;
                        arr_23 [i_3] = ((((-var_1 || (-5901949046202347609 | var_1))) || ((!(!var_8)))));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_20 = -31148;
                            var_21 = ((50 < (((~18037475465755066891) & (!0)))));
                            arr_27 [i_0] [i_1] [i_1] [i_0] [i_5] [i_6] = (!61118);
                        }
                        var_22 = (108 | 9187343239835811840);
                        arr_28 [i_0] [i_1] [i_3] = ((4398046380032 < (~17843)));
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_7] [i_7] = (((((var_11 % ((((arr_4 [i_1] [i_3] [i_7]) | 4294967288)))))) ? 0 : (((arr_26 [i_7] [i_3] [i_1] [i_1] [i_0] [i_7]) | (var_1 || -30787)))));
                        arr_32 [i_0] [i_1] [i_3] [i_3] [i_7] [i_7] = ((((9162717572630395619 ? 37563 : (-94 % 9162717572630395618)))) || 1073741824);
                        arr_33 [i_7] [i_1] = ((((~(arr_3 [i_1])))) ? (~var_8) : (arr_3 [i_3]));
                    }
                    arr_34 [i_0] [i_0] [i_0] = 1;
                    arr_35 [i_0] [i_0] = (-((-14675 ? (arr_21 [i_0] [i_0] [i_1] [i_3]) : (arr_21 [i_1] [i_1] [i_1] [i_0]))));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_44 [i_0] [i_0] [i_1] [i_8] [i_8] [i_8] [i_8] = ((1413692188 & (((~((((-127 - 1) != var_5))))))));
                                var_23 = ((var_12 ? (arr_38 [i_0] [i_1] [i_8]) : (((((arr_7 [i_0] [i_1] [i_8] [i_9]) >= var_2))))));
                            }
                        }
                    }
                    var_24 = 0;
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_25 = 41044;
                    arr_47 [i_11] [i_11] [i_11] [i_0] = ((!(arr_38 [i_11] [i_1] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            {
                arr_53 [i_12] = ((((-(9284026501079155997 - var_13))) * (((0 / (23 / var_5))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_26 = 32640;
                            arr_61 [i_12] = (arr_46 [i_13] [i_13] [i_13] [i_13]);
                            arr_62 [i_12] [i_12] [i_13] [i_14] [i_15] [i_12] = 3;
                        }
                    }
                }
                var_27 = (((((~(!1)))) + 245322229));
            }
        }
    }
    var_28 = (-2 * var_0);
    #pragma endscop
}
