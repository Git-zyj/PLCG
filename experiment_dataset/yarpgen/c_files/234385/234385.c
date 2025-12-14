/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_11);
    var_18 &= (min(var_10, var_3));
    var_19 |= ((((-1551577365 ? -var_12 : (min(127, 6454363792738776626)))) * var_6));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max((((arr_0 [i_0]) + -850797433)), (((1 ? var_3 : 84)))));
        var_21 *= (min((arr_2 [i_0]), 1));
        var_22 *= -30069;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_23 = (min(var_23, (((((max((arr_4 [i_1]), (arr_3 [i_1])))) ? (1 || -5555416793183634556) : (min((arr_4 [i_1]), (arr_3 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_24 += (max(-1, 4964607417502000714));
                    var_25 -= var_2;
                    var_26 = (((min(9166332167739621587, 1)) != (arr_8 [i_1] [i_1])));
                }
            }
        }
        arr_12 [i_1] = ((((max((((arr_7 [i_1] [i_1]) ? 4161321830 : var_11)), ((min((arr_6 [i_1] [i_1] [i_1]), 133645465)))))) ? var_0 : var_0));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_27 = var_15;

                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_1] [i_1] = ((((~90) ? 2088508843 : (var_15 && 134217728))));
                        var_28 = (126 / 65);
                        var_29 = (min(var_3, var_5));
                        var_30 = ((((((arr_13 [i_1]) ? (arr_13 [i_5]) : (arr_13 [i_1])))) ? (((arr_13 [i_5]) & 0)) : (((arr_13 [i_4]) ? (arr_13 [i_6]) : 0))));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        var_31 = (max(9223372036854775807, -29));

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_32 *= var_13;
                            arr_25 [i_8] [i_8] [i_8] [i_1] [i_8] [i_8] = ((-((var_12 ? -var_0 : var_5))));
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_33 = ((((4095 ? var_10 : var_1))));
                            var_34 = (arr_26 [i_9 - 1] [i_1] [i_1] [i_7] [i_7]);
                        }
                        var_35 -= ((((max(98, (arr_10 [i_4])))) ? var_16 : ((((arr_10 [i_5]) ? (arr_10 [i_1]) : (arr_10 [i_7]))))));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_36 = (((((arr_28 [i_1]) ? (arr_28 [i_10]) : var_4)) | ((((((0 ? var_9 : (arr_23 [i_7] [i_7] [i_7] [i_7] [i_7]))) >= ((((var_4 == (arr_14 [i_1])))))))))));
                            var_37 = ((1551577364 ? ((0 ? 2533681360307977757 : 4161321830)) : 3618617224852772781));
                            var_38 = var_5;
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            var_39 = (arr_23 [i_1] [i_1] [i_5] [i_7] [i_11]);
                            arr_35 [i_1] [i_4] [i_5] [i_1] [i_11 - 1] = 8128606570930098148;
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_40 = var_16;
                            var_41 = (min(var_41, ((((((var_1 | (arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [1])))) ? ((var_7 & (arr_21 [i_4] [i_5] [i_12]))) : (arr_10 [i_1]))))));
                            var_42 = ((var_0 <= (((var_10 ? var_1 : (arr_14 [i_1]))))));
                        }
                        arr_40 [i_1] [i_1] [2] [12] = (max(1551577365, 119));
                    }
                    var_43 = (max((arr_21 [i_4] [i_4] [i_5]), (min(var_13, var_11))));
                }
            }
        }
    }
    #pragma endscop
}
