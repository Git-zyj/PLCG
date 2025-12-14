/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (min(313169399, (min(((31 ? 1041667133 : 31177)), -31177))));
        var_16 ^= ((arr_3 [i_0 - 1]) >= ((min((arr_0 [7]), 3253300163))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_0 + 2] [i_1] [8] [i_0 + 1] [i_0] = (arr_13 [i_0] [i_1] [i_1] [i_3]);
                            var_17 = (min(var_17, ((max((max((var_3 || 31164), (min(var_2, var_3)))), (arr_1 [i_2]))))));
                        }
                        var_18 -= (((min(((~(arr_3 [i_2]))), (arr_10 [i_0 + 3] [i_1] [i_1 - 4] [i_3]))) > (arr_2 [12] [i_1])));
                        arr_15 [i_3] [i_3] [i_3] [i_3] [i_1] = (arr_0 [i_2]);
                        var_19 = (max(var_19, (((!((min(((min(var_1, (arr_3 [i_0])))), (min(31164, -8807823224937067879))))))))));
                        arr_16 [i_1] [i_1 - 3] [i_0 + 3] [i_3] = (min(((-(arr_5 [i_0] [i_1 - 2]))), 16218628198284180074));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_26 [i_8] [i_7] [i_6] [i_5] = (min((min(0, -1665131590999642449)), (arr_25 [12] [9])));
                        arr_27 [i_8] [i_7] [i_7] [i_7] [i_5] [i_5] = (!((min((arr_7 [i_6 - 1] [i_6 - 3]), (max(-877648042742851050, -80))))));
                        var_20 = (min((min(var_6, (arr_11 [i_6] [i_6 + 1] [6] [i_6 - 3] [i_6 - 3] [i_8]))), (min((arr_11 [i_6] [5] [i_6 - 3] [i_6] [i_6 - 3] [i_6 - 3]), 31177))));
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            var_21 = (min(var_0, (((arr_18 [i_5]) >= (min((arr_22 [i_5] [i_5]), (arr_25 [i_5] [i_5])))))));
            var_22 = (min(12518325943198987198, 3253300163));

            for (int i_10 = 2; i_10 < 12;i_10 += 1) /* same iter space */
            {
                arr_32 [i_5] [i_9] [i_10 - 2] = ((var_15 && ((max(-1337924174, (arr_20 [i_5] [i_5]))))));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_23 = (((((max((arr_12 [i_5] [i_9] [i_10] [i_11] [i_11 - 1] [1] [i_12]), (arr_25 [9] [9]))))) ? var_0 : (max(-15701, (min((arr_6 [i_10 + 1]), -20220))))));
                            arr_39 [i_5] [i_9] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((0 ? (arr_35 [i_11 + 2] [i_11 + 3] [i_10 - 2] [i_9 + 2] [i_9 - 1]) : (arr_35 [i_11 + 2] [i_10 + 1] [i_10 + 1] [i_9 + 2] [i_9 + 1]))) >= ((max((arr_37 [i_11 - 1] [i_9] [0] [i_11] [i_9]), (arr_37 [i_11 + 2] [i_9 + 1] [i_11 + 2] [i_10 + 1] [i_9]))))));
                            var_24 = (arr_35 [i_12] [i_11 + 1] [i_5] [i_5] [i_5]);
                            var_25 = (min(var_25, ((max((((arr_35 [i_9 + 1] [12] [i_9] [i_9 + 2] [i_9 + 1]) >> (arr_35 [1] [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1]))), (((arr_35 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 + 1]) ? (arr_35 [i_9 + 2] [i_9] [i_9] [i_9 + 1] [i_9 + 2]) : (arr_35 [i_9] [i_9] [i_9 - 1] [i_9 + 2] [i_9 - 1]))))))));
                            var_26 -= 252;
                        }
                    }
                }
            }
            for (int i_13 = 2; i_13 < 12;i_13 += 1) /* same iter space */
            {
                var_27 *= ((((min(-80, 30151))) ? (min((arr_10 [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 - 1]), var_14)) : 1216452360));
                var_28 = 13312;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            var_29 = (min(var_29, ((((arr_36 [i_15] [i_14] [i_14] [i_13] [i_9] [i_5] [i_5]) ? 3087932906 : (((min(var_14, var_2)))))))));
                            var_30 = ((((max(var_11, 252))) ? (((((arr_8 [i_5] [i_13 - 1] [i_14] [i_15]) ? var_11 : var_7)))) : (arr_31 [i_5] [i_9])));
                            var_31 = (min(var_31, ((min(((-104 ? 20 : ((31 ? 30169 : (arr_41 [i_9] [i_13] [i_14] [i_15]))))), var_12)))));
                            arr_47 [i_9] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = 36;
                        }
                    }
                }
                var_32 &= arr_25 [i_5] [i_5];
            }
            for (int i_16 = 2; i_16 < 12;i_16 += 1) /* same iter space */
            {
                var_33 = var_2;
                arr_50 [i_9] [5] [i_9] [i_16] = max((min(var_5, (arr_6 [i_9 - 1]))), (arr_20 [i_5] [i_16 + 1]));
                var_34 = (max(var_34, ((max((max(((min(0, var_7))), (((arr_41 [i_5] [i_9] [i_16] [i_16]) * var_7)))), (((var_1 ? (max(var_6, var_7)) : 703358301))))))));
                arr_51 [10] [i_9] [i_16] |= (arr_37 [i_5] [i_9] [i_9] [0] [8]);
            }
        }
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
    {
        var_35 += ((max(0, -768998340)));
        var_36 = (min(var_36, (((+((-var_10 * (((arr_18 [i_17]) ? var_3 : 5162399567198777707)))))))));
        arr_54 [i_17] |= (171 > (arr_29 [0]));
    }
    var_37 = var_11;
    var_38 = (((-((31 ? var_6 : 8)))));
    #pragma endscop
}
