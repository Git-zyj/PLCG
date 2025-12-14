/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26147
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 3]))))), (2217332530U)));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) ((short) (unsigned char)212));
            arr_8 [i_0] [i_0] [i_1] |= ((/* implicit */short) min((((unsigned long long int) 1119473706122943617LL)), (((/* implicit */unsigned long long int) ((min((1119473706122943606LL), (((/* implicit */long long int) arr_6 [i_0] [14U])))) & (min((-1119473706122943606LL), (((/* implicit */long long int) (unsigned short)31108)))))))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(max((arr_1 [i_0 + 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1119473706122943627LL)) || (((/* implicit */_Bool) var_1)))))))));
        }
    }
    for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) (unsigned short)18896);
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_2 - 1] [i_2 - 2] [11LL]), (arr_4 [i_2 - 2] [i_2 - 1] [i_2 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_14)) + (11566828235168033124ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)9694))))))))) : (((((/* implicit */_Bool) arr_1 [i_2 + 3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59462)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)31107))))) : (1119473706122943615LL)))));
        arr_13 [i_2] [13LL] = ((/* implicit */unsigned char) 4026531840U);
    }
    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (unsigned short i_5 = 3; i_5 < 14; i_5 += 3) 
            {
                {
                    arr_22 [i_3] [5U] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-4596)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6070))) : (0U)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        arr_25 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned int) arr_19 [i_3] [i_3] [i_3 - 2]));
                        var_20 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_3] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_3] [i_3]))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) (unsigned short)9677))))));
                        arr_26 [i_3] [i_4] |= ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_11 [i_5] [i_6 - 1]))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39918))) : (1394646663U)))) ? ((-(((/* implicit */int) arr_17 [i_3 - 2])))) : (((/* implicit */int) arr_6 [i_4] [i_7]))));
                            arr_29 [i_3] [i_4] [i_5] [i_6] [i_4] [i_7] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_6 [i_7] [(short)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_5] [i_6] [i_6]))) : (var_4))));
                            arr_30 [i_3] [i_3] [i_7] [i_6 + 1] [(unsigned short)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (short)-20569))) ? (((((/* implicit */_Bool) arr_18 [i_3])) ? (5124620611296545884ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14531))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)32077)))))));
                            var_23 = ((/* implicit */unsigned char) (-(arr_3 [i_6 + 1])));
                            arr_31 [i_3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3264314857U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55185))) : (arr_15 [i_7] [i_4])));
                        }
                    }
                    for (short i_8 = 2; i_8 < 14; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_8 + 2] [i_5 - 2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_33 [i_3 - 2] [i_3 + 1] [i_5 + 1] [i_8 + 1])))))))));
                        arr_34 [i_3] [i_4] [i_5 + 2] [i_5 + 2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)36798)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59940)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_14)))) ? (((/* implicit */int) min((arr_24 [i_8 - 1] [i_5] [i_4] [i_3]), (((/* implicit */unsigned short) (_Bool)0))))) : (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) arr_33 [i_3] [i_4] [i_5] [i_8]))))))));
                        arr_35 [i_3 + 1] [i_5 + 2] [i_5] [i_8] = ((/* implicit */_Bool) (+(2753640271311284380LL)));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) arr_33 [i_3] [(unsigned short)12] [i_3] [i_3 - 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))) : (min((7636998260692944607ULL), (((/* implicit */unsigned long long int) ((unsigned char) var_1))))))))));
                    }
                }
            } 
        } 
        arr_36 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2753640271311284380LL)) ? (-2753640271311284381LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25618)))));
        arr_37 [i_3 - 2] [i_3] = ((long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (max((((/* implicit */unsigned long long int) (unsigned short)39918)), (var_16))) : (arr_21 [i_3])));
        arr_38 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)241)) ? (((((_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) - (2059578458U)))) : (2107818279635681142LL))) : (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) arr_11 [i_3 - 3] [i_3])), (arr_14 [i_3] [i_3]))))))));
    }
    var_26 = ((/* implicit */unsigned int) var_13);
    var_27 = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2107818279635681154LL)) ? (9587357009992938715ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20569))))))))), ((unsigned short)65528));
    /* LoopNest 2 */
    for (unsigned char i_9 = 3; i_9 < 19; i_9 += 2) 
    {
        for (short i_10 = 3; i_10 < 19; i_10 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    for (unsigned int i_12 = 2; i_12 < 17; i_12 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_44 [i_10 - 2]))) ? (((/* implicit */int) ((unsigned short) 15U))) : (((/* implicit */int) max(((unsigned char)241), ((unsigned char)33)))))))));
                            arr_52 [i_9 - 1] [i_9] [i_11] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_43 [i_9] [i_11])))) : (arr_48 [i_11] [i_10 + 1] [i_9 - 2] [i_11])))) ? (((((/* implicit */_Bool) 7884696264720114372LL)) ? (((/* implicit */long long int) 1516980924U)) : (min((5669211969670748907LL), (((/* implicit */long long int) 4294967281U)))))) : (((/* implicit */long long int) (((!(var_12))) ? (75299900U) : (var_4))))));
                            arr_53 [i_11] [i_10] [i_11] [(_Bool)1] [i_12] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) (short)22561))))) ? (((((/* implicit */_Bool) var_16)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22561))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31773))))), (((((/* implicit */_Bool) ((unsigned short) (unsigned char)199))) ? (arr_48 [i_11] [i_11] [i_11] [i_10 + 1]) : (1088339010U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_13 = 3; i_13 < 17; i_13 += 1) 
                {
                    for (unsigned char i_14 = 2; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                            arr_60 [i_9] [i_9] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)243)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_13] [i_13 - 2] [i_13])))))))) ? (((((/* implicit */int) (unsigned char)15)) ^ (((/* implicit */int) (unsigned short)40670)))) : (((((/* implicit */_Bool) arr_51 [i_14] [i_10] [i_13 - 3] [i_14])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)14)))))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_9))));
                arr_61 [i_9] [i_10] [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) (~(arr_41 [i_10])))) : (max((((/* implicit */unsigned long long int) (short)8994)), (arr_59 [(short)13])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_18))) ? (1046464116U) : (((((/* implicit */_Bool) 2235388837U)) ? (arr_40 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (max((((((/* implicit */_Bool) (unsigned short)15472)) ? (((/* implicit */unsigned long long int) arr_54 [i_9] [i_9] [i_9])) : (arr_42 [i_9 - 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31063)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4033))) : (2357545697U))))))));
                /* LoopSeq 2 */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    arr_66 [i_15] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18327265631380295185ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_9 - 3])) ? (var_14) : (1800089540U)))) : (((((/* implicit */_Bool) arr_44 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7392))) : (arr_65 [i_9] [i_9])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 100861614U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)1862))))) : (4294967262U))) : (min((max((((/* implicit */unsigned int) (short)32513)), (1188078318U))), (2549814570U)))));
                    arr_67 [i_9] [i_9] [i_15] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) arr_51 [i_15] [i_10] [i_10] [i_9])) : (((/* implicit */int) (short)0))))) < ((+(var_6))))))));
                }
                for (short i_16 = 4; i_16 < 18; i_16 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((9223372036854775807LL) >> (((arr_41 [i_10 + 1]) - (83079645U))))))));
                        var_32 = ((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_17 + 1] [i_10 - 2]))));
                    }
                    var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [i_9] [i_10 - 2] [i_16] [i_16])) < (((/* implicit */int) ((short) var_3)))));
                    var_34 = ((/* implicit */short) var_6);
                    var_35 = ((/* implicit */_Bool) min((arr_56 [i_9 + 1] [i_10 - 2]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_9] [16U] [i_16]))) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_64 [i_9 + 1] [i_9 + 1] [i_9 + 1] [5U])))));
                    arr_72 [i_16] [i_10] [i_9] = ((/* implicit */unsigned char) 2235388830U);
                }
            }
        } 
    } 
}
