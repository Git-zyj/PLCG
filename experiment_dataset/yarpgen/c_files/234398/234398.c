/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [3] = ((((((arr_3 [i_0]) >= var_9))) % var_0));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] [i_1] [i_2 - 1] = var_10;
                arr_10 [i_0] [i_0] [i_1] = (arr_2 [i_2 - 1]);
            }
            for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_12 |= (((arr_1 [i_3 + 1]) != (!8191)));

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    arr_16 [i_1] [i_1] = ((var_9 | (arr_14 [i_3 - 1] [i_1] [i_3 - 1] [i_3 + 1] [i_1] [i_3 + 2])));
                    var_13 = (min(var_13, (!var_1)));
                }
                var_14 = var_0;
            }
            var_15 = ((arr_15 [i_0] [i_1]) ? var_8 : 3171556753);
            var_16 = (((arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1]) == (arr_6 [i_0])));
        }
        arr_17 [i_0] &= (((arr_3 [i_0]) ? ((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / 32))) : (arr_5 [i_0] [i_0])));
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_17 ^= (arr_19 [i_5]);
            var_18 = (max(var_18, (((!(arr_18 [i_5 - 1] [i_5 + 2]))))));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                arr_27 [i_5] [i_7] [i_8] [i_5] = (max((((arr_19 [i_5 + 3]) ? 21634 : var_6)), (224 + var_0)));
                arr_28 [i_8] [i_5] [i_5 + 3] = ((-var_11 ? (((!(arr_23 [i_5 + 1])))) : ((((arr_18 [i_5 + 1] [i_7]) >= (arr_23 [i_5 + 1]))))));
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_19 = ((-((min((arr_25 [i_5] [i_5] [i_5]), (!1))))));
                var_20 = (arr_18 [i_5 - 1] [i_9]);
            }
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_34 [i_5] [i_7] [i_10] = arr_31 [i_5 + 3] [i_7] [i_7] [i_10];
                arr_35 [i_10] [i_5] [i_10] = (((max(var_6, var_11))));
            }
            var_21 = ((((min((arr_21 [i_5] [i_5 + 3] [i_5]), 3171556753)) | 255)));
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
        {
            arr_39 [i_5] = ((-((min(127, (166 >= 227))))));
            arr_40 [i_5 - 1] [i_11] [i_5] = ((131 != ((((min(var_1, (-2147483647 - 1)))) ? var_7 : var_4))));
            var_22 ^= ((((((arr_22 [i_5] [i_5 - 1] [i_5 - 1]) ^ -16567))) ? ((min(((~(arr_26 [i_5 + 2]))), ((-36 ? -93 : var_6))))) : (((arr_20 [i_11]) ? var_2 : (((((arr_24 [i_11]) && 3458764513820540928))))))));
        }
        var_23 = var_8;
        arr_41 [i_5] = ((-(((arr_32 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? 93 : var_4))));
    }
    for (int i_12 = 2; i_12 < 18;i_12 += 1) /* same iter space */
    {
        var_24 = (min((((arr_26 [i_12 + 3]) & (arr_26 [i_12 + 3]))), (((((-6497124276328858557 ? (-9223372036854775807 - 1) : var_1))) ? ((((arr_22 [i_12 + 1] [i_12 + 2] [14]) > 1))) : (max(var_11, 167430739))))));
        var_25 = var_8;
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 4; i_14 < 16;i_14 += 1)
        {
            {
                var_26 = ((((min((arr_33 [i_13] [i_13] [i_14 - 4]), var_10))) ? (min(((15 ? 524288 : -92)), var_7)) : (arr_44 [i_14])));

                for (int i_15 = 2; i_15 < 17;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, (((!(((var_2 ? (((((arr_42 [i_16] [i_14]) >= var_4)))) : (arr_45 [i_14 - 3])))))))));
                        var_28 = (max(var_28, (arr_44 [i_13])));
                    }
                    for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                    {
                        var_29 = (max(var_29, ((min((((arr_33 [i_13] [i_14 - 2] [i_15 - 2]) ? 3171556759 : var_6)), (max(var_5, (var_7 == var_9))))))));
                        var_30 -= (arr_38 [i_15]);
                        var_31 ^= ((((((arr_53 [i_14 + 1]) ? var_9 : (arr_30 [i_14] [i_14] [i_15] [i_17])))) ? (!2147483647) : (((min(var_5, (arr_32 [i_13] [i_14] [i_13] [i_17])))))));
                        arr_56 [i_14] = var_0;
                    }

                    for (int i_18 = 2; i_18 < 17;i_18 += 1)
                    {
                        var_32 = (max(var_32, ((-(arr_29 [i_13])))));
                        var_33 = (((max(var_7, ((min(-167430755, 43738))))) <= 65535));
                    }
                }
                for (int i_19 = 2; i_19 < 17;i_19 += 1) /* same iter space */
                {
                    arr_63 [i_13] [i_14] [i_14] = ((!((65535 == (((!(arr_42 [i_14] [i_19]))))))));
                    arr_64 [i_14] [i_14] [i_14] = (~((var_8 ? (arr_36 [i_19 + 1] [i_19 - 1]) : (~-167430731))));
                    var_34 = (arr_22 [i_13] [i_19] [i_14]);
                    var_35 = (((((arr_33 [i_13] [i_14 - 3] [i_13]) ? var_0 : 197))) % (arr_43 [i_19 - 2]));
                    var_36 = ((((((3171556753 ? var_5 : (arr_37 [i_13] [i_14 + 2] [i_19 - 1]))) <= (((max(var_1, var_0)))))) ? (((-(arr_55 [i_13] [i_14 - 2] [i_19 - 2] [i_19 - 2])))) : (arr_24 [i_19 - 2])));
                }
                for (int i_20 = 2; i_20 < 17;i_20 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            {
                                var_37 = ((!(((var_0 || 1) && (!var_8)))));
                                arr_71 [i_13] [i_14] [i_14] [i_20 - 1] [i_21] [i_13] [i_22] = (((((arr_22 [i_20] [i_20] [i_13]) ? var_0 : 1)) / var_4));
                                arr_72 [4] [i_14] [4] [i_20 - 2] [i_22] [4] [i_14] = ((var_3 ? var_7 : (arr_43 [i_14 + 1])));
                                var_38 |= ((((((arr_26 [i_20]) | (arr_42 [i_13] [i_14 - 3]))) < -3294)) ? var_8 : ((var_8 | ((~(arr_49 [i_13] [i_14 - 4] [i_21]))))));
                            }
                        }
                    }
                    var_39 = (min((((var_10 ^ (arr_54 [10] [i_14] [i_14] [i_20 - 1] [i_14])))), -4294934528));
                    var_40 = ((((1 == (arr_58 [i_13] [i_14] [i_14 + 2] [i_20 + 1]))) ? (max(var_11, (-2147483647 - 1))) : ((((arr_58 [i_13] [i_13] [i_13] [i_13]) >= (arr_58 [i_13] [i_14] [i_20 - 2] [i_20]))))));
                    arr_73 [i_13] [i_14] = (min((min((((14548 ? var_6 : -167430738))), (max((arr_43 [i_13]), var_2)))), (arr_66 [i_14])));
                }
            }
        }
    }
    var_41 = ((max(var_1, var_1)));

    for (int i_23 = 0; i_23 < 23;i_23 += 1)
    {
        arr_76 [i_23] = arr_75 [i_23];
        var_42 = ((((((min(1, (arr_74 [i_23] [i_23])))) ? (((arr_75 [i_23]) ? (arr_75 [i_23]) : (arr_75 [i_23]))) : 1))) ? ((((0 && 13105) || var_10))) : (((!(arr_74 [i_23] [i_23])))));
        var_43 = (min(var_43, 1075673518));
        arr_77 [i_23] = var_7;
    }
    var_44 = var_4;
    #pragma endscop
}
