/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30079
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */int) var_6);
    var_20 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))))), ((-(((/* implicit */int) var_17))))))));
        var_21 ^= ((((var_15) << (((var_9) - (9212460241868809940LL))))) >> (((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) var_17)))) - (3571216967U))));
        var_22 = (+(max((((/* implicit */long long int) arr_2 [i_0] [10U])), ((~(var_16))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) (~(var_16)))) ? (var_9) : (((/* implicit */long long int) (+(((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_14)) + (11184)))))))));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_1 + 3] [i_2 - 2] [i_0])) ^ (((/* implicit */int) var_18))))) ? (((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((((/* implicit */int) arr_6 [i_2] [i_1 + 4] [i_2 + 2] [i_0])) / (arr_0 [i_2 + 1])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) var_7);
                }
            } 
        } 
        var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2790))) ^ (-9223372036854775801LL)))) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0]))));
    }
    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */short) max((((/* implicit */unsigned int) (+(((((/* implicit */int) var_18)) >> (((((/* implicit */int) var_2)) - (21897)))))))), ((-(1833882900U)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
        {
            arr_23 [i_5] [i_5] = ((/* implicit */long long int) ((var_16) > (arr_4 [i_5] [i_6] [i_5])));
            var_28 = ((/* implicit */unsigned long long int) ((long long int) var_5));
            /* LoopSeq 3 */
            for (long long int i_7 = 2; i_7 < 10; i_7 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_8 = 4; i_8 < 11; i_8 += 4) 
                {
                    for (unsigned short i_9 = 4; i_9 < 9; i_9 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) (unsigned short)62723))));
                            arr_34 [i_8] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)42922)) ? (2544471656U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65483)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_10 = 4; i_10 < 10; i_10 += 4) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9223372036854775779LL)) ? (-217155037421564842LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))));
                    var_32 = ((/* implicit */unsigned char) var_5);
                }
                var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_18))));
                arr_39 [i_5] [i_5] [i_7] = ((/* implicit */long long int) arr_22 [i_6] [i_7 + 1]);
            }
            for (long long int i_11 = 2; i_11 < 10; i_11 += 3) /* same iter space */
            {
                var_34 = ((long long int) var_7);
                arr_42 [i_5] = ((/* implicit */long long int) (+(arr_12 [i_11] [i_5] [i_11 - 1] [i_5])));
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_11 + 1] [i_11 + 2]))) | (var_1))))));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_14 [i_5] [i_6] [i_6])));
            }
            for (long long int i_12 = 2; i_12 < 10; i_12 += 3) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned int) (~(((long long int) var_18))));
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                {
                    arr_48 [(unsigned short)5] [i_6] [10LL] [(unsigned short)5] [i_13] = var_15;
                    var_38 = ((/* implicit */short) var_17);
                    var_39 += ((/* implicit */unsigned char) ((int) var_10));
                    arr_49 [i_13] [i_13] [i_13] [i_13] [1LL] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_6])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_12 + 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_7)))));
                }
                for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 2) 
                {
                    var_40 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_50 [i_5] [i_6] [i_6] [i_6] [i_14 + 2]))))) - (((/* implicit */int) (unsigned short)42938))));
                    /* LoopSeq 4 */
                    for (long long int i_15 = 1; i_15 < 10; i_15 += 4) 
                    {
                        arr_55 [i_5] [i_6] [i_12] [i_14] [i_15] [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                        var_41 = ((/* implicit */unsigned short) ((2544471635U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44)))));
                        var_42 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) var_10)) | (arr_40 [i_5] [i_6] [i_12] [i_5])))));
                        var_43 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)62776))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned int) var_9);
                        var_45 = ((/* implicit */unsigned short) (+(arr_0 [i_12 - 1])));
                        var_46 = ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_12 - 1] [i_12]))) + ((+(-4890538528746796909LL))));
                    }
                    for (unsigned short i_17 = 2; i_17 < 10; i_17 += 3) 
                    {
                        var_47 = ((/* implicit */long long int) arr_21 [i_12]);
                        var_48 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_62 [i_17 + 1] [i_17] [i_17] [i_17] [4ULL] [i_12 - 2] [i_5]))) - (var_5)));
                        var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-17792))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        arr_65 [i_5] [i_12] [i_5] [i_18] [i_18] [i_18] = ((/* implicit */long long int) (((+(arr_27 [(unsigned char)8] [(unsigned char)8] [i_18] [5LL]))) << (((((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */long long int) var_7)))) + (2540517707585426390LL)))));
                        var_50 = (-(2544471664U));
                        var_51 += ((/* implicit */unsigned char) var_13);
                        arr_66 [i_5] [i_18] [i_5] [i_5] [(unsigned short)4] = ((((/* implicit */_Bool) arr_31 [i_5] [i_12 + 1])) ? (var_9) : (((/* implicit */long long int) arr_31 [i_5] [i_12 - 2])));
                        var_52 = ((/* implicit */unsigned short) var_0);
                    }
                }
                for (unsigned short i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        var_53 = ((((/* implicit */_Bool) arr_69 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1] [i_12] [i_12])) ? (((/* implicit */int) ((short) arr_64 [i_5] [i_5] [i_5] [i_19] [i_20]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_64 [i_5] [i_6] [(unsigned char)11] [i_19] [i_20])) : (((/* implicit */int) arr_45 [i_6] [i_5] [i_12 - 1] [i_19])))));
                        arr_72 [i_20] [i_6] [i_6] [5LL] [5ULL] = ((/* implicit */unsigned short) arr_4 [i_5] [i_5] [i_5]);
                        var_54 = ((/* implicit */unsigned short) ((unsigned char) arr_25 [i_12 + 2] [i_19]));
                        var_55 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -1LL)) ? (2048025696488654710ULL) : (((/* implicit */unsigned long long int) 1750495636U))))));
                    }
                    for (unsigned short i_21 = 2; i_21 < 9; i_21 += 1) 
                    {
                        arr_76 [i_5] [8LL] [i_12] [i_6] [i_5] = ((/* implicit */short) var_8);
                        var_56 = ((unsigned short) var_10);
                        arr_77 [i_5] = ((/* implicit */unsigned int) arr_21 [i_21 + 2]);
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 4) 
                    {
                        var_57 = ((/* implicit */unsigned char) var_9);
                        var_58 = ((/* implicit */unsigned long long int) arr_15 [i_5] [i_6] [i_5] [i_6] [i_12] [i_19] [i_22]);
                        arr_81 [i_5] [i_6] [i_12] [i_22] [i_22] = (+(arr_9 [i_12 + 1] [i_6]));
                    }
                    for (unsigned short i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        var_59 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_12 - 2] [i_12 - 2]))));
                        arr_84 [i_5] [11ULL] [i_12] [i_19] [i_23] [i_23] [i_6] = ((/* implicit */unsigned int) ((arr_27 [i_5] [(unsigned short)7] [i_6] [i_12 - 2]) > (((/* implicit */unsigned long long int) var_0))));
                        var_60 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_78 [i_5] [i_12 + 2] [i_12 + 2] [9U] [i_5])) > (var_15)));
                        var_61 = ((/* implicit */unsigned char) arr_18 [i_12 + 1]);
                    }
                    arr_85 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_7);
                    var_62 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((-217155037421564839LL) < (-6419395278381170029LL))))));
                    var_63 = ((/* implicit */unsigned char) var_4);
                }
                /* LoopSeq 2 */
                for (long long int i_24 = 2; i_24 < 9; i_24 += 4) 
                {
                    arr_88 [i_5] [i_6] [i_12] [i_24] = ((/* implicit */short) var_11);
                    /* LoopSeq 1 */
                    for (unsigned short i_25 = 1; i_25 < 10; i_25 += 1) 
                    {
                        arr_91 [i_25 + 1] [(unsigned short)5] [i_12] [(unsigned short)5] [i_5] = ((/* implicit */unsigned short) arr_14 [i_24] [i_6] [i_6]);
                        var_64 = ((/* implicit */long long int) (unsigned char)198);
                        arr_92 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_24 + 2] [i_25 - 1] [i_12])) ? (((var_1) | (var_6))) : (((5106516878313920244LL) | (-9223372036854775801LL)))));
                        var_65 = var_10;
                    }
                    /* LoopSeq 1 */
                    for (int i_26 = 3; i_26 < 11; i_26 += 4) 
                    {
                        arr_95 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (~(arr_26 [i_5] [i_26 - 3] [i_12] [i_26 - 1])));
                        var_66 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                    }
                }
                for (unsigned int i_27 = 1; i_27 < 9; i_27 += 1) 
                {
                    var_67 = ((/* implicit */unsigned short) ((short) arr_22 [i_12 - 2] [i_27 + 3]));
                    arr_99 [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */long long int) ((((var_3) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42940))))) > (var_13)));
                }
            }
            var_68 = ((/* implicit */unsigned long long int) (-(arr_89 [i_5] [i_5] [10LL] [10LL] [i_5])));
            var_69 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_5] [i_5] [i_6] [i_6] [i_6])) ? (arr_67 [i_5] [i_5] [i_6] [i_6] [i_6]) : (((/* implicit */int) var_2))));
        }
        for (int i_28 = 0; i_28 < 12; i_28 += 1) /* same iter space */
        {
            var_70 = ((/* implicit */unsigned long long int) var_4);
            /* LoopNest 2 */
            for (unsigned char i_29 = 3; i_29 < 11; i_29 += 4) 
            {
                for (long long int i_30 = 4; i_30 < 8; i_30 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_31 = 0; i_31 < 12; i_31 += 1) 
                        {
                            arr_113 [i_5] [i_5] [i_28] = ((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned short)65524)))), ((+(((/* implicit */int) (unsigned char)33))))));
                            var_71 = ((/* implicit */short) var_0);
                        }
                        arr_114 [i_29] [i_28] [i_29] [i_30] = ((/* implicit */long long int) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) ((unsigned short) max((arr_41 [i_5] [i_28] [i_30]), (((/* implicit */long long int) arr_70 [i_30 - 3] [i_28] [i_29 - 2] [i_28] [i_5]))))))));
                    }
                } 
            } 
        }
        for (int i_32 = 0; i_32 < 12; i_32 += 1) /* same iter space */
        {
            var_72 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) 6419395278381170028LL)))));
            var_73 = ((/* implicit */unsigned short) max((((var_12) ^ (var_3))), (var_6)));
            arr_117 [i_5] [i_32] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (arr_56 [i_5] [i_5] [i_5] [i_32] [10LL])))) || (((var_9) != (var_0)))))), ((~(arr_97 [i_5] [i_5] [i_32] [i_32])))));
            var_74 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4276))) - ((+(25LL))))))));
        }
        arr_118 [i_5] [i_5] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (~(-1216973167925133978LL)))) ? (arr_68 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))))))) + (2147483647))) >> (((max((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (var_12))) - (4968259397394738881LL)))));
    }
}
