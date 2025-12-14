/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_5 | var_13) & 21));
    var_21 = var_8;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_22 = ((((max((min(var_8, 23306)), ((max(20, var_9)))))) ? (arr_1 [i_0]) : (min(((var_11 ? 65523 : var_9)), 26315))));
        var_23 = (max(var_23, 26324));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_24 = var_6;

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                arr_11 [i_3] = ((~(((arr_10 [i_1] [i_1] [i_2 + 2] [i_3]) ? 8301 : var_6))));
                var_25 = (arr_5 [i_1] [i_3]);

                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_26 = -1763173159;
                    var_27 = ((!(349 | 57250)));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_28 = ((arr_7 [i_2 + 1] [i_5]) ? ((var_15 >> (65514 - 65498))) : ((var_12 ? (arr_14 [i_1] [i_2 + 1] [i_1] [i_5]) : 349)));
                    var_29 = (max(var_29, (arr_1 [12])));
                }
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
            {
                var_30 = ((+((1753270273 ? (arr_17 [i_6] [i_2] [0]) : var_0))));
                var_31 = ((var_14 ? var_11 : var_14));
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                arr_23 [1] [i_2 + 2] [7] = (arr_4 [i_2 - 2]);
                var_32 = (((arr_17 [i_2 + 2] [i_2 + 2] [i_2 - 2]) ? -3965 : (arr_9 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 2])));
                arr_24 [i_1] [i_1] [i_1] = ((-28459 ? (arr_20 [i_2 + 2] [i_2 + 1] [i_2 - 2]) : var_11));

                for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        arr_30 [i_1] [i_2] [i_7] [i_7] [i_9 - 2] = (((arr_3 [i_2 - 1]) ? 21 : (arr_3 [i_2 + 2])));
                        var_33 = (5495392013364636855 || 65535);
                    }
                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        arr_35 [i_1] [i_1] [8] [0] [i_10] = (~var_1);
                        arr_36 [i_2] [i_7] [12] = 4611686018427387903;
                    }
                    var_34 = (max(var_34, (arr_20 [i_2 + 2] [i_2 - 2] [i_7])));

                    for (int i_11 = 3; i_11 < 15;i_11 += 1)
                    {
                        var_35 = 32631;
                        var_36 = (-7812 >= var_3);
                    }
                    arr_40 [i_1] [i_2] [i_7] [i_8] [i_8] [i_7] = 234578077;
                    var_37 = ((var_9 ? 3144 : ((31 * (arr_10 [i_8] [7] [i_2 - 1] [7])))));
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        var_38 ^= 26313;
                        arr_45 [i_1] [2] [2] [i_12] = (arr_25 [i_2 + 2] [i_2 + 2] [i_13 + 1]);
                    }
                    arr_46 [i_1] [5] [i_7] [i_12] = ((arr_0 [i_2 - 2] [i_2 - 2]) || var_3);
                    var_39 = (arr_3 [i_1]);
                }
                for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                {

                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        arr_53 [i_14] [i_14] = var_13;
                        var_40 = (((arr_5 [i_2 - 1] [i_2 + 1]) | -17053));
                        arr_54 [i_15] [i_14] [i_14] [3] [3] [i_14] [3] = 3465241837;
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        var_41 = (max(var_41, -951451416102820977));
                        var_42 = (max(var_42, ((((((var_1 ? var_7 : (arr_52 [14])))) ? var_9 : (arr_19 [i_7] [i_14] [i_16]))))));
                        var_43 = (((((var_14 ? var_9 : var_2))) ? 65529 : 1));
                        var_44 = ((-(arr_3 [i_1])));
                    }
                    var_45 = (!var_6);

                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        arr_60 [i_1] [i_2] [15] [15] [i_14] [i_14] = ((!((!(arr_57 [i_1] [i_2] [i_14] [i_14] [i_17])))));
                        var_46 = ((var_14 ? (arr_14 [4] [4] [i_7] [i_14]) : 5275117683809405375));
                        var_47 = ((349 ? (arr_28 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 - 2] [i_14]) : 15339049739376770810));
                        arr_61 [i_1] [i_2 - 2] [i_14] [i_14] [i_14] = var_8;
                    }
                    for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
                    {
                        var_48 = (~-2147483642);
                        var_49 = -var_0;
                        var_50 = var_11;
                        var_51 = -3870175729525691528;
                    }
                    for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
                    {
                        var_52 = var_6;
                        arr_68 [9] [i_14] [i_14] [i_1] [i_1] = (var_6 != 3465241835);
                    }
                    for (int i_20 = 1; i_20 < 1;i_20 += 1)
                    {
                        var_53 += (((((var_15 ? 239 : (arr_10 [i_1] [i_2] [i_7] [i_20])))) ? 18948 : ((var_1 ? 9 : 239))));
                        var_54 ^= (~var_19);
                        var_55 ^= (((arr_9 [i_2] [i_2] [i_2] [i_2 + 2]) != var_0));
                    }
                    var_56 = (min(var_56, ((((~480324927) ? var_2 : (arr_6 [i_2 + 1] [i_2 + 2] [i_2 + 1]))))));
                    var_57 = (min(var_57, ((((arr_4 [i_7]) ? 1 : ((3465241835 ? (arr_0 [i_2 - 2] [i_2 + 2]) : 8693292130013360191)))))));
                }
                for (int i_21 = 0; i_21 < 16;i_21 += 1) /* same iter space */
                {
                    arr_74 [i_21] [i_1] [0] [i_2] [i_2] [i_21] = ((var_0 ? ((var_3 ? -1081718535683187018 : var_2)) : 33765));
                    var_58 = var_5;
                }
            }
            var_59 *= (arr_67 [i_2] [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]);
        }
        for (int i_22 = 0; i_22 < 16;i_22 += 1)
        {

            for (int i_23 = 0; i_23 < 16;i_23 += 1) /* same iter space */
            {
                var_60 = (((arr_56 [i_1] [10] [i_22] [i_22] [4] [i_23] [i_23]) ? 3343562607 : var_1));
                var_61 -= (((arr_21 [i_1] [i_22] [i_23]) == (arr_28 [i_1] [1] [5] [5] [i_22] [5])));
            }
            for (int i_24 = 0; i_24 < 16;i_24 += 1) /* same iter space */
            {
                var_62 = var_3;

                for (int i_25 = 1; i_25 < 12;i_25 += 1) /* same iter space */
                {

                    for (int i_26 = 0; i_26 < 16;i_26 += 1)
                    {
                        var_63 = var_17;
                        arr_90 [0] [3] [2] [i_24] = var_14;
                    }
                    var_64 = (min(var_64, -3465241835));
                    var_65 = ((!(((64869 ? 1081718535683187034 : var_2)))));
                }
                for (int i_27 = 1; i_27 < 12;i_27 += 1) /* same iter space */
                {
                    var_66 = (max(var_66, var_6));
                    var_67 ^= (((var_11 > 61981) ? ((var_8 ? var_16 : 1081718535683187034)) : -4611686018427387903));

                    for (int i_28 = 0; i_28 < 16;i_28 += 1) /* same iter space */
                    {
                        var_68 = var_17;
                        var_69 = (arr_42 [i_28] [i_27 + 1] [i_27 + 1] [i_27 + 2] [i_27 - 1]);
                    }
                    for (int i_29 = 0; i_29 < 16;i_29 += 1) /* same iter space */
                    {
                        arr_100 [i_29] [i_24] [i_24] [i_24] [i_1] = (1 ? (~65523) : var_18);
                        var_70 = -var_11;
                    }
                    var_71 &= (((~0) ? (arr_3 [i_1]) : 306906517));
                    var_72 = (((arr_73 [i_24] [i_24] [i_22] [i_24]) | (arr_73 [i_24] [i_24] [i_22] [i_24])));
                }
                var_73 = (arr_88 [i_1] [i_1] [i_22] [8] [i_24]);
            }
            var_74 = (~var_6);
            var_75 |= ((-38345297 ? (var_7 + var_6) : (arr_34 [i_1] [i_1] [14] [i_22])));
        }
        arr_101 [i_1] [i_1] &= (((var_15 > 32631) == 57235));
    }
    for (int i_30 = 0; i_30 < 16;i_30 += 1) /* same iter space */
    {
        arr_106 [i_30] = var_3;
        arr_107 [14] [i_30] = (max((max((arr_48 [i_30] [3] [6] [3] [i_30] [i_30]), var_9)), (arr_16 [i_30] [6] [i_30])));
    }
    #pragma endscop
}
