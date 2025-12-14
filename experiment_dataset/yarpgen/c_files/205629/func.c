/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205629
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_3))));
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
    var_13 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(3329416763U)))))))));
            var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (max((arr_5 [i_0 + 1] [i_1 - 2]), (((/* implicit */unsigned int) (_Bool)1))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_16 = max((((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) arr_4 [i_0 + 2])) : (min((arr_9 [i_0] [9ULL]), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [(short)4]) / (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [11ULL] [(_Bool)0]))))) : (min((arr_11 [i_5]), (((/* implicit */int) arr_7 [(short)3]))))))));
                                arr_17 [i_2] [i_0] [i_2] [i_3] [i_4] [(short)11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+((~(arr_4 [i_5])))))), (var_10)));
                            }
                        } 
                    } 
                    arr_18 [i_3] [2U] [i_0] [(signed char)2] |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2])))))))), (917339444U)));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_9 [i_0 - 1] [i_0 + 2]))))))));
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 7; i_6 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_6]))))))))));
            arr_24 [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [(unsigned char)12] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) arr_11 [i_6 - 1]))));
        }
        for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            arr_28 [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6 - 1] [(unsigned short)2]))));
            arr_29 [i_6] [i_6] [i_6 + 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20094))));
            arr_30 [i_6] = ((/* implicit */unsigned short) (-(arr_23 [i_6 + 3] [i_6 + 1])));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                arr_33 [i_6 + 2] [4LL] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [12U])) ? (451812698U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? ((~(arr_11 [11ULL]))) : (((/* implicit */int) arr_2 [i_6 + 3]))));
                arr_34 [i_6] [7ULL] [(_Bool)1] [i_8] = ((/* implicit */int) ((long long int) (-(((/* implicit */int) (short)15)))));
            }
        }
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 7; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) 5582298010384342805ULL)) && ((_Bool)1))))));
                    /* LoopSeq 3 */
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) (~(((unsigned long long int) arr_20 [i_6 + 1]))));
                            arr_45 [i_10] [i_11] = ((/* implicit */short) ((10425983951604390954ULL) + (((/* implicit */unsigned long long int) arr_5 [i_10 + 1] [i_10 + 1]))));
                        }
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_31 [i_6 + 1] [i_6 + 2] [i_6 - 1]))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_10 + 2]))))))))));
                            var_23 = ((/* implicit */long long int) (~(arr_15 [i_10] [i_10 + 3] [i_11] [i_6 + 3] [i_6])));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 917339467U)))))));
                            arr_49 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(13925607123100775112ULL)))) ? (arr_27 [i_10 + 2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)192)))))));
                        }
                        for (int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) ((short) arr_8 [i_6 + 1]));
                            var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-30768))));
                            var_27 = ((/* implicit */short) ((unsigned short) arr_5 [i_6 + 1] [i_10 + 2]));
                        }
                        arr_53 [i_11] [2LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_27 [i_11]) / (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_38 [i_10 + 3] [i_10 + 1] [i_6 - 1] [i_6 - 1])));
                        var_28 += ((/* implicit */unsigned short) arr_51 [i_12] [(short)3] [i_11] [i_10 - 1] [i_6 + 1]);
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10425983951604390951ULL)) ? (8929842231404733378ULL) : (((/* implicit */unsigned long long int) arr_20 [i_12]))))) && (((/* implicit */_Bool) (+(arr_3 [i_12]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 3; i_16 < 9; i_16 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) (unsigned char)2);
                            arr_57 [i_6] [i_10] [i_16] [i_11] [i_12] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-20540))));
                        }
                    }
                    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        arr_60 [i_6 + 2] [3ULL] [i_11] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-20515))));
                        arr_61 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 1660456171U))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((4214783887U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        arr_65 [i_6] [i_6] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_39 [5U] [(unsigned char)1]))))));
                        /* LoopSeq 4 */
                        for (long long int i_19 = 0; i_19 < 10; i_19 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (_Bool)1))));
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (~(((/* implicit */int) arr_56 [i_6] [i_11] [4LL] [(_Bool)1] [(_Bool)1] [i_6 + 2] [4U])))))));
                        }
                        for (long long int i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
                        {
                            arr_72 [i_6 + 2] [i_6] [i_6] = ((/* implicit */unsigned int) ((arr_44 [i_6] [i_6 + 1] [(short)9] [i_10 + 3] [i_10]) ^ (arr_44 [i_6] [i_6 - 1] [(short)9] [i_10 + 3] [(short)9])));
                            arr_73 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] |= ((/* implicit */signed char) (+(((/* implicit */int) arr_48 [(short)0] [1LL] [i_6] [i_6 + 2] [i_10 + 1]))));
                        }
                        for (long long int i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
                        {
                            arr_76 [8ULL] [i_10] [(short)4] = ((/* implicit */long long int) (+(((/* implicit */int) arr_52 [i_21] [i_21] [6] [6] [i_21]))));
                            arr_77 [i_6] [i_10] [i_11] [i_18] [i_18] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_35 [i_6] [i_6 - 1])) + (arr_59 [i_6] [i_6] [i_6] [i_6 + 2] [i_21] [(unsigned char)6])));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_39 [i_10 - 1] [i_6 + 1])) << ((((+(4214783861U))) - (4214783844U)))));
                        }
                        for (long long int i_22 = 0; i_22 < 10; i_22 += 4) 
                        {
                            arr_80 [3ULL] [i_18] [i_11] [i_10] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [3ULL] [i_11] [i_18]))))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_79 [i_6] [i_10]))) >= (var_9))))));
                            arr_81 [5ULL] = ((/* implicit */unsigned char) ((short) ((_Bool) arr_58 [i_6])));
                            arr_82 [i_6] [5] [(unsigned char)6] [i_18] [(short)9] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_68 [i_6 + 2] [i_6] [i_10 + 2] [i_10 + 3] [(signed char)3]))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_23 = 0; i_23 < 10; i_23 += 4) 
        {
            arr_87 [i_6] [i_6] = ((((/* implicit */int) (short)1249)) - (1235218045));
            arr_88 [5ULL] [i_6] [i_23] &= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) ((unsigned char) -11LL)))));
            arr_89 [i_23] [(unsigned short)6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
        }
        for (unsigned int i_24 = 0; i_24 < 10; i_24 += 4) 
        {
            var_35 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_40 [i_6] [i_6] [i_6] [i_6])) ? (11625460629675423756ULL) : (((/* implicit */unsigned long long int) arr_38 [i_6] [i_6 + 2] [i_6 + 2] [(short)6]))))));
            /* LoopSeq 1 */
            for (unsigned int i_25 = 0; i_25 < 10; i_25 += 4) 
            {
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((13932753868369107424ULL) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_50 [i_6] [0] [(_Bool)1] [6U] [i_6] [(unsigned char)0] [i_25]))))))))));
                arr_94 [i_25] [i_6] [i_24] [i_6] = ((/* implicit */short) (+(arr_4 [i_24])));
                /* LoopSeq 1 */
                for (short i_26 = 0; i_26 < 10; i_26 += 1) 
                {
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_6 - 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_78 [i_26] [i_25] [i_24] [i_24] [i_6]))))) : (var_8)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 3) 
                    {
                        arr_99 [5ULL] [(short)4] [i_25] [9ULL] [(short)5] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_6 + 2] [0LL] [i_6 + 1] [i_6 + 1] [0LL])) ? (10425983951604390966ULL) : (((/* implicit */unsigned long long int) arr_44 [i_6 + 2] [(short)7] [i_6 + 2] [i_25] [i_27]))));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */unsigned long long int) (~(arr_86 [i_6] [i_24])))) == (10425983951604390951ULL))))));
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [(short)8] [9LL] [i_25] [2U])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)1))))) : (((arr_90 [i_6 - 1] [i_6]) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_24] [i_25] [i_24]))))))))));
                        var_40 ^= ((/* implicit */int) (short)-7253);
                        arr_100 [i_24] [(short)5] [(short)5] [i_27] = ((arr_42 [i_25] [i_25] [i_25]) == (((/* implicit */long long int) arr_83 [i_27])));
                    }
                    var_41 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_79 [i_6 - 1] [i_6 + 3])) >> ((((-(((/* implicit */int) (short)-1269)))) - (1262)))));
                    /* LoopSeq 1 */
                    for (short i_28 = 2; i_28 < 8; i_28 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)20539)))))));
                        var_43 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_52 [i_28 - 1] [i_28 - 1] [i_25] [(signed char)7] [i_6 - 1]))));
                    }
                    arr_105 [4LL] [3ULL] [i_24] [i_24] [(short)1] [i_6] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_48 [i_6] [i_6 + 3] [i_24] [i_26] [i_25]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_29 = 0; i_29 < 10; i_29 += 2) 
                {
                    for (unsigned char i_30 = 0; i_30 < 10; i_30 += 4) 
                    {
                        {
                            arr_111 [(_Bool)1] [i_29] [(signed char)2] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            arr_112 [i_6] [6U] [6U] [3ULL] [i_29] [i_30] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_66 [i_6 - 1] [i_6 + 2]))));
                        }
                    } 
                } 
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_31 = 0; i_31 < 13; i_31 += 2) 
    {
        var_44 = ((/* implicit */short) max((var_44), ((short)-31802)));
        arr_115 [i_31] = ((/* implicit */long long int) ((arr_13 [5ULL] [i_31] [(unsigned short)4] [i_31]) ^ ((-(10425983951604390966ULL)))));
        arr_116 [(unsigned char)1] &= (+(((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */int) var_0)) : (arr_0 [i_31] [0U]))));
    }
    for (short i_32 = 0; i_32 < 11; i_32 += 1) 
    {
        arr_120 [i_32] = ((/* implicit */short) (unsigned char)5);
        /* LoopSeq 3 */
        for (short i_33 = 3; i_33 < 10; i_33 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_34 = 0; i_34 < 11; i_34 += 2) 
            {
                for (long long int i_35 = 0; i_35 < 11; i_35 += 4) 
                {
                    for (short i_36 = 0; i_36 < 11; i_36 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) (unsigned short)56549))));
                            var_46 = ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) (unsigned char)255)) ? (arr_12 [i_33] [i_34] [i_35]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))))))), (((unsigned long long int) 3854206535446702915ULL))));
                        }
                    } 
                } 
            } 
            arr_129 [i_32] [i_32] = ((/* implicit */signed char) min((((/* implicit */short) (unsigned char)164)), ((short)10453)));
            arr_130 [i_32] [i_32] [i_32] = ((/* implicit */unsigned short) (~((-(1220197434)))));
        }
        for (short i_37 = 3; i_37 < 10; i_37 += 3) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) arr_133 [i_32])))));
            arr_134 [i_32] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) ((unsigned long long int) 2147483639)))))), (max((max((arr_132 [i_32] [i_37 - 2]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((int) (_Bool)1)))))));
        }
        for (int i_38 = 0; i_38 < 11; i_38 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_39 = 2; i_39 < 10; i_39 += 3) 
            {
                for (short i_40 = 0; i_40 < 11; i_40 += 3) 
                {
                    {
                        var_48 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_1)), ((-(3854206535446702915ULL)))));
                        var_49 ^= ((/* implicit */short) arr_122 [i_38] [(short)8] [i_40]);
                    }
                } 
            } 
            var_50 = ((/* implicit */short) min((((((long long int) (_Bool)1)) | (((/* implicit */long long int) max((arr_11 [0]), (((/* implicit */int) arr_126 [7] [i_38] [(short)1]))))))), (((/* implicit */long long int) arr_119 [i_32]))));
        }
    }
}
