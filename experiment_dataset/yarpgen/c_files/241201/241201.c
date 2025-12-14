/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_6 ? var_0 : (!var_2)))) ? ((46829 ? -1792552745 : (-127 - 1))) : (((((var_6 ? var_7 : var_2))) ? var_9 : ((var_6 ? var_9 : var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_3] [i_0] [i_4] = ((~(arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])));
                                var_11 ^= ((-(((arr_5 [i_2] [i_3]) << (((-1477971531 - 0) + 1477971549))))));
                            }
                        }
                    }
                    var_12 = ((((max(0, -16384))) * ((min(var_6, (arr_3 [i_0] [i_0]))))));
                    var_13 = (((((!((min(3690892786, 65514)))))) < ((~(~1)))));
                    arr_11 [i_1] = ((var_6 ? (arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0]) : ((min((arr_2 [i_1]), -1)))));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        arr_14 [i_5] = ((!(((~(arr_6 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0]))))));

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_14 = (((arr_1 [i_1] [i_6]) ? ((min(32767, 252))) : (arr_1 [i_0] [i_0])));
                            arr_19 [i_5] [i_1] [i_2] [i_5] [i_5] [i_6] = (((((1 ? 5 : var_0))) && (arr_12 [i_0] [i_1] [i_2] [i_5])));
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] = (min(-26986, 65502));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_15 -= ((((var_3 << (var_9 - 134))) | 82));
                            arr_23 [i_5] = var_1;
                            arr_24 [i_5] [i_5] [i_7] = arr_16 [i_0] [i_1] [i_2];
                        }
                        arr_25 [i_0] [i_0] [i_0] [i_5] = ((+(((!0) & 52))));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_32 [i_0] [i_1] [i_2] [i_9] = 32767;
                            arr_33 [i_0] [i_0] [i_2] [i_8] = (~var_9);
                            var_16 = ((~(arr_2 [i_0])));
                        }
                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            var_17 = 127;
                            var_18 = -16384;
                            var_19 -= var_1;
                            var_20 &= (((arr_27 [i_0]) << ((((((arr_5 [i_0] [i_0]) | var_8))) ? ((((arr_3 [i_0] [i_10]) < (arr_30 [i_10] [i_8] [i_2] [i_1] [i_0])))) : var_8))));
                        }
                        var_21 = ((var_9 > (((((arr_29 [i_0] [i_0] [i_1] [i_1] [i_2] [i_8]) >> 1))))));
                        arr_36 [i_8] [i_8] = ((((-7764 ? var_1 : ((max(2216, -4199)))))) ? 2216 : (((arr_18 [i_0] [i_1] [i_2] [i_8] [i_8]) >> ((((min((arr_16 [i_0] [i_1] [i_2]), var_0))) + 14672)))));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_11] [i_1] [i_11] = min((((!(arr_30 [i_0] [i_1] [i_1] [i_11] [i_1])))), var_7);
                        arr_40 [i_11] [i_1] [i_2] [i_2] [i_11] = 24;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_44 [i_0] = (((arr_27 [i_0]) > (arr_0 [i_0] [i_1])));

                        for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, (((-((((arr_43 [i_0] [i_1] [i_0] [i_12] [i_12] [i_12]) || (arr_3 [i_0] [i_1])))))))));
                            var_23 = (((((~(arr_3 [i_1] [i_1])))) ? (~1213758558) : ((min((arr_12 [i_0] [i_1] [i_12] [i_13]), (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_24 = (arr_45 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_47 [i_0] [i_1] [i_2] [i_12] [i_0] = (arr_41 [i_0] [i_1] [i_1] [i_2] [i_12] [i_0]);
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
                        {
                            arr_51 [i_1] [i_12] [i_2] [i_1] [i_0] = (((((!(((-(arr_12 [i_1] [i_2] [i_12] [i_14]))))))) ^ (((!(((var_5 ? 60 : 255))))))));
                            arr_52 [i_0] [i_0] [i_0] [i_0] = ((190 ? var_0 : ((max((arr_48 [i_0] [i_1] [i_2] [i_12] [i_14]), (arr_18 [i_0] [i_1] [i_1] [i_12] [i_14]))))));
                            var_25 += (112 + var_3);
                        }
                    }
                }
            }
        }
    }
    var_26 = 58989;
    #pragma endscop
}
