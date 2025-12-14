/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [1] [i_0] = (max((max(127, -7239501438844527274)), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        var_10 -= (((((var_4 ? 127 : ((((arr_1 [i_0]) <= (arr_0 [i_0]))))))) ? (min((arr_0 [i_0]), (arr_1 [i_0]))) : ((((!(arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_11 &= (18446744073709551615 * -122);
        var_12 = ((arr_4 [i_1]) % (arr_3 [i_1] [i_1]));
        var_13 = (!var_5);
        var_14 = (((arr_4 [i_1]) ? (-2328079913204254561 && 1) : (arr_4 [i_1])));
    }
    var_15 = var_2;
    var_16 = ((var_6 < (((96 / var_8) ? var_2 : var_5))));

    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (((!(arr_7 [i_2]))) ? (max((arr_5 [i_2]), (max((arr_4 [i_2]), 8437285064605861020)))) : 1);
        var_17 -= (arr_6 [i_2]);
        var_18 = (((arr_7 [i_2]) / (((!(!var_3))))));
        var_19 = (((min((arr_4 [i_2]), ((max((arr_7 [i_2]), var_5)))))) ? (((arr_4 [i_2]) ? (arr_7 [i_2]) : (arr_4 [i_2]))) : ((((!(arr_7 [i_2]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_15 [i_3] [i_3] = (var_5 != (arr_10 [i_4]));
            var_20 = (max(var_20, ((((arr_12 [i_3] [i_3]) ^ (((arr_6 [i_3]) ? var_2 : 32)))))));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_21 = 65535;
                    var_22 = (var_5 / -5316354907523331446);
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    arr_25 [i_3] [i_3] [i_5] [i_7] = ((var_7 ? var_6 : (((var_3 <= (arr_3 [1] [i_4]))))));
                    var_23 = (((arr_3 [i_3] [i_3]) ? var_2 : (arr_18 [i_3] [i_3] [i_4] [i_3] [i_5] [i_7])));
                    var_24 = -111;
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_25 = var_8;
                    var_26 = (((arr_14 [i_5] [i_3]) && (arr_24 [i_4] [i_4] [i_5] [i_8] [i_3] [i_3])));
                    var_27 = (max(var_27, ((((((-88 ? 1 : 508239320))) ? 18 : 1)))));
                    var_28 = (!33401);
                    var_29 = ((!(arr_7 [i_4])));
                }

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    arr_31 [i_3] [i_4] = (((arr_27 [i_5] [i_5] [i_5] [i_3] [i_3]) ? ((var_1 | (arr_13 [i_3] [i_4] [i_3]))) : 109));
                    arr_32 [i_3] [i_4] [i_4] [i_4] [i_4] [i_5] = (~var_6);
                }
            }
            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                arr_35 [i_10] [i_4] = (((arr_4 [i_3]) ? (arr_4 [1]) : 1));

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_30 = ((arr_24 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10]) >= (!var_5));
                    arr_38 [i_4] [i_10] [i_11] &= ((~((var_7 ? -53 : (arr_19 [2] [i_4] [i_4] [16])))));
                }
            }
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                var_31 = (var_3 ? ((3 ? var_1 : 30950)) : var_0);
                arr_41 [5] [i_4] [i_4] = ((-(arr_40 [i_3])));
                var_32 = ((arr_13 [i_3] [i_4] [i_3]) >= (arr_9 [i_4]));
                arr_42 [i_12] [i_12] [i_12] |= (((((var_0 & (arr_40 [i_3])))) ? (arr_30 [i_3] [i_4] [i_3] [i_3]) : (((var_3 + 9223372036854775807) >> (-48 + 64)))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_33 = ((~(~var_4)));
                            arr_47 [i_3] [i_4] [i_12] [i_13] [i_14] = (((arr_45 [i_3] [i_4] [i_14 - 1] [4] [i_14]) ? (arr_45 [i_3] [i_4] [i_14 - 1] [i_3] [i_3]) : (arr_45 [i_3] [i_4] [i_14 - 1] [i_13] [8])));
                            var_34 = ((~(arr_3 [i_14 - 1] [i_14 - 1])));
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
        {
            var_35 = var_2;
            var_36 = ((!(arr_44 [i_3] [1] [6] [i_15] [1])));
            var_37 = (arr_36 [i_3] [i_15] [6] [i_15]);
        }
        var_38 = (~(arr_23 [i_3] [16] [i_3] [16] [i_3] [i_3]));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
    {
        var_39 += (((arr_49 [i_16] [i_16] [i_16]) ^ (arr_33 [i_16] [i_16] [i_16])));
        var_40 = (max(var_40, var_4));
        var_41 = ((!(arr_39 [i_16] [i_16] [i_16])));
    }
    var_42 = ((var_3 ? -var_0 : (var_7 * var_3)));
    #pragma endscop
}
