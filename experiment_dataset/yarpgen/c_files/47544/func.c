/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47544
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
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_9)) : (var_6)))))), (35747322042253312ULL)));
    var_17 = ((/* implicit */int) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_18 = (signed char)-2;
        arr_2 [i_0] = var_5;
    }
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */int) var_8);
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                for (unsigned short i_4 = 4; i_4 < 11; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 2; i_5 < 10; i_5 += 2) 
                        {
                            arr_18 [i_1] [i_3] [i_4] [i_3] = ((int) arr_1 [i_1]);
                            var_20 |= ((/* implicit */int) (-(17462798469715925321ULL)));
                        }
                        for (signed char i_6 = 2; i_6 < 10; i_6 += 4) 
                        {
                            arr_22 [i_2 - 2] [i_1] [i_2 - 2] [i_2 - 2] [i_6 - 2] [i_6 - 2] [i_2 - 2] = ((/* implicit */short) arr_5 [i_2 + 2]);
                            arr_23 [i_1] = ((/* implicit */signed char) var_15);
                            arr_24 [(signed char)1] [i_2] [(signed char)1] [i_4] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 35747322042253312ULL)) ? (18410996751667298304ULL) : (((/* implicit */unsigned long long int) -531817836))));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6]))))) : (((((/* implicit */_Bool) var_10)) ? (var_1) : (var_13))))))));
                        }
                        arr_25 [i_1] = ((/* implicit */signed char) ((arr_19 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 1] [i_3] [i_3]) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_12))))))));
                        var_22 = ((/* implicit */signed char) (-(var_13)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 2) /* same iter space */
        {
            var_23 += ((/* implicit */unsigned char) 35747322042253311ULL);
            arr_29 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) (signed char)124)))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 461003314U)) || (((/* implicit */_Bool) 18410996751667298313ULL))));
            var_25 = ((/* implicit */signed char) (+(arr_20 [i_1])));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_9 = 2; i_9 < 11; i_9 += 4) 
            {
                arr_34 [i_1] [i_8] [i_1] = ((/* implicit */signed char) var_14);
                arr_35 [i_1] [i_1] [i_1] = 2147483621;
                arr_36 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                /* LoopSeq 3 */
                for (unsigned int i_10 = 1; i_10 < 9; i_10 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) -1011671739);
                    arr_40 [i_1 - 2] [i_9] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18410996751667298304ULL)) ? (35747322042253311ULL) : (18410996751667298287ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -977469377)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) : (-9223372036854775786LL))))));
                }
                for (unsigned int i_11 = 1; i_11 < 9; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        arr_48 [i_12] [i_1 - 2] [i_8] [i_9] [i_11] [i_12] [i_9] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18410996751667298313ULL)) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_8] [i_1] [7U])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_4)));
                        var_27 ^= ((/* implicit */int) (signed char)64);
                        var_28 = ((/* implicit */int) var_3);
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (1863721786) : ((~(((/* implicit */int) var_4))))));
                        arr_49 [i_12] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                    }
                    var_30 += ((/* implicit */short) ((((/* implicit */_Bool) 18410996751667298313ULL)) ? (((int) arr_9 [i_1 - 2] [i_8] [i_9] [i_11])) : (((/* implicit */int) (signed char)0))));
                }
                for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    var_31 = var_13;
                    arr_53 [i_1] [8] [(short)6] [i_1] [i_8] = arr_32 [i_9 + 1] [i_8] [i_1];
                }
                arr_54 [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */short) ((2147483621) > ((~(((/* implicit */int) (short)-13335))))));
            }
            for (int i_14 = 1; i_14 < 10; i_14 += 1) 
            {
                arr_57 [i_1] = ((/* implicit */long long int) arr_1 [i_8 - 2]);
                var_32 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
            }
            arr_58 [i_1] [i_8] = ((/* implicit */int) var_8);
            arr_59 [i_1] [i_8] [i_1] = ((/* implicit */unsigned char) arr_50 [i_1]);
        }
    }
    for (unsigned char i_15 = 2; i_15 < 9; i_15 += 4) 
    {
        arr_62 [i_15 + 1] = ((/* implicit */int) arr_60 [i_15 + 3]);
        arr_63 [i_15] [(unsigned char)11] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) var_9))))));
        /* LoopSeq 3 */
        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
        {
            arr_66 [i_15] [i_15] = ((/* implicit */signed char) var_4);
            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) var_15))));
            arr_67 [i_15] [i_15] = ((/* implicit */unsigned char) (short)13334);
            /* LoopSeq 1 */
            for (int i_17 = 1; i_17 < 12; i_17 += 2) 
            {
                arr_71 [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) arr_68 [i_15] [i_15] [i_15]);
                var_34 *= ((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */unsigned long long int) var_0)), (14645949090675461551ULL))) : (((/* implicit */unsigned long long int) var_9)));
                arr_72 [i_15] [i_16] [i_17] = ((/* implicit */unsigned long long int) arr_61 [i_16] [i_16]);
            }
        }
        for (signed char i_18 = 2; i_18 < 11; i_18 += 2) 
        {
            var_35 = ((/* implicit */int) 18446744073709551360ULL);
            var_36 = ((/* implicit */int) min((var_36), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
        {
            arr_77 [i_15] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 140017285U)) ? (32256) : (var_9))))), (arr_65 [i_19])));
            var_37 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) -278429580)), (var_6)))))), (((unsigned long long int) (!(((/* implicit */_Bool) -1011671739)))))));
            arr_78 [i_19] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_15 + 2] [i_15 - 1])) - (((/* implicit */int) (unsigned char)13))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            arr_79 [i_15 - 2] = ((signed char) var_5);
        }
    }
    for (unsigned int i_20 = 0; i_20 < 13; i_20 += 4) 
    {
        arr_84 [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(255ULL)))) ? (260ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_20]))))))));
        arr_85 [i_20] [i_20] = ((/* implicit */long long int) ((874226038) | ((+(((/* implicit */int) (signed char)-37))))));
        var_38 = 2147483622;
        /* LoopSeq 3 */
        for (short i_21 = 1; i_21 < 12; i_21 += 2) /* same iter space */
        {
            arr_90 [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) 140737488355324ULL);
            /* LoopNest 2 */
            for (unsigned int i_22 = 1; i_22 < 11; i_22 += 4) 
            {
                for (long long int i_23 = 0; i_23 < 13; i_23 += 2) 
                {
                    {
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) arr_81 [i_21] [(signed char)11]))));
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) -2147483623))) ? (((/* implicit */int) (short)-11132)) : (((/* implicit */int) arr_73 [i_21 - 1] [i_22] [i_22 - 1]))))), ((((!(((/* implicit */_Bool) arr_75 [(short)6] [i_22] [i_23])))) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 241ULL)) ? (((/* implicit */int) var_10)) : (var_0)))))))))));
                    }
                } 
            } 
            var_41 = ((/* implicit */signed char) var_6);
            /* LoopNest 2 */
            for (signed char i_24 = 0; i_24 < 13; i_24 += 2) 
            {
                for (long long int i_25 = 0; i_25 < 13; i_25 += 1) 
                {
                    {
                        arr_100 [i_25] [i_20] [i_20] [i_20] = ((/* implicit */signed char) -1298379787);
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((unsigned char) (+(1194214439506261237LL)))))));
                        arr_101 [i_25] [i_25] = ((/* implicit */unsigned char) var_8);
                        var_43 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_61 [i_21 - 1] [i_21])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_61 [i_21 - 1] [i_21 - 1])) : (-1298379787)))) : (min((((/* implicit */long long int) 2147483646)), (var_12)))));
                    }
                } 
            } 
        }
        for (short i_26 = 1; i_26 < 12; i_26 += 2) /* same iter space */
        {
            arr_104 [i_20] [i_20] [i_26] = ((/* implicit */int) (signed char)103);
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 13; i_27 += 4) 
            {
                for (signed char i_28 = 0; i_28 < 13; i_28 += 2) 
                {
                    for (short i_29 = 4; i_29 < 11; i_29 += 2) 
                    {
                        {
                            arr_111 [i_20] [0] [i_20] [0] |= ((((/* implicit */_Bool) 4126473764U)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (unsigned char)244)));
                            var_44 += ((/* implicit */unsigned char) arr_95 [i_29 - 1] [i_29] [i_27]);
                            var_45 = max((var_12), (var_12));
                            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13329))) : (arr_81 [i_29 - 4] [i_26 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2147483626) : (arr_99 [(short)2] [i_27] [(short)2] [8] [i_27] [i_27])))) ? (((int) (short)13335)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_30 = 1; i_30 < 12; i_30 += 2) /* same iter space */
        {
            arr_114 [i_20] [i_30] [i_30] |= ((/* implicit */signed char) max((arr_60 [i_20]), (((/* implicit */short) arr_89 [i_20] [i_30] [i_30]))));
            var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_64 [i_30 + 1])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_31 = 0; i_31 < 13; i_31 += 2) 
            {
                var_48 = ((short) var_11);
                arr_118 [i_30] [i_30] = ((/* implicit */unsigned long long int) var_12);
            }
            var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) 18446744073709551615ULL))) * (((unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */unsigned long long int) min((arr_81 [i_20] [i_30]), (((/* implicit */unsigned int) arr_88 [i_20] [i_30] [i_20]))))) : (max((((/* implicit */unsigned long long int) arr_92 [i_20] [i_20] [i_20])), (35747322042253311ULL))))) : (((/* implicit */unsigned long long int) var_9))));
        }
    }
}
