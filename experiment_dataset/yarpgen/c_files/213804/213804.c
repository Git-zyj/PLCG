/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 = (max(var_21, ((((var_9 || var_3) <= (((min(var_7, 3269022633)) | (((max(-1, var_3)))))))))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_1] = (min((min(var_2, (~var_19))), var_9));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_9 [i_2] = (~32);
                var_22 ^= (((((~(-127 - 1)))) ? (~var_10) : var_8));

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_13 [i_2] [i_3] = (min(var_5, (arr_12 [6] [i_1] [i_2] [5] [6] [i_3])));
                    arr_14 [11] [i_3] [i_2] [i_3] [i_3] [i_2] = ((!(((var_1 ? (((~(arr_12 [0] [i_0] [i_1] [i_1] [i_2] [2])))) : ((~(arr_7 [i_1] [i_1] [i_1]))))))));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    arr_17 [i_4] [i_4] = ((+(((4154393370 - var_13) ? 6 : (~18)))));
                    var_23 *= var_5;
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_24 = ((~(max((arr_18 [i_5] [i_2] [i_1] [i_0]), ((min(var_7, -23)))))));
                        arr_25 [i_6] [i_5] [i_2] [i_1] [i_0 - 3] = ((!((((arr_22 [i_0 - 3]) ? 511 : (arr_22 [i_0 + 1]))))));
                        arr_26 [i_0 - 3] [i_1] [i_2] [i_1] [i_6] = (arr_8 [i_0] [i_2] [i_2] [i_0]);
                        var_25 = (min((var_11 / var_7), (((arr_21 [4] [i_1] [7] [i_5] [i_0 - 4] [i_5]) ? var_5 : (((arr_22 [1]) ? (arr_21 [i_6] [2] [i_2] [i_2] [i_1] [4]) : 20209))))));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, ((((((arr_21 [i_0 - 3] [i_0 - 2] [i_1] [i_5] [i_0] [i_2]) + 14030)) & (arr_21 [i_0] [i_0 - 3] [i_2] [i_0 - 3] [i_0] [i_7]))))));
                        arr_30 [i_0] [i_1] [i_2] [i_5] [i_2] = 1;
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_34 [5] [i_0 - 2] = (max(5218661939410549892, 0));
                        var_27 = var_11;
                        var_28 = (min(var_28, ((min((~22978), 1303156776676267869)))));
                        var_29 ^= ((-(((((65021 ? var_17 : 7900))) ? (~var_10) : (~1)))));
                    }
                    arr_35 [i_0 + 1] [i_1] [12] [i_2] [i_5] = (max(0, (arr_10 [1] [1] [i_1] [1] [10])));
                    var_30 = ((((((((arr_28 [i_0] [i_1] [i_1] [i_1] [i_1]) ? (arr_4 [7]) : var_14)) ^ (arr_20 [7] [7] [i_0] [i_0 - 3] [i_0] [i_0])))) ? (((var_19 || (~var_8)))) : ((((min(var_3, var_14))) ? var_4 : (-12557 != -2147483636)))));
                }

                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    arr_39 [i_9] [i_1] [i_2] [i_9] = 1;
                    var_31 = -35;

                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        var_32 = ((+(((arr_41 [i_9] [i_0] [i_2] [i_1] [i_9]) % (arr_41 [i_9] [i_10] [i_10 + 1] [i_0 - 3] [i_9])))));
                        var_33 = (!-12557);
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_11] = var_19;
                    var_34 |= (min((max((7528386265256054871 + 1), -var_16)), (((var_16 + (1 + -23))))));
                    arr_47 [i_0] [i_1] [i_2] [i_11] = ((+((var_5 ? 0 : (((arr_7 [i_2] [i_1] [i_0]) ? 1 : 3417735021761269431))))));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    arr_51 [i_0 + 1] [i_2] [i_0] [i_0 + 1] [i_0] = -4925;
                    arr_52 [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_1] [6] [i_2] [i_0 - 2] [i_1]);
                }
                var_35 = (((((((((arr_7 [i_0] [i_0] [12]) + var_19))) ? (arr_23 [i_2] [i_1] [i_2] [i_0 + 1] [i_2] [i_0]) : (arr_3 [i_0 + 1])))) || var_14));
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_56 [i_13] = (arr_20 [i_0] [i_0] [i_0 - 4] [i_0 - 4] [i_0 - 3] [i_0]);
            arr_57 [i_0] [1] [10] |= (((~-20385) ? (((!(arr_3 [i_0 - 3])))) : (((((((!(arr_7 [i_13] [i_0 - 1] [i_0]))))) >= (var_11 / var_2))))));
        }
        /* vectorizable */
        for (int i_14 = 3; i_14 < 10;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                arr_64 [i_0] = (65535 ? ((6 ? -1216 : 9223372036854775779)) : (arr_2 [i_0] [i_0]));
                arr_65 [6] [6] [i_0 - 2] |= (((((var_0 ? var_8 : var_7))) ^ ((~(arr_3 [i_0])))));
                var_36 = var_5;
                var_37 = (~(~var_8));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            arr_70 [i_17] [i_17] [i_16] [i_15] [i_14] [i_0] = -106;
                            arr_71 [i_16] [i_16] [i_16] [i_0] [i_14] [i_0] = (~var_2);
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 0;i_18 += 1)
            {
                arr_74 [i_18 + 1] [i_18 + 1] = (arr_1 [i_18 + 1]);
                var_38 = (arr_32 [i_18] [i_18 + 1] [i_0] [i_14 - 3] [i_0] [i_0] [i_0]);
            }
            arr_75 [i_0] = (((arr_73 [i_0] [i_0] [i_14 + 2]) ? (1 * -57) : (((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]) + var_15))));
        }
        var_39 = ((var_19 ? ((~((var_1 >> (((arr_5 [i_0] [i_0] [i_0]) - 32021)))))) : (((((((arr_68 [i_0 - 4]) ? var_11 : var_13))) ? ((min(var_3, var_5))) : (arr_24 [i_0 + 1] [i_0 - 4] [i_0] [i_0] [i_0 - 1]))))));
        arr_76 [i_0] = var_0;
    }
    #pragma endscop
}
