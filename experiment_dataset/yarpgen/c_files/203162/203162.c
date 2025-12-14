/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [5] = ((-(arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_16 = ((-(((arr_1 [i_2] [i_1]) - (arr_9 [i_0] [i_1] [i_0] [i_3])))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = 54;
                        var_17 = ((-(arr_4 [i_2] [i_0])));

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_18 |= ((-(arr_8 [i_0] [i_1] [i_2] [i_3])));
                            arr_15 [i_0] [i_1] [i_4] = ((-(arr_7 [i_1])));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_19 = (max(var_19, (((!(arr_9 [i_0] [i_1] [i_3] [i_5]))))));
                            var_20 = 1289994793;
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            var_21 = ((-((-(arr_19 [i_0] [i_1] [i_1] [i_3] [i_6])))));
                            var_22 = (-127 - 1);
                            var_23 = (((arr_9 [i_3] [i_6 - 1] [i_6] [i_6 + 1]) ? (arr_10 [i_1] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_1]) : ((((!(arr_10 [i_0] [i_1] [i_2] [i_1] [i_6] [i_1])))))));
                        }
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_1] [i_3] [i_7] = (((-(arr_7 [i_1]))));
                            var_24 *= ((-(arr_21 [i_3] [i_7] [i_3])));
                            var_25 = (((arr_9 [i_0] [i_2] [i_3] [i_7 + 1]) ? (arr_1 [i_0] [i_2]) : (arr_1 [i_0] [i_7 - 1])));
                            var_26 = (!(arr_14 [i_0] [i_1] [i_2] [i_1] [i_7 - 1]));
                        }
                        var_27 = (((arr_12 [i_1]) * (arr_12 [i_2])));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_28 -= (!65156);

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_29 = ((!(((-(min(-7008563061556978142, -7008563061556978139)))))));
            var_30 = (127 <= -701220207);
            var_31 &= (min((min(((-(arr_5 [6]))), (arr_16 [i_8] [i_8] [i_9] [i_9] [8]))), ((((arr_25 [i_8] [i_9]) ? (((!(arr_17 [i_8] [i_9] [18] [i_9] [i_9])))) : (min((arr_18 [i_9] [i_8] [i_8] [i_8] [i_8]), (arr_13 [i_8] [i_8] [i_9] [i_9] [24]))))))));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_32 = ((-11 ? (min((arr_28 [i_10] [i_8]), (arr_19 [i_8] [i_8] [16] [i_10] [i_10]))) : (min((min((arr_28 [i_10] [i_8]), (arr_27 [i_8] [i_8] [i_10]))), (arr_26 [i_10])))));

            /* vectorizable */
            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {
                var_33 -= ((!(arr_12 [i_11 - 1])));
                var_34 = (((((!(arr_26 [i_11])))) >> (((!(arr_25 [i_8] [i_10]))))));
                var_35 = ((((((arr_21 [i_11] [i_10] [i_11]) <= (arr_7 [i_11])))) / (arr_18 [i_11 + 1] [i_11] [i_11] [9] [i_11 - 2])));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                arr_41 [i_8] [i_8] [i_8] [i_8] = (((arr_27 [i_8] [i_8] [i_12]) / (((arr_28 [i_8] [i_8]) ? (arr_33 [i_12] [i_8] [i_8]) : (arr_4 [i_10] [i_8])))));
                var_36 = ((arr_31 [i_8] [i_10]) + ((-(arr_17 [i_12] [i_12] [i_12] [i_8] [i_8]))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_37 = (((arr_12 [i_10]) + (arr_7 [i_14])));
                            var_38 = (((((-(arr_18 [i_8] [i_8] [i_8] [i_8] [i_8])))) ? (arr_22 [i_8] [i_8] [i_8] [i_8]) : (((!(arr_44 [i_8] [i_8] [i_12] [i_14]))))));
                            var_39 = (((arr_16 [i_10] [i_10] [i_10] [i_10] [i_10]) | (arr_16 [i_12] [i_12] [i_12] [i_12] [i_12])));
                        }
                    }
                }
                var_40 = arr_29 [i_12] [i_10] [i_8];
            }
            var_41 = ((min(134217728, 32271)));
        }
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        arr_52 [i_15] = (((-(((arr_16 [i_15] [i_15] [i_15] [i_15] [i_15]) + (arr_43 [i_15] [0] [i_15] [i_15] [i_15] [i_15]))))));
        var_42 = ((-(arr_36 [i_15] [i_15] [i_15])));
    }
    var_43 ^= var_14;
    #pragma endscop
}
