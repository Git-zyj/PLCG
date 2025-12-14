/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((-(((876753094 & 0) << (((~162) + 193)))))))));
    var_18 = (max(var_18, var_12));
    var_19 = var_10;
    var_20 = (max(var_20, (min(var_14, var_6))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (((((!(arr_9 [i_0] [i_1 + 3] [3] [i_0])))) > var_4));
                    arr_11 [1] [1] [1] |= 1;
                    arr_12 [1] [i_1 + 2] [i_1 + 2] = (min((min(0, 2346576139087978216)), var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((max(3715676236, (arr_14 [i_1 + 1]))))));
                                arr_17 [i_0] [i_4] [i_1] [i_3] [i_4] = (min(((((arr_15 [i_1 + 2] [i_1 + 3] [i_4 - 1]) < (max(25, 1129189868))))), ((min(1212363789, 52)))));
                            }
                        }
                    }
                    arr_18 [i_1 - 1] [i_1 - 1] = (((((((max(232, var_0))) ? (arr_0 [i_0] [i_2]) : (32 / var_5)))) ? (((!((max((arr_7 [i_0] [i_0] [i_0] [i_2]), (arr_4 [i_0]))))))) : ((((max((arr_6 [i_2]), var_3))) ? 1 : ((~(arr_15 [i_0] [i_0] [1])))))));
                }
            }
        }
        arr_19 [i_0] [i_0] = (arr_5 [i_0]);

        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            var_23 = (max(var_23, (max((max((arr_16 [i_0] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 3]), var_9)), (min((arr_16 [i_0] [i_0] [i_0] [i_0] [i_5 + 2]), (arr_16 [1] [1] [i_0] [1] [i_5 - 4])))))));

            for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
            {
                arr_24 [i_0] = ((-((-11127208025442395518 / (((((arr_8 [i_0] [i_0]) >= var_15))))))));
                arr_25 [i_0] [i_5] = 9175439836097354272;
            }
            for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_32 [i_0] [i_5] [i_7] [7] &= (((arr_29 [i_0] [i_5 + 2] [i_8] [i_8]) <= (arr_30 [i_0] [i_5 + 1] [i_5 + 1] [i_8])));
                    var_24 = (max((((arr_30 [i_7 + 2] [i_7 + 2] [10] [i_5 + 2]) & var_12)), (arr_30 [i_7 + 1] [i_7] [i_5] [i_5 - 3])));
                    var_25 = (~(((arr_30 [i_7 + 3] [i_7 + 3] [i_7 - 2] [i_7 - 2]) ? ((0 | (arr_31 [1]))) : (((-(arr_21 [i_0])))))));
                    var_26 = (min((max(12297698785520355497, (arr_8 [i_5 - 1] [i_5 + 3]))), var_11));
                }
                arr_33 [i_0] [i_0] [i_5 - 1] [i_7] = ((-(min((arr_28 [i_7 - 2] [i_5] [i_7] [i_0] [i_7] [i_7]), (((0 ? 4294967295 : 0)))))));
                arr_34 [i_0] [i_0] [i_0] = ((((var_11 & 5016066069788221552) >> (((max(var_0, (arr_16 [i_0] [i_5 - 2] [i_5] [i_5] [i_0]))) - 5938665722755951707)))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_39 [i_0] [i_0] [i_7] [5] [i_10] = 255;
                            var_27 = (max(var_27, (max(4294967295, 9271304237612197323))));
                            arr_40 [i_0] [i_0] [i_5] [i_7 + 2] [i_9] [i_9] [i_10] = (~((((-(arr_31 [i_0]))) | (((arr_22 [i_5] [1] [i_9] [13]) / var_8)))));
                            arr_41 [4] [i_5] = (((((~1) ^ (arr_14 [i_0]))) & (~251)));
                        }
                    }
                }
                arr_42 [i_5 + 1] = 1;
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_28 = (arr_10 [i_0] [i_0] [i_12]);
                var_29 = ((~(arr_13 [i_0] [i_0] [i_0] [i_0])));
            }
            arr_50 [1] = (((arr_16 [i_0] [i_0] [i_0] [i_11] [i_11]) <= (var_3 + var_9)));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_30 = ((-2380128329 < (((arr_3 [i_0] [6] [6]) - (arr_2 [i_0])))));
            var_31 = ((-var_5 ? (((1 ? 232 : 0))) : (var_7 >> 0)));
            var_32 = var_12;
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    {
                        arr_60 [i_0] = ((1086935616 ? 18446744073709551610 : 4294967295));
                        arr_61 [3] [i_13] [i_13] [i_13] [i_13] = ((3027596851 / (arr_5 [i_15])));
                        arr_62 [i_0] [i_13] [i_14] [i_15] = (arr_43 [i_14] [i_0]);
                        var_33 = -1;
                        var_34 &= ((((((arr_28 [i_0] [i_13] [i_13] [i_14] [i_14] [i_15]) > (arr_27 [i_13]))))) >= ((16 | (arr_6 [i_13]))));
                    }
                }
            }
        }
        var_35 = (--4294967291);
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
    {
        arr_65 [12] [i_16] = (arr_48 [i_16] [i_16] [i_16]);
        var_36 = 249;
    }
    #pragma endscop
}
