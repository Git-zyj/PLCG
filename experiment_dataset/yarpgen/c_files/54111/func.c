/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54111
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
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        arr_3 [6ULL] [6ULL] = ((/* implicit */long long int) (+((+(((var_0) + (arr_2 [i_0])))))));
        arr_4 [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))) * (((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3])) ? (6267697973620862238ULL) : (arr_1 [i_0 + 1] [(signed char)8])))));
        var_11 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (6267697973620862234ULL) : (arr_1 [i_0] [i_0])))) ? (((13117435249503910086ULL) << (((((/* implicit */int) arr_0 [i_0] [(signed char)5])) - (13870))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [5ULL] [5ULL])))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        var_12 &= ((/* implicit */int) ((((((/* implicit */int) (unsigned short)60006)) == (((/* implicit */int) arr_7 [i_1] [i_1])))) ? ((-(var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1])))));
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1 + 2]))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(266545650U)))) ? (((/* implicit */int) ((6267697973620862238ULL) >= (((/* implicit */unsigned long long int) arr_5 [(unsigned char)9]))))) : (((/* implicit */int) var_8))));
        var_15 = ((/* implicit */unsigned int) ((unsigned char) ((0) ^ (arr_5 [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) min((9223372036854775807LL), (var_10)))))) / (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) + (var_10))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)87))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    arr_18 [i_2] [i_3] [i_4 + 1] [i_5 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)45)) + (((/* implicit */int) arr_17 [i_2] [i_2] [i_4])))))));
                    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) arr_12 [i_6 + 3] [i_6 + 3] [0ULL] [i_6 + 1]);
                        var_19 = ((/* implicit */_Bool) arr_20 [i_4 - 1] [i_4 + 1] [i_5 + 1] [i_5 + 1] [i_6 - 1]);
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_0))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_2] [i_3] [4] [i_2] [i_2] [4] = ((/* implicit */short) (-(((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [(signed char)5] [i_4])))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((9768396223466203816ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_3] [i_4 + 2])) ? (((/* implicit */int) arr_16 [i_2] [i_3] [i_4 + 2] [i_7])) : (((/* implicit */int) (short)3087))))))))));
                        var_22 = ((/* implicit */signed char) 9223372036854775807LL);
                        var_23 = ((/* implicit */long long int) var_9);
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(arr_20 [(_Bool)1] [i_5 - 1] [i_5 - 1] [i_5] [i_5])));
                        var_24 = ((/* implicit */int) ((unsigned short) ((long long int) (_Bool)1)));
                    }
                }
                var_25 = (+(((((arr_20 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_4 + 2]) + (2147483647))) << (((((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)9165)) - (9165))))) - (163633160816865569LL))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 2; i_9 < 12; i_9 += 1) 
                {
                    for (unsigned int i_10 = 2; i_10 < 9; i_10 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? ((+(33554431U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)31)))))))), (((unsigned long long int) arr_12 [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_4 + 1]))));
                            arr_36 [(_Bool)0] [i_9] [i_4] [i_3] [i_2] = ((/* implicit */long long int) ((((unsigned int) arr_21 [i_4 + 2] [i_10 - 1] [5ULL])) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_9 + 1])) * (arr_20 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_9 + 1] [i_9 - 2]))))));
                            var_27 = ((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) ((_Bool) arr_23 [i_2] [i_3]))), (((((/* implicit */_Bool) 8678347850243347799ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)10] [i_2]))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (((!(((/* implicit */_Bool) var_3)))) ? (((((((/* implicit */_Bool) 8678347850243347807ULL)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) var_8)))) + ((+(((/* implicit */int) var_8)))))) : (var_2))))));
            }
            /* vectorizable */
            for (unsigned int i_11 = 1; i_11 < 11; i_11 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) ((_Bool) arr_17 [i_11 + 1] [i_11 + 1] [i_11 + 2]));
                arr_40 [i_2] [i_11] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_39 [i_3] [i_3] [i_3] [i_2])) : (arr_8 [i_3] [i_11])))) ^ (((var_8) ? (9768396223466203816ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
            }
            for (unsigned int i_12 = 1; i_12 < 11; i_12 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [2U])) ? ((+(1633855189))) : (((/* implicit */int) (short)-3088))))) ? (((/* implicit */int) (short)12853)) : (((((/* implicit */int) arr_35 [i_2] [i_3] [i_3] [11U] [i_12 + 1] [i_12 + 1])) / (((/* implicit */int) arr_33 [i_3] [i_12 - 1]))))));
                var_31 = ((/* implicit */int) (~(((((unsigned int) var_0)) / (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_2] [i_3] [i_12] [i_3])) + ((-(-223484475)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_12 + 1] [i_12 + 2] [i_12]))))) : (min((((/* implicit */unsigned int) var_3)), (arr_8 [i_2] [i_3])))));
                /* LoopSeq 3 */
                for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) / (max((((/* implicit */unsigned long long int) arr_35 [i_2] [i_2] [i_3] [i_12 + 2] [(short)0] [i_13])), (20ULL))))))));
                    arr_46 [i_2] [i_3] [12U] [(_Bool)1] [i_12 - 1] = ((/* implicit */_Bool) min(((~(arr_38 [i_12 + 2] [i_12 + 1] [i_12 + 1]))), (max((arr_38 [i_12 + 2] [i_12 + 2] [9]), (((/* implicit */int) (_Bool)0))))));
                    var_34 = ((/* implicit */unsigned char) 0ULL);
                }
                for (int i_14 = 1; i_14 < 10; i_14 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((signed char) ((signed char) (-(((/* implicit */int) arr_44 [i_2] [8] [i_12])))))))));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((6267697973620862241ULL) + (((/* implicit */unsigned long long int) 1524651033U))))) ? (((((/* implicit */int) arr_30 [i_14 + 1] [i_12] [i_12] [i_12])) / (((/* implicit */int) arr_30 [i_14 + 1] [i_2] [i_3] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (+(var_2)))))))));
                    var_37 = max((((var_10) / (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [5LL] [5LL]), (arr_9 [i_3] [i_14]))))))), (((/* implicit */long long int) min((((unsigned short) 3953293724U)), (((/* implicit */unsigned short) ((unsigned char) arr_14 [i_2] [i_2] [i_12] [i_2])))))));
                }
                for (int i_15 = 1; i_15 < 10; i_15 += 3) /* same iter space */
                {
                    arr_51 [i_3] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                    var_38 = ((/* implicit */signed char) arr_42 [i_12]);
                }
            }
            var_39 = ((/* implicit */unsigned char) ((short) (signed char)-1));
        }
        /* LoopSeq 2 */
        for (short i_16 = 0; i_16 < 13; i_16 += 1) 
        {
            var_40 = (-(((/* implicit */int) ((unsigned short) arr_16 [(_Bool)1] [i_2] [i_16] [i_16]))));
            var_41 += ((/* implicit */_Bool) ((((arr_42 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_2] [i_2] [i_2] [i_2]))))) / (((/* implicit */long long int) ((/* implicit */int) ((arr_42 [i_2]) < (((/* implicit */long long int) ((/* implicit */int) (short)17675)))))))));
            var_42 = ((/* implicit */int) min((((max((((/* implicit */unsigned long long int) arr_34 [i_2] [i_2] [i_2] [i_2] [(signed char)5] [i_16])), (arr_22 [i_2] [i_2]))) / (arr_19 [11] [i_16] [i_16] [i_16] [0ULL]))), (((/* implicit */unsigned long long int) arr_53 [i_2] [i_2] [i_16]))));
            var_43 -= ((/* implicit */signed char) ((((((unsigned int) arr_49 [i_2] [i_16] [i_2])) << ((((-(var_10))) - (9059738876037910231LL))))) << (((((unsigned int) ((arr_53 [i_2] [i_16] [i_16]) ? (arr_22 [i_16] [i_2]) : (((/* implicit */unsigned long long int) arr_49 [i_16] [i_16] [i_16]))))) - (4109435399U)))));
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 3) 
                {
                    {
                        var_44 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_5) ? (min((var_0), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) (~(1633855189))))))) == (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_2] [2ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-6275))))) % (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [11U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_2] [i_16] [i_17] [i_18]))) : (var_7)))))));
                        arr_58 [i_2] [i_16] [i_16] [i_17] [i_18] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1095607207327453282LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_44 [i_2] [i_16] [i_18 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-17688)))) : (((((/* implicit */_Bool) arr_26 [i_2] [i_16] [i_16] [i_17] [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) : (var_4))))));
                        arr_59 [i_16] [6U] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_27 [i_2] [i_16] [i_17] [i_18] [i_18 + 2]), (arr_27 [i_2] [i_16] [i_17] [i_17] [i_18 + 2]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_19 = 1; i_19 < 11; i_19 += 1) 
                        {
                            arr_62 [i_17] [i_17] [i_17] [i_17] [i_2] &= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_30 [i_18 + 3] [i_18] [(_Bool)1] [i_19 + 2])) + (((/* implicit */int) arr_30 [i_18 - 1] [i_18 + 1] [i_19 + 2] [i_19 + 2])))));
                            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_18 - 1] [i_19 + 2])) ? (((/* implicit */int) arr_9 [i_18 - 1] [i_19 + 1])) : (((/* implicit */int) arr_9 [i_18 + 3] [i_19 + 1]))))) ? (((long long int) arr_9 [i_18 + 2] [i_19 - 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_18 + 3] [i_19 + 2])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_18 + 2] [i_19 + 1]))))))));
                            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)43))))), (((signed char) arr_29 [(short)7] [(short)7] [(_Bool)0] [6U] [(_Bool)0]))))) ? ((-(((arr_42 [i_17]) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [12] [i_2]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))))));
                        }
                    }
                } 
            } 
        }
        for (short i_20 = 0; i_20 < 13; i_20 += 1) 
        {
            var_47 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [(unsigned char)8] [i_20] [i_20] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_2] [i_20] [i_2] [i_20] [i_20]))) : ((-(arr_22 [1] [1]))));
            /* LoopNest 2 */
            for (unsigned int i_21 = 1; i_21 < 11; i_21 += 1) 
            {
                for (unsigned short i_22 = 0; i_22 < 13; i_22 += 3) 
                {
                    {
                        var_48 = ((/* implicit */int) var_0);
                        arr_70 [i_2] [i_20] [i_21 + 2] [i_22] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_29 [i_21] [i_21] [i_21] [8ULL] [i_21])), (((((/* implicit */int) (signed char)102)) + (((/* implicit */int) arr_56 [i_21] [6ULL] [i_21] [i_21]))))));
                    }
                } 
            } 
            var_49 *= ((/* implicit */signed char) (-(((int) arr_33 [i_20] [i_2]))));
        }
        arr_71 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_0)))));
    }
    var_50 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
    var_51 &= (~(((((/* implicit */_Bool) (+(var_3)))) ? ((-(var_3))) : (((/* implicit */int) (!(var_5)))))));
}
