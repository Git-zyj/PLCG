/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = (((max((arr_2 [i_1] [i_1]), (arr_3 [i_3] [i_1] [i_1])))) % (min((arr_6 [i_1 - 1] [i_1] [i_3 + 2]), ((17 ? 576460752286646272 : 1)))));
                            arr_9 [i_0] [i_1] [i_2] [i_1] = (max((arr_4 [i_0] [i_1] [i_1]), ((min(((76 ? (arr_5 [i_1] [i_2] [i_0] [i_1]) : (arr_0 [1] [1]))), ((var_0 ? (arr_2 [i_1] [i_1]) : (arr_5 [i_0] [i_0] [i_1] [i_1]))))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_15 = 0;
                    var_16 = ((((!(arr_5 [i_0] [i_0] [i_0] [i_1])))));
                    arr_12 [i_0] [i_0] [i_1] = ((+(((arr_5 [1] [i_0] [1] [i_1]) ? var_4 : ((((arr_7 [i_1] [i_1] [i_4] [i_1]) % 149)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [i_1 + 1] [i_4] [i_5] [2] [i_6] = -var_10;
                                var_17 &= ((!(arr_4 [i_5] [i_0] [i_0])));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_4] = ((((max((arr_7 [i_1] [i_1 + 1] [i_1] [i_1 + 1]), (arr_10 [i_1] [i_1] [7])))) ? 6306667750699362815 : (arr_5 [i_0] [i_0] [i_1] [i_1])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    var_18 = (((arr_2 [i_1] [i_1 + 1]) ? (arr_2 [i_1] [i_1 - 1]) : (arr_4 [i_1] [i_1 + 1] [i_1 + 1])));
                    arr_21 [i_1] [i_1] = (arr_2 [i_1] [i_1 + 1]);
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    var_19 = (((-1 ? ((max(1, -30571)) : 2054108054))));
                    var_20 = (((arr_22 [i_1 - 1] [i_1] [i_1 + 1]) ? (((var_10 < 9) ^ 1)) : ((((arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) && (arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))))));
                    arr_25 [i_0] [i_1] [9] = (min((((min(var_5, (arr_11 [i_0] [i_0] [i_0] [i_0]))))), (((!(((var_7 ? var_13 : (arr_10 [i_8] [i_1] [1])))))))));
                    var_21 = (arr_0 [11] [i_0]);
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_22 = ((arr_22 [i_0] [i_1] [i_9]) ? (min((arr_22 [i_0] [i_1 + 1] [i_9]), var_11)) : (min((arr_22 [i_1] [i_1] [i_0]), -90)));
                    arr_30 [i_1] = (arr_5 [i_0] [i_0] [i_0] [i_1]);
                    var_23 &= ((((((arr_5 [i_0] [i_0] [i_9] [i_9]) ? (arr_5 [i_0] [i_0] [i_0] [i_9]) : 2575717114))) ? ((var_1 ? ((20 ? -30961 : 1)) : (arr_0 [i_1 + 1] [9]))) : 69));
                    var_24 |= ((var_13 ? ((((((0 < (arr_7 [i_0] [i_1] [2] [i_0]))))) / ((16757 ? (arr_14 [i_0] [i_0] [i_1] [i_9]) : var_4)))) : ((min((arr_20 [i_0] [i_0] [i_0]), var_10)))));
                }
                arr_31 [i_1] = -1;
                var_25 = (min(((max((arr_14 [i_0] [i_1] [1] [i_1 + 1]), (min(235, var_2))))), (((((var_13 ? 215 : (-127 - 1)))) ? ((((arr_1 [i_1]) ? var_9 : var_1))) : 268435392))));
            }
        }
    }
    var_26 = var_9;
    var_27 = ((~(((~var_3) | var_2))));
    var_28 *= (max(var_0, (var_5 || var_1)));
    var_29 = ((((min((var_1 - var_4), var_6))) ? (max(var_13, ((var_4 ? var_2 : 12)))) : (((var_3 > ((min(var_8, var_8))))))));
    #pragma endscop
}
