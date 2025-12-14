/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198265
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
    var_17 = ((/* implicit */int) ((var_0) | (var_3)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_3 [i_0 + 4] [i_0 + 2]))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_19 -= ((/* implicit */signed char) ((short) (~(((/* implicit */int) (unsigned char)85)))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((unsigned long long int) arr_6 [i_3] [i_0] [i_0] [i_0]);
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0 - 1])) != (((/* implicit */int) arr_8 [i_3]))));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) % (min((4294967295U), (4294967295U)))));
            arr_15 [i_0] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-411)) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)0])) : (((/* implicit */int) var_10))))) == ((-(var_16)))))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) + (var_14)))));
            var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-24226)) ? (1U) : (((/* implicit */unsigned int) -2117061025)))) >> (max((0), (((/* implicit */int) ((((/* implicit */int) (signed char)-72)) != (((/* implicit */int) (_Bool)0)))))))));
        }
        var_21 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (5200848319677857985ULL) : (arr_7 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)90))))))));
        arr_16 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 4]))))) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 3] [i_0])) | (((/* implicit */int) arr_9 [i_0 - 1] [i_0]))))) : (min((((/* implicit */unsigned int) var_10)), (arr_12 [i_0])))))));
    }
    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        arr_21 [i_5] = ((/* implicit */short) var_1);
        arr_22 [i_5] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 1) 
        {
            for (unsigned int i_8 = 3; i_8 < 21; i_8 += 1) 
            {
                {
                    var_22 -= ((/* implicit */short) ((((((((/* implicit */unsigned int) (-2147483647 - 1))) + (arr_28 [i_6] [i_7] [i_7]))) / (((/* implicit */unsigned int) ((((/* implicit */int) (short)32512)) >> (((arr_23 [i_6]) + (1612473609966505578LL)))))))) & (((/* implicit */unsigned int) ((int) (_Bool)1)))));
                    arr_31 [i_8] [i_7] [i_6] = ((/* implicit */_Bool) var_12);
                    /* LoopSeq 1 */
                    for (int i_9 = 1; i_9 < 23; i_9 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_10 = 1; i_10 < 22; i_10 += 3) 
                        {
                            arr_36 [i_10] [i_7] [22ULL] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_24 [i_6]);
                            arr_37 [i_9] [i_9] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) ((var_16) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_6] [(signed char)6]))))) && (((((/* implicit */_Bool) 2708728573764232581ULL)) && (((/* implicit */_Bool) arr_32 [i_6]))))))))));
                        }
                        for (int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            arr_40 [i_9] [i_11] [i_9] [i_9] [i_9 + 1] [i_9] = ((/* implicit */int) min((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) (_Bool)1)), (min((var_3), (((/* implicit */long long int) arr_34 [(signed char)16] [i_7 + 3] [i_8 - 2] [i_9] [i_11] [i_8 - 3]))))))));
                            arr_41 [i_11] [i_11] = ((/* implicit */int) ((((_Bool) arr_23 [i_8 - 3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */long long int) arr_32 [i_8])) : (((arr_29 [i_6] [(_Bool)0] [i_8] [i_11]) << (((((/* implicit */int) (unsigned short)4)) - (4))))))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((min((min((var_16), (((/* implicit */unsigned long long int) arr_23 [i_8 + 1])))), (((/* implicit */unsigned long long int) arr_38 [i_7] [i_7 + 3] [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 2] [i_7])))) << (((/* implicit */int) ((((/* implicit */long long int) 4294967290U)) < (min((((/* implicit */long long int) var_15)), (var_0)))))))))));
                        }
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((unsigned int) (short)-6933));
                            arr_44 [i_6] [i_7] [i_7] [i_8] [i_9] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_26 [i_9 - 1] [12])) : (((((/* implicit */_Bool) 4191735802U)) ? (((/* implicit */int) arr_26 [i_8] [i_7])) : (((/* implicit */int) (unsigned short)4))))));
                            arr_45 [i_9] [i_12] = ((/* implicit */unsigned long long int) ((short) arr_35 [i_7] [i_7] [i_7] [i_8 + 3]));
                            arr_46 [4ULL] [i_6] [i_7] [i_8] [i_8 - 2] [i_9 - 1] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_23 [i_6])) < (5200848319677857985ULL)));
                            var_25 -= ((/* implicit */short) arr_23 [i_6]);
                        }
                        arr_47 [i_6] [i_6] [i_7] [i_7] [i_8] [i_9 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((1149368646) > (-1280926238)))) << (((((/* implicit */int) arr_25 [i_6] [i_8 - 2])) + (31179))))))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (+((+(arr_28 [i_6] [(short)11] [i_9 - 1]))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_7] [i_7 - 1] [i_7] [i_9])) / (((/* implicit */int) (short)15))))) && (arr_27 [i_9] [i_7])));
                    }
                    arr_48 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8 + 3] [i_7 - 1])) ? (((/* implicit */int) arr_25 [i_8 - 3] [i_7 - 1])) : (((/* implicit */int) arr_25 [i_8 + 3] [i_7 + 2]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_8 - 3] [i_7 + 3])) + (((/* implicit */int) arr_25 [i_8 - 1] [i_7 + 2])))))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) ((short) (~(arr_29 [i_6] [i_6] [i_6] [i_6]))));
    }
    for (int i_13 = 0; i_13 < 19; i_13 += 2) 
    {
        arr_51 [i_13] = ((/* implicit */long long int) (((-(arr_18 [i_13] [i_13]))) == (max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)15)))))))));
        /* LoopSeq 3 */
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                var_29 -= ((/* implicit */unsigned char) arr_28 [i_13] [i_14] [i_15]);
                arr_58 [i_13] [i_14] [i_15] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_54 [i_15]))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) * (var_3))))))) == (((/* implicit */int) arr_42 [i_15] [i_15] [i_15] [i_13] [i_13] [i_13] [i_13]))));
            }
            for (int i_16 = 0; i_16 < 19; i_16 += 2) 
            {
                var_30 -= ((/* implicit */int) (unsigned char)189);
                var_31 -= ((/* implicit */short) arr_23 [i_16]);
                /* LoopSeq 3 */
                for (short i_17 = 0; i_17 < 19; i_17 += 1) 
                {
                    var_32 -= ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) arr_57 [i_16] [i_16])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_17]))) + (arr_28 [(_Bool)1] [i_16] [i_13])))))));
                    arr_64 [i_13] = ((((/* implicit */int) arr_57 [i_13] [i_13])) / (((/* implicit */int) var_10)));
                    var_33 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_18 [(unsigned char)1] [i_14]) != (((/* implicit */int) arr_26 [i_16] [i_14])))))) >= (((var_9) % (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_16] [i_14])))))));
                    arr_65 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_62 [i_13] [(_Bool)1] [i_16] [i_13]), (arr_62 [(signed char)0] [i_17] [i_17] [i_17])))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((2147483647ULL) <= (((/* implicit */unsigned long long int) var_11)))))));
                    arr_66 [i_13] [i_14] [i_16] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) min((((/* implicit */int) (signed char)59)), (1299266695)))) ^ (arr_59 [i_16]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_13])) < (((/* implicit */int) arr_24 [i_13]))))))));
                }
                for (unsigned char i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    arr_70 [i_18] [i_13] [i_14] [i_13] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_33 [i_13] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_13] [i_14] [i_16]))) : (arr_28 [i_18] [i_14] [i_13]))));
                    var_34 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_39 [i_14] [i_14] [i_16] [i_18]))) | ((~(((/* implicit */int) arr_24 [i_18]))))));
                }
                for (unsigned int i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 4) 
                    {
                        arr_77 [i_13] [i_14] [i_16] [i_19] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) 520093696)) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_13] [i_16] [i_19] [i_20])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7))))), (var_11))))));
                        arr_78 [(unsigned short)7] [i_14] [i_16] [i_19] [i_19] [i_20] = ((/* implicit */short) arr_57 [i_19] [i_20]);
                        arr_79 [i_19] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_71 [i_13] [i_14] [i_16] [i_16] [i_20] [i_20]))));
                    }
                    arr_80 [i_13] [i_14] [i_16] [i_19] = ((/* implicit */int) arr_24 [i_14]);
                    arr_81 [i_13] [i_14] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)6959))))) ? (((/* implicit */int) arr_69 [i_16])) : (((/* implicit */int) max((arr_69 [i_13]), (arr_63 [i_13] [i_14] [i_16] [i_19]))))));
                }
            }
            for (int i_21 = 2; i_21 < 17; i_21 += 3) 
            {
                arr_84 [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */int) ((short) ((arr_32 [i_21]) / (((/* implicit */int) arr_61 [i_13] [i_13])))))) * (((((((/* implicit */int) (short)-3902)) % (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) min((arr_42 [i_13] [i_14] [i_21] [i_21 + 2] [i_21] [i_21] [i_21]), (((/* implicit */short) (_Bool)1)))))))));
                arr_85 [i_13] [i_14] [i_21 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_32 [i_21 + 1]) / (((/* implicit */int) arr_76 [i_13] [i_14] [i_14] [i_21] [i_21]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_76 [i_21 + 2] [i_14] [i_14] [17U] [i_13]), (arr_76 [i_13] [i_14] [i_21 - 1] [i_14] [i_21]))))) : (((long long int) var_14))));
            }
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (max((((520093696) >> (((((/* implicit */int) (unsigned char)135)) - (124))))), (((/* implicit */int) (short)17670)))))))));
            arr_86 [i_13] [i_13] [i_14] = ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_75 [i_14] [i_14] [i_13] [i_13] [i_13])) || (((/* implicit */_Bool) var_1)))))) < (((/* implicit */int) (unsigned char)15)));
            var_36 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_13] [i_14]))) : (min((arr_29 [i_13] [i_13] [i_13] [i_14]), (arr_29 [i_13] [i_13] [i_13] [i_13])))));
        }
        for (int i_22 = 2; i_22 < 17; i_22 += 1) /* same iter space */
        {
            arr_89 [i_22] [i_22] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_13] [i_22 + 2])) ? (arr_18 [i_13] [i_22 - 1]) : (arr_18 [i_13] [i_22 + 1])))) - (1125899906842623ULL)));
            var_37 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_10)))));
            arr_90 [i_22] [i_22] [i_22] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_13])) >> (((arr_18 [i_22] [i_13]) + (1302410318)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1135779979472096686LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967294U)))) : (-1135779979472096679LL))))));
        }
        /* vectorizable */
        for (int i_23 = 2; i_23 < 17; i_23 += 1) /* same iter space */
        {
            arr_93 [i_23] [i_13] [i_13] = ((/* implicit */unsigned int) arr_73 [i_13] [i_13]);
            arr_94 [i_13] [i_23] = ((/* implicit */long long int) var_8);
            var_38 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_14))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1620088865))))) : (((/* implicit */int) arr_63 [i_23] [i_23] [i_23] [i_23 - 1]))));
        }
        arr_95 [i_13] = max((var_9), (((/* implicit */long long int) arr_62 [i_13] [i_13] [i_13] [i_13])));
        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((arr_72 [i_13] [i_13] [i_13] [i_13] [(short)5] [i_13]) % (((((/* implicit */_Bool) ((((/* implicit */int) arr_53 [i_13])) - (((/* implicit */int) arr_39 [i_13] [i_13] [i_13] [(signed char)23]))))) ? (((/* implicit */int) ((1152903912420802560LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)28069)))))) : (((/* implicit */int) (!(var_7)))))))))));
        arr_96 [i_13] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (short)-8818)) & (((/* implicit */int) (unsigned char)115))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) % (2992987567260209869LL)))));
    }
    var_40 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744071562067969ULL)) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49406)))));
    var_41 = ((/* implicit */_Bool) (+(var_16)));
}
