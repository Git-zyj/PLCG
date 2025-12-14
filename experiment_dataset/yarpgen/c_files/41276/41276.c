/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_14 = var_4;
        var_15 = (min(var_15, (((0 ? (arr_3 [i_0]) : 59528)))));
        arr_4 [i_0] = (((arr_0 [i_0]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = (min(var_16, (((var_9 < (arr_3 [i_1]))))));
        arr_8 [i_1] [i_1] &= var_2;
        arr_9 [i_1] = (arr_0 [i_1]);
        arr_10 [i_1] |= (((arr_1 [i_1]) % var_1));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_17 -= (max(((-(arr_6 [i_2] [0]))), ((min((arr_6 [15] [i_2]), (arr_6 [i_2] [i_3]))))));
            var_18 = (max(var_18, var_4));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_19 = min((9007112493249178017 != 59535), (min((arr_0 [i_4]), (arr_14 [i_4] [i_2]))));
            var_20 += var_9;
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_21 [i_2] [i_5] = ((((arr_0 [4]) ^ var_13)));
            arr_22 [i_2] = max(((max((arr_3 [i_5]), (arr_3 [i_5])))), ((~(((-6275643562566907219 + 9223372036854775807) >> (-2533330450563868508 + 2533330450563868527))))));
            var_21 -= 15;
        }

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                var_22 *= ((var_13 == (121 & 6275643562566907233)));
                var_23 = (((arr_16 [i_7 - 1] [8] [i_7]) / (arr_16 [i_7 - 1] [i_7] [i_7])));
                arr_27 [i_7] [i_6] = (arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1]);
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_24 = ((arr_30 [i_2] [i_2] [i_2]) != (arr_30 [i_2] [i_6] [i_8]));
                arr_31 [i_2] [1] [i_2] [i_2] = ((1352569995 ? 56 : 18446743798831644672));
            }
            var_25 = (arr_30 [i_6] [i_6] [i_2]);

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_26 += (((arr_16 [i_9] [i_6] [i_2]) ^ (arr_16 [i_2] [i_6] [12])));
                var_27 = (min(var_27, (((var_13 ? (274877906944 ^ 6016) : ((~(arr_2 [1]))))))));
                var_28 = (min(var_28, (arr_0 [i_2])));
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                arr_36 [5] [i_2] [4] [i_2] = -16;

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_29 = var_6;
                    arr_39 [i_2] [4] [i_6] [6] [5] [i_11] = (max((min(-9223372036854775781, (arr_6 [16] [i_11]))), (((arr_5 [i_10]) + (var_5 - 1)))));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_30 = (min(var_11, (((~2566486626429882961) << (125 - 98)))));
                    arr_42 [i_2] [7] [i_10] [1] [i_12] &= (arr_3 [i_2]);
                    var_31 = (max(((511 << (((arr_1 [i_2]) - 1786693299923940591)))), (arr_1 [i_2])));
                    var_32 = arr_16 [i_10] [i_10] [i_10];
                    arr_43 [i_2] [i_2] [i_10] [i_12] = ((((max((arr_37 [i_10] [i_10] [i_10] [i_10]), (arr_37 [i_2] [i_2] [i_2] [5])))) ? (((arr_37 [i_2] [i_2] [i_2] [i_2]) ? (arr_37 [i_2] [1] [5] [i_12]) : (arr_37 [i_2] [0] [i_10] [0]))) : (((arr_37 [i_2] [i_2] [i_10] [i_12]) ? (arr_37 [i_12] [i_6] [i_6] [i_2]) : (arr_37 [i_2] [i_6] [i_10] [i_10])))));
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    var_33 = (min(var_33, var_10));
                    var_34 = ((((var_0 ? (max((arr_34 [i_2] [1] [i_10] [i_13]), (arr_37 [11] [i_6] [1] [i_13]))) : 15))) && var_5);
                    var_35 = (((arr_40 [i_2]) && (((((max((arr_16 [i_6] [1] [i_13]), 1))) ? (max(var_13, -4158908683225344321)) : (max(855982046395636463, -1352570002)))))));
                    var_36 = (min(var_36, (arr_25 [i_13])));
                }
                for (int i_14 = 1; i_14 < 12;i_14 += 1)
                {
                    var_37 |= (-22 & -231868923580706864);
                    var_38 = var_9;
                }

                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    arr_50 [i_15] [i_2] [i_10] [i_15] [1] = (((arr_20 [i_2] [i_2]) / (min(((var_11 ? var_9 : (arr_38 [i_2] [i_2] [i_6] [i_10] [3] [i_2]))), (arr_32 [i_2] [i_10] [i_15])))));
                    var_39 ^= 9124614638475211373;
                    var_40 = (arr_23 [i_10]);
                }
                arr_51 [i_2] [i_2] [i_2] [i_2] = (arr_23 [i_2]);
            }
        }
        var_41 ^= 1;
    }
    var_42 ^= (var_12 ? 3502179071717932429 : var_12);
    #pragma endscop
}
