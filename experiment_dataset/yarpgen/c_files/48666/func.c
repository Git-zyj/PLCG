/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48666
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036787666944LL)) ? (2700671586U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) -859525053)))) : ((((_Bool)1) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
            arr_6 [i_0] [i_0] [i_1] = max(((-(((/* implicit */int) ((((/* implicit */int) arr_2 [(short)4])) > (((/* implicit */int) arr_2 [(short)7]))))))), (((/* implicit */int) ((unsigned char) max((((/* implicit */short) var_18)), (arr_4 [i_0] [i_0] [i_0]))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2]))))), (((((/* implicit */_Bool) ((1433174711U) | (((/* implicit */unsigned int) -859525063))))) ? (arr_1 [i_2]) : (((unsigned int) (unsigned char)141))))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */short) (-((~(((arr_1 [i_3]) << (((2700671598U) - (2700671572U)))))))));
                var_20 *= ((/* implicit */_Bool) (short)-1);
                var_21 += ((/* implicit */unsigned int) ((int) (((-(((/* implicit */int) var_18)))) % (((/* implicit */int) ((short) 2700671586U))))));
                /* LoopSeq 4 */
                for (int i_4 = 1; i_4 < 10; i_4 += 2) /* same iter space */
                {
                    arr_16 [(short)5] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((min((((/* implicit */int) min((arr_0 [5U] [5U]), (((/* implicit */short) (unsigned char)194))))), (((((/* implicit */int) (short)(-32767 - 1))) + (-859525053))))) > ((-(((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_2))))))));
                    var_22 = arr_8 [i_3] [i_2] [i_0];
                }
                for (int i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    arr_20 [(short)8] [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_5 + 1])) > (((/* implicit */int) arr_17 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])))) ? (((/* implicit */unsigned int) (+(arr_18 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])))) : (arr_1 [i_5])));
                    var_23 ^= ((/* implicit */short) min((((var_0) << (((((((/* implicit */int) arr_14 [i_0] [i_5 + 1] [i_5 + 1] [i_5] [i_0] [i_2])) + (29309))) - (12))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_0] [i_5 + 1] [(short)5] [7LL] [7LL])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 2; i_6 < 8; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_6 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_2] [(unsigned char)0] [5])) || (((/* implicit */_Bool) (short)-1))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_2] [i_2])) || (((/* implicit */_Bool) var_17)))))));
                        var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (arr_19 [9] [i_2] [i_6 - 2]) : (((/* implicit */int) arr_3 [i_0]))));
                    }
                }
                for (int i_7 = 2; i_7 < 8; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) var_5);
                        var_27 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)200))))) ? (min((((/* implicit */long long int) min((arr_15 [i_0] [i_2] [i_2] [i_2]), ((unsigned char)115)))), (arr_25 [i_0] [i_0] [i_0] [i_3] [(_Bool)1] [i_8]))) : (((/* implicit */long long int) (~(arr_21 [(unsigned char)8] [i_0] [i_8] [i_8] [i_8 - 1] [i_0] [i_7 - 2]))))));
                        var_28 = ((/* implicit */unsigned char) (-(1322178757U)));
                        var_29 *= ((/* implicit */short) ((arr_26 [i_0] [i_2] [i_3] [i_7] [i_7 + 2] [i_8 - 1]) * (((arr_26 [i_2] [i_2] [i_0] [8U] [i_7 - 1] [i_8 - 1]) & (((/* implicit */unsigned int) 1))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_30 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_18 [(short)5] [7U] [(unsigned char)0] [6])))))))));
                        arr_32 [i_2] = ((/* implicit */unsigned char) arr_12 [i_0] [i_2]);
                        arr_33 [i_2] [i_7 + 1] [(unsigned char)6] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_18)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((short) (short)31447)))))) : (((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_0] [i_7 - 2] [i_7 + 2]))) : (var_0)))));
                    }
                    var_31 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_15 [i_3] [i_2] [i_3] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_2] [i_0] [i_7 + 3]))) : (407753223U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7]))))) <= (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (arr_26 [i_7 + 1] [i_2] [i_2] [(unsigned char)3] [i_7 - 2] [i_2]) : (((/* implicit */unsigned int) arr_18 [i_7] [i_3] [i_0] [i_0]))))));
                }
                for (int i_10 = 2; i_10 < 8; i_10 += 4) /* same iter space */
                {
                    arr_37 [i_0] [i_2] [2U] [i_2] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)115)), ((short)-2138)))) && (((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) -1086258226)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (unsigned char)46))))));
                    var_32 = ((unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_2] [i_10 - 1] [i_10 + 2] [i_10 - 1])) : (arr_30 [i_2])));
                    arr_38 [i_3] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)110))));
                }
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_25 [i_3] [i_3] [i_2] [i_2] [i_0] [i_0]), (var_6)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_30 [i_2]) : (((/* implicit */int) arr_11 [i_2] [i_2]))))) ? (((/* implicit */int) ((short) arr_11 [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_11 [i_3] [i_2])) ? (-859525053) : (((/* implicit */int) var_4)))))) : ((-(((/* implicit */int) (short)3154))))));
            }
            for (int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_18)) : ((-(((/* implicit */int) var_4))))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2700671586U)) ? (arr_19 [i_0] [i_0] [i_11]) : (arr_19 [i_0] [i_2] [i_11])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7))))))))))));
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 10; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */int) min(((_Bool)1), (((arr_40 [i_0] [i_2] [i_12 - 2] [i_12]) > (arr_40 [i_0] [i_2] [i_12 - 2] [i_12])))));
                            var_36 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_39 [i_12 + 1] [i_2] [i_2] [(unsigned char)2])) && (((/* implicit */_Bool) (short)-4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_12 + 1] [i_2] [i_2] [i_12])))))) : (((arr_39 [i_12 - 1] [i_2] [i_2] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)16)))))));
                        }
                    } 
                } 
            }
            arr_47 [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(1152903912420802560LL)))))) ? (min((((var_9) ? (arr_12 [i_0] [i_2]) : (((/* implicit */int) arr_15 [i_2] [(short)5] [(short)5] [i_2])))), (((arr_40 [8U] [8U] [i_2] [i_2]) / (((/* implicit */int) var_11)))))) : (((/* implicit */int) (unsigned char)124))));
        }
        var_37 -= ((/* implicit */_Bool) var_8);
        var_38 = ((/* implicit */short) -367358634);
    }
    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6))) : (max((((((/* implicit */long long int) ((/* implicit */int) var_4))) - (9158888432811859548LL))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned char)238)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_14 = 2; i_14 < 13; i_14 += 4) 
    {
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 13; i_15 += 4) 
        {
            for (short i_16 = 1; i_16 < 13; i_16 += 2) 
            {
                {
                    var_40 = ((/* implicit */int) max((var_40), ((~(((/* implicit */int) ((3255951550U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-11))))))))));
                    var_41 = ((/* implicit */unsigned char) var_15);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_17 = 2; i_17 < 14; i_17 += 1) /* same iter space */
        {
            var_42 *= ((/* implicit */_Bool) min((((((/* implicit */int) ((short) 0))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_14 + 2] [i_17]))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) < (arr_48 [i_14 + 1] [i_17 + 1]))))));
            var_43 = ((/* implicit */short) max((max((((/* implicit */int) (!(arr_55 [i_17])))), ((((_Bool)1) ? (((/* implicit */int) arr_55 [(short)13])) : (((/* implicit */int) arr_51 [i_14])))))), (((((/* implicit */_Bool) arr_49 [i_14 - 2])) ? (((/* implicit */int) arr_53 [i_14 + 1] [i_14 - 2] [12] [i_14 + 1])) : (((/* implicit */int) arr_55 [i_14 + 2]))))));
            var_44 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_52 [i_14] [i_17] [9U]), (((/* implicit */long long int) 3082139083U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)13848))))) : (((/* implicit */int) ((((/* implicit */int) arr_55 [i_14])) > (((/* implicit */int) arr_54 [i_14] [i_17])))))))), (3082139083U)));
            arr_57 [i_14] [i_17] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_54 [i_14 - 2] [i_17 - 1])))))));
        }
        for (int i_18 = 2; i_18 < 14; i_18 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned int i_19 = 2; i_19 < 14; i_19 += 2) 
            {
                arr_62 [i_14] [i_14 + 2] [i_18] [i_14 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) 5056713001263348462LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_14] [(unsigned char)2]))) : (((unsigned int) arr_54 [i_19] [i_19]))));
                /* LoopSeq 1 */
                for (int i_20 = 0; i_20 < 15; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_21 = 0; i_21 < 15; i_21 += 1) 
                    {
                        arr_68 [i_18] [i_18] [i_21] [5] [i_21] [i_14] [i_14 + 1] = ((/* implicit */short) (~(((/* implicit */int) (!(arr_64 [i_20] [i_14 - 2] [1U] [1U] [1U] [i_14]))))));
                        arr_69 [(short)14] [(short)10] [i_19 + 1] [10LL] [(short)10] [i_18] [i_18 - 1] = ((/* implicit */short) max(((-(((/* implicit */int) min(((short)-28524), (((/* implicit */short) arr_64 [i_14 - 2] [i_18] [i_19] [13LL] [i_21] [(short)12]))))))), (((/* implicit */int) min((arr_60 [i_14 + 2] [i_14 - 1]), (arr_60 [i_14 - 2] [i_18 - 2]))))));
                    }
                    var_45 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned int) arr_60 [i_19 + 1] [i_18 - 2]))), ((~(-5056713001263348453LL)))));
                    var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (5056713001263348454LL) : (((/* implicit */long long int) ((/* implicit */int) max(((short)(-32767 - 1)), ((short)32767)))))))) ? (((unsigned int) arr_56 [i_18] [i_19])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_14] [i_19])) ? (arr_58 [i_19] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_52 [i_14] [i_19] [i_19])))) : (arr_48 [i_14 + 2] [i_14 - 1]))))))));
                    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) arr_55 [i_20]))));
                }
            }
            for (short i_22 = 0; i_22 < 15; i_22 += 2) 
            {
                var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) max((var_0), (((/* implicit */long long int) var_8)))))) ? (((/* implicit */int) ((short) ((((((/* implicit */int) (short)-11983)) + (2147483647))) << (((((-18) + (19))) - (1))))))) : (((/* implicit */int) ((short) (-2147483647 - 1)))))))));
                var_49 |= ((/* implicit */unsigned char) min(((-(5056713001263348438LL))), ((((-(1544779392623561012LL))) * (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                var_50 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_59 [i_18] [(unsigned char)2])) >> (((arr_52 [i_14 + 1] [i_18] [i_22]) - (5681887381845637729LL)))))), (arr_56 [i_14] [i_18])));
                var_51 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) % (var_7)));
            }
            /* vectorizable */
            for (long long int i_23 = 0; i_23 < 15; i_23 += 1) /* same iter space */
            {
                arr_74 [i_14] [i_18 - 1] [i_18] [i_18] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_53 [(short)0] [(short)0] [i_23] [i_23])))) > (((/* implicit */int) arr_64 [i_14] [i_14 + 1] [i_14 - 2] [i_14] [i_18 - 2] [(_Bool)1]))));
                var_52 = (((~(5039770616623666689LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_14 - 1] [i_14 + 1]))));
            }
            /* vectorizable */
            for (long long int i_24 = 0; i_24 < 15; i_24 += 1) /* same iter space */
            {
                var_53 = ((/* implicit */unsigned char) (!(((((/* implicit */int) (short)-26333)) < (((/* implicit */int) arr_72 [i_14] [i_18] [i_18] [i_24]))))));
                var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) % (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_18] [i_18] [i_18 - 2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)2044)) >= (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) -576460752303423488LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21093))) : (var_6)))));
                var_55 = ((/* implicit */long long int) ((((/* implicit */int) arr_65 [i_14 - 2] [i_18 + 1])) == (((/* implicit */int) (short)6721))));
            }
            var_56 *= ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)156)) ? (min((arr_50 [i_14] [i_18]), (((/* implicit */long long int) arr_72 [i_14 + 1] [i_14] [i_14] [i_18])))) : (max((7496364476269990235LL), (((/* implicit */long long int) -933412112)))))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_70 [i_14] [i_18] [i_14])))))))));
            arr_78 [i_18] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_71 [i_18] [i_14] [i_18]))) | (arr_56 [i_14 - 2] [i_18])))));
            arr_79 [i_18] [i_18] = ((((/* implicit */int) var_1)) << (((((/* implicit */int) (short)10852)) - (10836))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            var_57 = ((/* implicit */short) ((((/* implicit */int) arr_64 [i_14 - 2] [i_14 + 1] [i_14 + 2] [i_14] [i_14 - 1] [i_14 - 2])) ^ (((/* implicit */int) arr_64 [i_14] [i_14 - 1] [i_14] [i_14] [i_14 + 1] [i_14 - 1]))));
            var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_25] [i_25] [i_14] [i_14 - 1])) ? (((/* implicit */int) arr_51 [i_25])) : (((/* implicit */int) var_2))));
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            arr_85 [i_26] [i_26] [i_26] = ((/* implicit */unsigned char) arr_64 [i_26] [i_14] [i_14 - 1] [i_14] [i_14 - 1] [i_14]);
            var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_52 [i_14] [i_14 - 1] [i_26]), (-7652847973664340313LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)10839))))) : (min((arr_52 [i_14 + 2] [i_14 - 2] [i_14]), (5056713001263348452LL)))));
        }
        /* vectorizable */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
        {
            var_60 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1544779392623561036LL)) ? (1544779392623560994LL) : (((/* implicit */long long int) ((/* implicit */int) arr_86 [i_14] [i_14] [i_27])))))) ? (((/* implicit */int) arr_83 [i_14] [i_27] [i_27])) : (18)));
            arr_90 [(unsigned char)8] = ((/* implicit */short) (+(((/* implicit */int) arr_60 [i_14 - 1] [i_14 + 1]))));
        }
        arr_91 [i_14] [i_14] = ((/* implicit */unsigned int) 8075006577848960390LL);
    }
    /* vectorizable */
    for (unsigned char i_28 = 0; i_28 < 12; i_28 += 3) 
    {
        arr_96 [(_Bool)1] = ((unsigned char) 0LL);
        var_61 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -113940038)) ? (933669134U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [(_Bool)1] [i_28] [(_Bool)1]))))));
        var_62 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (0LL) : (1544779392623561006LL))))));
    }
    for (short i_29 = 0; i_29 < 16; i_29 += 4) 
    {
        arr_99 [i_29] [i_29] = ((/* implicit */unsigned char) (+((~(((arr_97 [i_29]) & (((/* implicit */long long int) ((/* implicit */int) (short)2739)))))))));
        var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) (~(((((/* implicit */_Bool) (~(-1727800691)))) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned char)41)))))))));
        var_64 = ((((/* implicit */_Bool) ((arr_97 [i_29]) & (((/* implicit */long long int) arr_98 [i_29]))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_97 [i_29]) : (arr_97 [i_29]))) : (min((var_6), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)191)) * (((/* implicit */int) (short)-13547))))))));
    }
    var_65 ^= ((/* implicit */unsigned int) (short)17917);
}
