/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((208 + var_19) >= 65535)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 -= var_9;
                                var_22 = (min(var_22, (arr_12 [i_3 - 1] [0] [i_3] [6] [i_4 + 1])));
                            }
                        }
                    }
                    var_23 = (max(var_23, ((((arr_12 [i_1] [i_1] [i_1 - 1] [1] [i_1 - 1]) | (arr_12 [i_0] [i_0] [i_0] [1] [i_1 - 1]))))));
                    arr_13 [i_0] = (arr_0 [i_2 - 2] [i_1]);
                    var_24 = (arr_5 [i_2] [i_1 + 2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_25 = (((((1 / (arr_3 [i_0])))) ? (arr_14 [i_0]) : var_3));
                                var_26 += ((var_13 ? (arr_8 [i_5] [i_0] [i_2 - 1] [i_6 + 2]) : var_6));
                            }
                        }
                    }
                }
            }
        }
        var_27 = (max(var_27, (16384 % var_5)));
        arr_20 [i_0] [i_0] = ((var_8 ? (0 > -8254671205235363847) : 1));

        for (int i_7 = 3; i_7 < 13;i_7 += 1)
        {
            var_28 *= ((~(arr_17 [4] [i_7 - 1] [i_7 + 2])));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    {
                        var_29 = (min(var_29, (((((arr_5 [i_7] [i_7]) | 2187120632)) >> (((arr_28 [i_9 + 1] [i_8]) - 10748968499050677391))))));
                        arr_30 [i_7 - 3] [i_0] = var_8;
                        arr_31 [i_9] [i_0] [i_9] [9] [i_0] [i_0] = (i_0 % 2 == 0) ? ((((arr_7 [1] [i_8 + 1] [i_0]) << (((arr_7 [i_0] [i_8 + 1] [i_0]) - 3820134250))))) : ((((arr_7 [1] [i_8 + 1] [i_0]) << (((((arr_7 [i_0] [i_8 + 1] [i_0]) - 3820134250)) - 2785204213)))));
                        var_30 = (((((var_2 | (arr_16 [i_0])))) ? (arr_6 [i_0] [i_7 - 2] [i_8 + 1]) : (((18064 ? (arr_10 [i_0] [i_0] [i_8 - 2] [i_8 - 2]) : var_10)))));
                    }
                }
            }

            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        var_31 = (arr_9 [i_7 - 1]);
                        var_32 = (min(var_32, ((~(~1)))));
                        var_33 = (max(var_33, 1));
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        var_34 = 29973;
                        var_35 = ((!(arr_39 [i_0])));
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        arr_44 [i_0] [i_0] [9] [i_14] = ((var_1 && (arr_4 [i_0])));
                        var_36 = (max(var_36, var_12));
                        var_37 = (max(var_37, (arr_25 [1] [i_7 - 1] [i_11] [0])));
                    }
                    var_38 = -var_5;
                    arr_45 [i_0] [i_0] = (arr_9 [i_10]);
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                {
                    var_39 = (~var_16);

                    for (int i_16 = 1; i_16 < 11;i_16 += 1)
                    {
                        arr_50 [i_0] [i_0] [2] [i_15] [i_16] [i_0] = (arr_0 [i_16 - 1] [i_16 + 1]);
                        var_40 = ((((!(arr_41 [i_16] [i_0] [i_16] [i_15] [i_16]))) ? (arr_8 [i_0] [i_16 - 1] [i_16] [i_0]) : 13346));
                        var_41 = (arr_22 [i_0]);
                        var_42 &= var_8;
                    }
                    for (int i_17 = 4; i_17 < 14;i_17 += 1)
                    {
                        var_43 = (!var_7);
                        var_44 = (((arr_28 [i_17 - 1] [i_10]) | (!var_16)));
                    }
                }
                for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
                {
                    var_45 = (min(var_45, ((((-(arr_21 [i_0] [i_18])))))));
                    var_46 = (arr_15 [i_7 - 2]);
                    var_47 -= ((!(arr_39 [i_18])));
                    arr_56 [i_7] [i_0] [i_0] [i_0] = ((-(arr_3 [i_0])));
                    var_48 += ((-(arr_16 [i_18])));
                }
                for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
                {
                    arr_60 [i_0] [i_10] [i_7] [i_0] = ((var_17 ? var_17 : (arr_54 [i_7] [i_7 + 2] [i_7] [i_7 - 1])));
                    var_49 = ((((arr_42 [11] [11] [i_7] [i_10] [i_10] [i_19] [11]) ^ var_17)));
                    arr_61 [1] [i_0] [i_10] [i_0] [i_0] = 1;
                }
                var_50 = (min(var_50, (arr_17 [i_10] [i_7] [i_7 + 2])));
            }
            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                var_51 -= 8254671205235363837;
                arr_64 [i_0] [i_7] [i_0] = (arr_63 [i_7] [i_7 - 1]);
            }
        }
    }
    #pragma endscop
}
