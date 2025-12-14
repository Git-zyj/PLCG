/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226857
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        arr_3 [1LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 3])) ? (arr_2 [i_0] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
        var_18 -= ((/* implicit */long long int) ((unsigned int) max((var_17), ((unsigned short)33191))));
        var_19 = max((((/* implicit */int) (signed char)-125)), (0));
        var_20 ^= ((unsigned char) max((((((/* implicit */_Bool) var_6)) ? (-19) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) (unsigned char)255)))));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((max((((/* implicit */int) (unsigned char)235)), (1494981176))), (((int) (_Bool)0)))))));
                            arr_14 [i_2] [7LL] [i_4] [i_3] [i_1 - 1] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */long long int) 317073736)) : (((((/* implicit */_Bool) 1736541226)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1971511390)))))), (((/* implicit */long long int) ((signed char) 0)))));
                            var_22 = max((max((((/* implicit */long long int) var_9)), (33554431LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -2056032288)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_5 [i_1 - 2])))));
                        }
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_5 [i_1 - 2]), (((/* implicit */unsigned int) (signed char)-71))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8451823629192576403ULL)) ? (-1623752544) : (((/* implicit */int) (unsigned char)216))))) : (max((((/* implicit */unsigned int) var_16)), (arr_11 [i_1 - 2] [i_1] [i_1 - 2])))));
                            arr_19 [i_1] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((var_0), (var_16))), (max((((/* implicit */unsigned short) (unsigned char)201)), ((unsigned short)16023)))))) ? (((((/* implicit */_Bool) -1257702140)) ? (((/* implicit */long long int) 1261400475U)) : (max((-33554431LL), (((/* implicit */long long int) (signed char)-64)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_2] [i_1] [9] [i_1])) ? (0) : (((/* implicit */int) var_17)))))))));
                            arr_20 [i_2] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_1 + 1] [i_1] [i_1]))) ? (((/* implicit */int) ((unsigned char) var_7))) : (max((-24), (((/* implicit */int) arr_9 [i_1] [3U] [i_1 - 2]))))))), (max((((/* implicit */long long int) -317073736)), (8028611496470672364LL)))));
                        }
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) var_3))), (((((/* implicit */_Bool) 4146357680U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -33554437LL)) ? (((/* implicit */int) (unsigned short)49610)) : (((/* implicit */int) (unsigned char)239))))))) : (max((((/* implicit */unsigned long long int) ((int) arr_6 [i_3]))), (max((var_5), (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_2] [i_1] [i_3] [i_4]))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 3; i_7 < 11; i_7 += 3) 
                    {
                        arr_23 [i_1 + 1] [i_1 - 1] [(short)8] [i_7 - 3] [i_7 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (short)-26803))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_7 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_1] [i_3]))))) : (288230376151707648LL)));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60661)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2244305782U)));
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */long long int) ((int) var_11))) : (((((/* implicit */_Bool) (unsigned short)11382)) ? (((/* implicit */long long int) 358983988)) : (arr_25 [i_1] [i_3] [i_8])))))) ? (max((9905303771859593828ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-28227)), ((unsigned short)49598)))) ? (((/* implicit */long long int) ((var_1) ? (3484328848U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)3] [i_2] [i_2] [i_2] [i_2]))) : (arr_25 [10] [i_2] [i_2]))))))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            arr_30 [(signed char)2] [(signed char)2] [i_3] [i_2] [i_9] [i_2] [(short)5] = ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_1 - 2] [i_8 + 1] [i_2] [i_9])) ? (((((/* implicit */_Bool) arr_27 [i_1] [i_8] [i_3] [i_1] [i_1])) ? (arr_17 [i_1] [1] [i_2] [i_8 - 2] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_2] [i_2])) ? (var_15) : (((/* implicit */unsigned int) 1058427097)))))));
                            var_27 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_4 [i_1 + 1] [i_8 - 2]), ((_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_24 [i_1] [i_2] [i_3] [i_8] [(_Bool)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_11))))) : (((/* implicit */int) var_13))))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((864670562), (((/* implicit */int) ((short) var_16)))))) ? (((((/* implicit */_Bool) (signed char)58)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                        }
                        arr_31 [i_1] [i_2] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (short)-18888)) ? (arr_28 [i_8] [i_2] [i_2] [i_1]) : (((/* implicit */int) var_9)))))) ? (((((_Bool) arr_25 [10U] [10U] [10U])) ? (((((/* implicit */_Bool) (unsigned short)3298)) ? (3484328848U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3009))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_18 [i_8] [i_2] [i_2] [i_2] [8]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (((/* implicit */short) arr_9 [i_8 + 1] [i_3] [i_1 - 1]))))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        arr_34 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) max((((long long int) var_5)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)11382)) : (((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (unsigned short)23330)) : (((/* implicit */int) (signed char)5)))))))));
                        arr_35 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) ((short) max((-5326831281510809608LL), (((/* implicit */long long int) (unsigned short)3303)))));
                        var_29 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_11 [i_10] [(short)10] [4])))), (var_7))));
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                        {
                            arr_39 [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)54154)) ? (((/* implicit */int) (unsigned short)34562)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) var_13))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned short) (signed char)0)), (((/* implicit */unsigned short) ((signed char) (unsigned short)54131)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_17 [i_1] [i_2] [i_2] [i_2] [0ULL] [(unsigned short)10]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (arr_26 [i_1 - 2] [i_2] [i_2] [i_1 - 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1])) : (((/* implicit */int) (short)32755)))))));
                        }
                        for (int i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned char)9] [i_2] [5LL] [i_10] [i_12]))) : (arr_36 [i_2] [i_2] [i_10] [i_2])))) ? (((/* implicit */int) ((unsigned short) -5015294041816623345LL))) : (((/* implicit */int) (unsigned char)44)))));
                            var_32 = ((/* implicit */signed char) ((unsigned char) ((long long int) -1063924476)));
                            arr_43 [2] [i_2] [i_3] = ((long long int) max((6068896945916254048ULL), (((/* implicit */unsigned long long int) (short)-18885))));
                            var_33 = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned long long int) min((-358983989), (((/* implicit */int) (_Bool)1))))), (min((arr_22 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_38 [i_12] [i_12] [i_12] [i_10] [5U] [i_2] [5U])))))));
                        }
                        arr_44 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)510), (((/* implicit */unsigned short) (unsigned char)105))))) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1006241243U)))) : (max((arr_32 [8] [i_2] [i_3] [i_1 + 1] [i_1 + 1] [(unsigned short)6]), (min((((/* implicit */long long int) (short)32758)), (arr_17 [i_10] [10U] [i_2] [i_2] [i_1] [i_1])))))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 4) 
                    {
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62237)) ? (((/* implicit */int) max(((short)26069), ((short)-30698)))) : (-803665741)))) ? (((/* implicit */unsigned long long int) ((int) 8559748063750671920ULL))) : (((((/* implicit */_Bool) max(((unsigned char)99), (((/* implicit */unsigned char) (_Bool)1))))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) min((((/* implicit */int) ((short) (_Bool)1))), (((((/* implicit */_Bool) 1457223402)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned short)26515), (((/* implicit */unsigned short) (unsigned char)216))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) arr_27 [i_1] [i_1 - 2] [i_1] [(short)5] [i_1]))))))) ? (((long long int) max(((unsigned char)0), (arr_6 [i_1])))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_25 [i_1] [i_1 - 2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_12))), (max((var_8), (((/* implicit */unsigned int) var_13)))))))));
        var_37 = ((/* implicit */long long int) ((int) ((signed char) var_15)));
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 3234060800U)), (var_7)))) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (((unsigned int) 1060906494U))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 14; i_18 += 4) 
                        {
                            {
                                arr_60 [(_Bool)1] [6U] [i_16] [i_14] [i_15] [i_14] [i_14] = ((/* implicit */int) ((short) ((unsigned int) (unsigned char)8)));
                                var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) ((unsigned long long int) -9108160391507561142LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_56 [i_14] [i_14] [9] [i_14] [i_14] [i_14] [i_14])))) : (((((/* implicit */_Bool) (unsigned short)39027)) ? (33554437LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))))))) : (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (-9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) -2002843211)) ? (9115949320849925154LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 2; i_19 < 13; i_19 += 3) 
                    {
                        for (signed char i_20 = 1; i_20 < 13; i_20 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_52 [i_14] [i_20 + 1] [i_20 - 1] [i_20 - 1]), (((/* implicit */unsigned int) -1260315906))))) ? (((/* implicit */unsigned int) max((((int) (unsigned char)56)), (((/* implicit */int) (signed char)127))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (8721152765641286254LL) : (((/* implicit */long long int) 1157395130U))))) ? (max((arr_52 [i_14] [i_16] [i_19] [i_19]), (((/* implicit */unsigned int) var_2)))) : (((unsigned int) var_13))))));
                                var_42 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 3234060800U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_20 + 1] [i_19 + 1]))))), (((/* implicit */unsigned int) ((unsigned short) var_5)))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)0)), (arr_47 [i_14] [10LL])))), (((unsigned short) var_14))));
                }
            } 
        } 
        arr_66 [i_14] = ((long long int) max(((unsigned char)193), (max(((unsigned char)122), (((/* implicit */unsigned char) (signed char)-124))))));
    }
    var_44 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_21 = 2; i_21 < 6; i_21 += 1) /* same iter space */
    {
        arr_70 [i_21] = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) 2937959844918816218LL)));
        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_51 [i_21 + 2]))));
    }
    for (long long int i_22 = 2; i_22 < 6; i_22 += 1) /* same iter space */
    {
        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 2166656270322068223LL)) ? (((/* implicit */int) arr_72 [3])) : (((/* implicit */int) arr_29 [(signed char)9] [i_22 + 4] [i_22] [i_22] [i_22 + 4])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_22] [i_22])) ? (arr_28 [i_22] [i_22] [i_22] [i_22]) : (((/* implicit */int) arr_72 [i_22]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5540867364777284393LL)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) 0U)) ? (33554428LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_22] [i_22 + 1] [i_22] [i_22] [i_22] [i_22 + 1])) ? (-2147483639) : (arr_57 [i_22 - 1] [i_22])))), (((((/* implicit */_Bool) arr_46 [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_22] [i_22 - 1] [i_22]))) : (-337370564762228597LL)))))));
        arr_73 [i_22] [i_22] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned char) 2937959844918816216LL))) ? (max((((/* implicit */unsigned long long int) -2937959844918816194LL)), (var_5))) : (((/* implicit */unsigned long long int) arr_24 [i_22] [i_22] [i_22 + 3] [i_22] [i_22 - 2])))), (((/* implicit */unsigned long long int) ((int) arr_18 [(signed char)7] [i_22] [i_22 - 2] [i_22 + 4] [(signed char)7])))));
        var_47 = ((int) ((unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) -1088401436)) : (1ULL))));
    }
}
