/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max((((-1 ? 17360 : var_9))), (max(17360, 2619765221)))), var_10));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_15 = (max(var_15, ((max(((~(arr_0 [8]))), -47)))));
        arr_2 [i_0] = -17360;
        var_16 = ((-17354 / ((max(var_0, (max(-17360, -47)))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 = ((min((var_13 * var_10), -var_13)));
            arr_6 [14] [14] [i_0] = ((!(arr_5 [i_0])));
            var_18 = (!-21);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] = ((((var_2 ? var_11 : (arr_8 [i_0 + 2]))) % var_5));
                            var_19 = (max(var_19, var_10));
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] [i_1] = (var_9 - var_8);
                            var_20 *= (arr_5 [i_2]);
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_23 [i_0] = var_9;
                var_21 = (max(((max(-17346, var_8))), (min(17361, var_1))));
            }
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                var_22 += var_7;
                var_23 = 2020606025822988813;
            }
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_35 [i_0] [i_1] [i_7 + 1] [20] [i_9] = (max((!-1195092151165308058), -17342));
                            arr_36 [i_9] [i_8] [i_9] [i_1] [i_9] &= var_5;
                        }
                    }
                }
                arr_37 [i_0] = (min((((arr_15 [i_0 - 1] [i_7 - 1] [i_7 - 1] [i_0 - 1]) ? (arr_15 [i_0 - 1] [i_1] [i_7 - 1] [i_7]) : (arr_15 [i_0 - 1] [0] [i_7 - 1] [12]))), (((arr_0 [i_0]) ? (arr_34 [i_0] [14] [i_7 - 1] [i_7] [i_7 - 1] [14] [i_7]) : -1825722452))));
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                arr_41 [10] [i_0] [i_10] [i_10 + 1] = 0;
                var_24 = (arr_30 [i_0] [i_0] [i_0] [i_0]);
                var_25 = (-9223372036854775807 - 1);
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_46 [i_0] = var_6;
            arr_47 [i_0 + 2] [i_11] [i_0] = (((arr_33 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0] [i_11] [i_0]) || var_4));
        }
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 7;i_12 += 1)
    {
        arr_52 [i_12 - 1] = (((((var_8 ? (arr_16 [11] [i_12] [11] [i_12] [i_12]) : var_7))) ? 17349 : (arr_15 [0] [i_12] [1] [i_12])));
        var_26 = (arr_7 [11] [i_12] [i_12 + 2]);
        arr_53 [i_12] |= (arr_26 [i_12 + 1] [8]);
    }
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {

        for (int i_14 = 2; i_14 < 15;i_14 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_15 = 1; i_15 < 13;i_15 += 1)
            {
                arr_62 [12] [8] [i_15] [i_14] |= (var_3 || var_13);
                var_27 = (--2298);
                var_28 = (17349 ? (arr_54 [i_13 + 1]) : (arr_54 [i_13 - 1]));
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 12;i_17 += 1)
                    {
                        {
                            var_29 = (arr_54 [i_13 + 1]);
                            var_30 = (min(var_30, ((((((2298 ? (arr_1 [i_14]) : var_0))) ? 1195092151165308058 : (((var_12 ? -127 : (arr_32 [i_13] [i_13] [i_13] [i_13])))))))));
                            var_31 = (min(var_31, (((-127 ? (arr_67 [i_13 - 1] [i_13] [i_13 + 1] [3] [i_13 + 1]) : var_4)))));
                            var_32 = (min(var_32, (((((((var_7 <= (arr_42 [7] [i_15]))))) > (arr_8 [i_13 + 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 13;i_19 += 1)
                    {
                        {
                            arr_73 [i_15] [10] [i_13] [i_15] [i_15 - 1] = (((arr_22 [i_13] [i_14 - 2] [i_13] [1]) ? ((((!(arr_31 [i_18] [i_13] [1] [i_18] [i_19 - 1] [i_15]))))) : 1829143289));
                            var_33 = (arr_10 [i_13 + 1] [i_13 - 1] [i_14 - 2]);
                            arr_74 [i_19] [i_19] [i_13] [i_13] [13] [i_13] = ((-(arr_20 [i_13] [i_13 - 1])));
                        }
                    }
                }
            }
            arr_75 [i_13] = (max(var_0, var_4));
        }
        /* vectorizable */
        for (int i_20 = 2; i_20 < 15;i_20 += 1) /* same iter space */
        {
            arr_78 [i_13] [i_20] [i_13] = ((!((!(arr_30 [i_13] [i_20] [i_13] [i_13])))));
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 14;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 14;i_22 += 1)
                {
                    {
                        var_34 = 17335;
                        arr_84 [i_13] [i_13] [i_22 - 1] = ((var_11 ? (arr_72 [3] [i_22 - 1] [i_22 - 1] [i_22] [i_22 + 1] [i_22]) : var_7));
                        var_35 = ((var_13 ? (arr_83 [i_22 + 1] [i_21 - 1] [i_20 + 1]) : (arr_8 [i_13 - 1])));
                        arr_85 [i_13] = ((~(arr_10 [0] [i_22 + 1] [i_13 - 1])));
                    }
                }
            }
            arr_86 [i_20 - 2] [i_13] [8] = ((-19 ? (arr_21 [i_13] [i_13] [8] [5]) : var_3));
            var_36 = (min(var_36, (((var_11 && (~0))))));
            arr_87 [i_13] = (!-17361);
        }
        var_37 += ((!((max(126, (min((arr_42 [i_13] [i_13]), var_11)))))));
        arr_88 [i_13] = (((((!(arr_1 [i_13]))) ? var_10 : 17360)));
        var_38 = (min((((var_5 ? var_1 : (arr_42 [20] [i_13 + 1])))), var_4));
    }
    var_39 = var_9;
    #pragma endscop
}
