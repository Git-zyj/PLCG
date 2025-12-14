/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = ((!(((1 ? (((max(24398, 20222)))) : -7957775974528018262)))));
                    var_16 = (min(var_16, (((((~(~7957775974528018240))) | ((max((arr_0 [i_1 - 1]), (max((arr_5 [i_1 - 1]), var_15))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                arr_12 [i_3] [i_4] [i_4] = (min((((~(arr_10 [i_3] [i_4] [i_4])))), (max(((7957775974528018279 ? -962766712554373385 : 169)), (var_13 > var_10)))));
                var_17 = (min(var_17, ((((arr_0 [i_4]) ? (((!var_7) % (27987 | -108))) : (!var_7))))));

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_18 = (min(var_18, (((!((((((arr_11 [14] [i_4] [i_4]) * 14848)) << (((((-7957775974528018262 + 112) + 7957775974528018156)) - 5))))))))));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_19 = -1291416679;
                        arr_18 [i_3] [i_3] = (((((7957775974528018262 + var_13) ? (50750 - var_7) : 1)) & (!var_12)));

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_21 [i_3] [i_4] [i_5] [i_6] [i_3] = ((max(50743, (var_10 / var_8))));
                            var_20 = (min(var_20, ((max((min(0, 14773)), (!80))))));
                        }

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            var_21 = (min(var_21, (((!(!119))))));
                            arr_24 [i_3] [i_5 + 4] [i_3] [i_8] = (((!var_6) << (50750 - 50735)));
                            arr_25 [i_3] [i_3] [i_6] = (arr_3 [i_3] [i_3]);
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_22 ^= ((((104 ? (arr_13 [i_6] [i_5 + 1] [13] [i_3]) : (arr_13 [4] [i_5 + 2] [7] [7]))) << (((max((arr_13 [i_4] [i_5 - 1] [i_5 + 2] [i_6]), (arr_13 [i_3] [i_5 + 4] [i_6] [i_5]))) - 1176766969))));
                            var_23 = ((!((!(~var_10)))));
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {

                    for (int i_11 = 4; i_11 < 15;i_11 += 1)
                    {
                        var_24 = (max(var_24, ((((!98) ? (arr_22 [i_10] [i_10] [i_4] [i_11 + 1] [10] [i_11 + 1] [i_10]) : (((arr_9 [i_3]) ? (arr_20 [12] [12] [i_10] [i_11 - 4] [i_3]) : var_10)))))));
                        var_25 = (min(var_25, (arr_13 [i_11 + 2] [i_11 + 1] [i_11 - 1] [i_11 + 2])));
                        arr_33 [i_3] [i_4] = ((!(arr_29 [i_11 - 4] [i_3] [i_11 - 1] [i_11 - 1])));
                        var_26 = ((!(((arr_19 [11] [14] [14] [14] [i_11 - 3]) || 2097151))));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, (!var_3)));

                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            var_28 *= ((!((!(arr_7 [i_12])))));
                            var_29 = ((!(arr_27 [i_13 + 1] [i_13 + 1] [11] [i_13 + 1] [i_13 + 1] [i_13])));
                            var_30 = var_8;
                        }
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            var_31 -= -104;
                            var_32 = (arr_13 [i_4] [i_10] [i_12] [i_14]);
                        }

                        for (int i_15 = 3; i_15 < 15;i_15 += 1)
                        {
                            var_33 = (arr_9 [0]);
                            var_34 = (!65509);
                        }
                        arr_43 [i_4] [i_4] [i_4] [i_4] &= (((var_15 ? var_9 : (arr_0 [i_10]))) ^ 26);
                    }
                    for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
                    {
                        arr_48 [i_16] [i_3] [i_3] [i_3] = ((!(arr_2 [i_3])));
                        arr_49 [i_3] [i_3] [13] [i_16] = (~10905);
                        var_35 ^= ((!(((32659 ? var_2 : var_7)))));
                        var_36 = ((+(((arr_38 [i_4] [i_4]) + 145))));
                    }
                    var_37 ^= 2789257357076855331;
                }
                var_38 += (max((var_15 > 13), ((~(arr_8 [i_3])))));
            }
        }
    }
    #pragma endscop
}
