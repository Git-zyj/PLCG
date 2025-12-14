/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((((var_8 ^ var_14) ? (~30896) : (var_0 ^ var_12)))) != (~var_4)));
    var_19 = (max(var_19, (((((min(var_6, 20819))) ? var_8 : (min(var_8, ((max(var_0, 50738))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((-((var_0 ? ((0 ? (arr_3 [i_0]) : 0)) : var_14)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_21 = ((((var_16 >= (((min(1, 1)))))) ? (2183742972 ^ 1) : (~57060)));
                            var_22 = (max(var_22, (~var_1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_23 = (max((arr_8 [i_1] [i_1] [i_1 + 3] [i_1 + 3] [i_1] [i_1 - 2]), var_7));
                            var_24 &= var_1;
                            var_25 = var_7;
                            var_26 = (max(var_26, ((min(((((((arr_2 [i_1] [i_5]) ? 10 : (arr_0 [4] [i_1 - 1])))) ? ((min(var_15, var_0))) : (min(var_16, (arr_2 [i_0] [i_5]))))), (max((~1), ((-(arr_3 [i_4]))))))))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_27 = ((1 ? var_7 : ((((arr_3 [i_6]) < 20)))));
                    arr_18 [0] [0] [i_6] &= (min((~1), ((-(arr_4 [i_0] [i_0] [i_1 - 4])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_28 = (!var_17);
                                arr_23 [i_0] [i_0] [i_0] [i_7] [i_0] = var_15;
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_29 = ((((!(arr_3 [i_1]))) ? var_6 : (arr_6 [i_1] [i_1 - 4] [i_1 + 3])));
                    var_30 = (min(1, 2111224324));
                    var_31 = (((((!var_8) ? ((((arr_11 [i_0] [i_0]) ? var_13 : var_12))) : (min(57, (arr_1 [i_9]))))) ^ ((((((-2070720281 ? var_15 : (arr_7 [i_0] [i_0] [i_1 - 3] [i_1] [i_9])))) ? (max(var_4, (arr_21 [i_9] [9] [i_0] [i_0] [i_0] [i_0]))) : (((var_11 ? 1369676212 : (arr_13 [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_32 = ((((1 ? 2111224321 : 2305843009209499648)) > (arr_25 [i_1] [i_0])));
                                var_33 += (((arr_31 [2] [i_1] [i_9] [2] [i_9]) && var_6));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    var_34 = (max(var_34, ((min(((1655905178 ? (arr_22 [i_1] [3] [i_1 - 3] [i_1 + 1] [i_1]) : var_0)), var_1)))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_35 = (((!var_8) >> ((((var_8 ? var_7 : (arr_15 [i_13])))))));
                                var_36 = (max(var_36, ((((arr_27 [i_1 + 3] [0] [i_12] [i_13]) ? (arr_0 [2] [i_1 - 3]) : ((~(min(var_16, var_12)))))))));
                                var_37 = (arr_22 [i_0] [i_1] [i_12] [i_13] [i_14]);
                            }
                        }
                    }
                }
                for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_38 ^= (min((((arr_26 [i_0] [i_0] [i_15] [i_16] [i_16] [i_0]) >> 1)), (((((var_5 ? var_4 : var_9))) ? ((((arr_21 [i_0] [i_1 + 1] [i_15] [10] [i_0] [i_16]) && (arr_4 [i_0] [i_0] [i_0])))) : (arr_35 [i_17])))));
                                var_39 = ((((arr_16 [i_1 + 2] [i_0] [i_1 + 2]) ? var_12 : (arr_16 [i_1 + 3] [i_0] [i_15]))));
                                var_40 -= ((max((arr_5 [i_16] [i_16] [i_0]), (arr_29 [2] [i_16 - 1] [i_16 - 1] [2]))) / (3491072229901499903 && -1059));
                            }
                        }
                    }
                    arr_51 [i_0] [i_1] [1] |= ((-(((min(var_0, var_8)) << ((min((arr_40 [i_0] [i_1] [i_15] [i_15]), (arr_32 [i_0] [i_0] [6] [i_0] [6] [10]))))))));
                    var_41 = (min(18, 99));
                    var_42 = var_6;
                }

                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        var_43 = (min(((~(((!(arr_54 [i_18])))))), (max(((min(var_10, var_13))), -704577152))));
                        var_44 -= var_11;
                        var_45 |= (max((arr_5 [i_1 - 2] [i_1 - 1] [i_1]), (min((arr_5 [i_1 + 3] [i_1] [i_1]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                    }
                    for (int i_20 = 2; i_20 < 7;i_20 += 1)
                    {
                        var_46 = (max(var_46, ((((((((var_11 ? 61111 : var_4)) > var_13))) / ((~(arr_16 [i_0] [6] [1]))))))));
                        var_47 |= (((((9223372036854775807 ? ((var_11 ? 11205430032024155054 : 254)) : (max(var_12, (arr_12 [8])))))) ? (~0) : -1067));
                        var_48 = var_5;
                        var_49 = (var_13 < var_8);
                    }
                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        var_50 *= -704577152;
                        var_51 ^= arr_37 [0];

                        for (int i_22 = 0; i_22 < 11;i_22 += 1)
                        {
                            var_52 -= var_15;
                            var_53 = (min(var_53, var_17));
                            arr_67 [i_1] [i_0] [i_21] [i_0] = ((var_0 && ((min((((var_14 ? var_8 : var_11))), var_16)))));
                        }
                        for (int i_23 = 0; i_23 < 11;i_23 += 1)
                        {
                            arr_71 [i_23] [i_23] [i_0] [i_23] [1] = ((+((((arr_55 [i_1 - 3] [i_1 + 1] [i_1 - 2]) && (arr_9 [i_1 - 3] [i_1 + 1] [i_1 - 2] [i_1 + 1]))))));
                            var_54 = (arr_3 [i_1 + 2]);
                            var_55 = (min(-var_13, ((((!(arr_15 [i_23]))) ? -9613 : (-2147483647 - 1)))));
                        }
                        for (int i_24 = 1; i_24 < 7;i_24 += 1) /* same iter space */
                        {
                            arr_74 [i_0] [i_0] [i_18] [i_21] [i_24 + 4] = (arr_6 [i_24] [i_1] [i_18]);
                            var_56 = (arr_26 [i_0] [i_0] [i_1] [i_18] [i_21] [1]);
                        }
                        for (int i_25 = 1; i_25 < 7;i_25 += 1) /* same iter space */
                        {
                            var_57 = (max((((arr_6 [i_0] [i_1 - 3] [i_18]) ? (max((arr_21 [i_1] [i_1] [1] [i_0] [6] [i_1]), var_9)) : 20681)), (arr_55 [i_0] [i_0] [i_0])));
                            var_58 |= (min((((((max(var_16, 90))) ? ((39 ? 117 : (arr_35 [i_0]))) : ((min(2016, var_11)))))), var_13));
                        }

                        for (int i_26 = 0; i_26 < 11;i_26 += 1)
                        {
                            var_59 = (((5508410283953983324 && 53409) ? ((((arr_70 [i_0] [1] [i_18] [i_0] [i_26]) / var_5))) : (min(var_12, (2701738851541682134 + var_7)))));
                            var_60 = (max(var_60, ((-(min(((-(arr_65 [i_0] [9] [i_18] [i_21] [i_26]))), (var_7 < var_14)))))));
                            var_61 = (min((min(var_4, ((1286087243 ? 1 : 229)))), ((min((arr_76 [i_0] [i_0] [i_0] [i_0] [i_1 - 1]), (arr_76 [i_0] [i_1] [8] [i_0] [i_1 - 2]))))));
                            var_62 -= (max((max(((var_6 ? (arr_7 [5] [i_1] [i_0] [i_1] [i_0]) : (arr_29 [4] [1] [6] [4]))), ((min((arr_33 [i_18]), var_16))))), ((((1 - 1) ? (((arr_7 [i_0] [i_0] [i_18] [i_21] [i_26]) - var_2)) : var_12)))));
                        }
                    }
                    var_63 = (!(12 || 28));
                }
                for (int i_27 = 0; i_27 < 11;i_27 += 1)
                {
                    var_64 = (arr_78 [i_1] [i_1]);
                    var_65 = (min(var_65, ((((((var_7 / (arr_19 [2]))))) < (((arr_28 [i_0] [i_0] [i_1 - 4] [i_0] [i_0]) - (4294967261 && 782462710)))))));
                    var_66 = min(((min(((!(arr_48 [i_0] [i_0] [i_1] [i_27]))), (var_10 || var_15)))), -9613);

                    for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
                    {
                        var_67 = min((max((min((arr_82 [i_27] [i_27] [i_27] [i_27]), (arr_81 [1] [i_1] [i_27]))), ((min(108, var_2))))), (max((arr_10 [i_1 + 3]), var_6)));
                        var_68 = var_7;
                        var_69 = var_5;
                        var_70 &= arr_41 [i_0] [10] [i_1 - 4] [4] [i_28];
                    }
                    for (int i_29 = 0; i_29 < 1;i_29 += 1) /* same iter space */
                    {
                        var_71 &= (max((~15448323372459864358), ((((var_7 | (arr_61 [i_0] [i_27] [10])))))));

                        for (int i_30 = 2; i_30 < 7;i_30 += 1)
                        {
                            var_72 = (((!(var_9 == var_11))));
                            var_73 = (min(var_73, var_14));
                        }
                    }
                    for (int i_31 = 1; i_31 < 9;i_31 += 1)
                    {
                        var_74 -= -var_15;
                        var_75 = ((!((max(((((arr_45 [i_31] [i_0] [5] [i_0] [i_0]) || (arr_81 [i_1] [i_27] [i_27])))), 4294967270)))));
                    }
                    /* vectorizable */
                    for (int i_32 = 3; i_32 < 8;i_32 += 1)
                    {
                        var_76 = var_2;
                        var_77 = (((((10437220929383047590 ? 4278248226814668568 : 38))) ? (arr_36 [i_0] [i_1 - 1] [i_27]) : (arr_58 [i_0] [i_1] [i_32] [i_0])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
