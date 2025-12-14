/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (var_13 / -var_2)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = ((-((((max(12113, 90))) + ((min(194, 8184)))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_20 = (arr_2 [i_0]);
            var_21 = (((max(var_10, (var_6 / var_17))) * var_16));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        {
                            var_22 = (((((((min(4136379266, var_2))) ? (arr_1 [i_3]) : 11))) ? var_5 : (((((var_14 ? -11 : var_13)) < (var_1 ^ 68))))));
                            var_23 -= arr_7 [3];
                        }
                    }
                }
                var_24 = 1;
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                arr_18 [i_0] [4] |= (((!-var_14) ? (min(((-(arr_7 [i_0]))), ((min((arr_4 [i_0]), (arr_16 [i_0] [i_2 + 1] [10] [i_6])))))) : 218));
                arr_19 [i_6] [8] [8] [i_0] &= ((1 < (min(1277337463, -4))));
                arr_20 [i_2] [i_2 + 1] [i_0] = (((((arr_13 [i_2] [i_2] [i_6] [i_2] [i_2 + 1]) - (arr_9 [i_0] [i_2 - 1] [i_6] [3]))) >= ((min((arr_13 [i_0] [i_2 + 1] [i_6] [i_0] [i_2 + 1]), -29109)))));
                var_25 = (max(var_25, ((-(min(-29109, (arr_0 [6])))))));
            }
            var_26 = (max(var_26, (((-(((!(((arr_8 [i_0] [i_0] [i_0]) >= var_12))))))))));
            arr_21 [i_0] = ((-(arr_13 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 1])));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_27 = (min(var_27, ((min((((var_3 ^ 38) << (arr_22 [0] [i_7] [0]))), var_9)))));
            arr_25 [i_0] [i_7] [i_0] = ((((((max(var_3, 5704))) >> (((arr_7 [i_0]) + 9994)))) / ((min((arr_13 [i_0] [8] [i_0] [i_7] [i_0]), (arr_16 [i_0] [i_7] [i_0] [i_7]))))));
            var_28 &= ((-((min((arr_10 [i_7] [i_7] [i_0]), var_1)))));

            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
            {
                var_29 = arr_4 [i_0];
                var_30 = ((-(((arr_26 [i_0] [i_7] [i_8] [i_7]) ? var_0 : (arr_26 [i_0] [i_0] [i_7] [i_8])))));

                /* vectorizable */
                for (int i_9 = 2; i_9 < 8;i_9 += 1)
                {
                    var_31 |= (!26);
                    arr_32 [i_9] [i_0] [i_8] = ((-(((arr_27 [i_7] [i_0] [i_9]) ? 211 : (arr_9 [i_0] [i_7] [i_8] [i_9])))));
                    arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (--124);
                    var_32 *= -3017629834;
                    var_33 &= arr_9 [i_9 + 3] [i_9 - 1] [i_9 + 3] [i_9 - 2];
                }
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    arr_36 [i_0] [i_8] [i_7] [i_0] = ((((!(arr_26 [i_0] [i_10 - 1] [i_8] [i_10 - 1]))) ? (arr_26 [i_0] [i_10 + 1] [i_0] [8]) : ((max(var_5, var_7)))));
                    arr_37 [i_0] [i_0] = var_16;
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    arr_40 [i_0] [i_0] = ((-var_0 - (arr_39 [i_0] [i_8] [8] [i_0])));
                    var_34 = 38;
                }
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
            {
                var_35 = ((((min((var_12 & 212448822), 255))) ? ((68 ? -27145 : 37)) : 37));
                arr_44 [i_0] [i_7] [i_12] = (min((arr_42 [i_7] [i_0]), ((var_4 ? (var_15 % var_6) : ((max(15756, var_4)))))));
                var_36 += 2858596839;
            }
            var_37 = 100;
        }
        arr_45 [i_0] [i_0] = min(var_13, (((~(((arr_16 [i_0] [i_0] [i_0] [i_0]) ^ 10))))));
        var_38 -= ((-(((!((min(324117750, 27928))))))));
        var_39 *= (((min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0]))) | 4294967281));
    }

    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {
        arr_48 [i_13] = (((((arr_46 [i_13]) ? (~38) : ((-32764 ? 2875006400 : 0)))) - (((-((41 ? var_4 : -21975)))))));
        var_40 = (min(var_40, (((((~(arr_46 [i_13]))) * (((!(arr_47 [16])))))))));
        var_41 += (((arr_46 [i_13]) ? ((-((var_0 / (arr_46 [i_13]))))) : (((!(arr_47 [10]))))));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {
        var_42 = (min(((-((26388 & (arr_50 [i_14]))))), (arr_47 [i_14])));
        var_43 = (max(var_43, ((min((min(((min((arr_50 [i_14]), (arr_49 [i_14])))), -var_11)), ((min(-29407, (min(var_10, 95))))))))));
    }
    var_44 = (((min(((min(31940, var_10))), ((var_10 ? var_8 : var_5)))) / var_8));
    var_45 *= ((((((min(var_5, 255))) / var_12)) - var_8));
    #pragma endscop
}
