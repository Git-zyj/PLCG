/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4203
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) (unsigned short)65535);
                                var_19 = ((/* implicit */short) arr_7 [i_0] [i_1] [(short)4] [i_3]);
                                var_20 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) (short)-32753)))) || (((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) var_13))));
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [(unsigned short)0] [i_1] [i_4] [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_3] [i_2] [i_2] [i_4])))))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_17)) % (((((/* implicit */_Bool) var_10)) ? (3942182585613461293ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_23 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_1] [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5 + 3]))));
                            arr_19 [i_2] [17ULL] [i_2] = ((/* implicit */short) ((unsigned short) (+(var_16))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) * (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [17LL] [i_2]))));
                        }
                        arr_20 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_0] [i_5 + 4] [(short)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) / (arr_1 [i_1])))))))) : (min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_1] [12] [8U] [i_1] [i_2])), (min((var_16), (((/* implicit */unsigned long long int) (unsigned short)65519))))))));
                        var_25 = ((/* implicit */int) max((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-3593)) ? (-1003170266) : (((/* implicit */int) var_14)))))))), ((-(arr_11 [i_1] [i_1] [16ULL] [i_1] [11U] [i_2])))));
                        var_26 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)31925)) << (((/* implicit */int) arr_18 [i_1] [6ULL] [i_2] [i_1] [i_1])))) + (((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [0] [18] [i_0] [16ULL] [i_0])) != (var_10))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1070))) * (arr_1 [i_5])))) ? (max((((/* implicit */long long int) var_0)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_16 [i_0] [(signed char)14] [(unsigned short)8] [i_1] [i_2] [i_5 - 1] [(unsigned char)18]))))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        arr_25 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 1683398133)) ? (1287804388) : (((/* implicit */int) var_15)))) / ((-(((/* implicit */int) (unsigned short)26594))))))), ((+((+(var_3)))))));
                        /* LoopSeq 4 */
                        for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), ((+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_16)))) ? (arr_10 [i_8] [(_Bool)1] [i_1] [(unsigned char)19]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8]))) : (arr_5 [i_0] [14LL] [i_8] [i_0]))))))))));
                            arr_29 [i_0] [18LL] [(signed char)4] [i_2] [19LL] = ((/* implicit */unsigned short) (short)-9963);
                            var_28 = max((((((/* implicit */_Bool) (-(var_16)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_2] [i_2]))))) : (var_7))), (((/* implicit */long long int) ((max((arr_5 [i_0] [i_0] [i_2] [19LL]), (((/* implicit */unsigned int) var_9)))) <= (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_1] [19U] [i_1] [i_1] [10ULL])) - (((/* implicit */int) arr_6 [i_1] [i_2])))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 630046646)) ? (((/* implicit */unsigned int) -1362892711)) : (var_8))), (max((((/* implicit */unsigned int) (unsigned short)39372)), (var_8)))))), (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_9 + 1])) < (((/* implicit */int) (unsigned short)33617)))) && (((arr_31 [i_0] [6U] [12LL] [i_1] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))))))));
                            var_30 -= ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_11)))));
                            var_31 &= ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (min((arr_26 [(_Bool)1] [i_0] [i_9 + 1] [12ULL] [(short)6] [(short)6]), (((/* implicit */unsigned long long int) arr_28 [14] [(_Bool)1] [i_9 + 1] [11LL] [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_28 [5LL] [5LL] [i_9 + 1] [5LL] [5LL] [i_2] [i_2]))))));
                            var_32 = (_Bool)1;
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) - (((((/* implicit */unsigned long long int) var_7)) + (arr_10 [i_0] [17U] [(signed char)13] [17U])))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_28 [(unsigned char)10] [i_1] [13U] [i_1] [i_2] [i_1] [12LL]) : (arr_28 [i_10] [i_7] [i_7] [15U] [(_Bool)1] [(_Bool)1] [i_0])));
                        }
                        for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            arr_41 [(unsigned short)15] [i_2] [i_2] [i_7] [i_11] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_17 [9] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [11] [i_11])))))) : (max((97376594U), (((/* implicit */unsigned int) arr_35 [i_2] [(short)10])))))), (((/* implicit */unsigned int) max((arr_14 [i_0] [(signed char)10] [4U] [i_2] [i_7] [i_2]), (((/* implicit */signed char) arr_0 [i_0])))))));
                            arr_42 [i_2] [i_1] [i_2] = var_9;
                            var_35 = ((/* implicit */short) 10ULL);
                            var_36 = ((/* implicit */_Bool) (unsigned short)14);
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        arr_47 [i_0] [i_0] &= ((/* implicit */short) var_7);
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_0] [i_2] [(unsigned char)5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])) << (((arr_7 [12ULL] [(unsigned short)10] [i_1] [i_0]) + (1549684486984870112LL)))))) : (min((arr_1 [(short)8]), (((/* implicit */unsigned long long int) arr_23 [i_2] [(unsigned char)0] [i_2]))))))) || (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) && (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_2] [14U]))))));
                        arr_48 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (-(min((var_7), (((/* implicit */long long int) ((var_9) > (((/* implicit */int) var_1)))))))));
                        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) min(((((+(arr_10 [i_0] [i_0] [10U] [i_0]))) >= (((/* implicit */unsigned long long int) max((((/* implicit */int) var_15)), (-1384444583)))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) || (((/* implicit */_Bool) (signed char)-122)))))))));
                    }
                    for (short i_13 = 1; i_13 < 16; i_13 += 1) 
                    {
                        arr_51 [i_2] [i_2] [i_2] [i_2] [14ULL] [14ULL] = ((/* implicit */unsigned int) 1384444595);
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_2] [i_2])) ? (max((max((((/* implicit */int) arr_44 [(signed char)18] [i_1] [i_2] [3])), (1287804388))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_39 [i_0] [i_2] [i_1] [(short)0] [i_0] [i_0])), ((unsigned short)65532)))))) : (((/* implicit */int) max((((/* implicit */short) arr_35 [i_2] [i_2])), (((short) (unsigned short)0)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_40 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                            var_41 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_0] [i_1] [i_2] [i_13] [i_14] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_1] [i_13 - 1] [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_14]))) : (arr_10 [i_0] [i_1] [(short)13] [i_13 + 1])));
                        }
                        for (long long int i_15 = 2; i_15 < 18; i_15 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned long long int) max(((+(-1799654820))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [(signed char)13] [i_0])) ? (((/* implicit */int) (short)-22340)) : (arr_34 [19ULL]))))))));
                            arr_58 [i_15 + 2] [i_0] [i_15] [6LL] [i_0] |= ((/* implicit */unsigned char) var_16);
                            arr_59 [i_2] [14LL] [i_2] [i_2] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (signed char)45)))), ((+(((/* implicit */int) arr_56 [i_15] [i_15 - 2] [6LL] [16] [i_15 - 2]))))));
                            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) max((((/* implicit */long long int) var_4)), (min((((-1LL) * (17LL))), (((/* implicit */long long int) (unsigned short)65512)))))))));
                        }
                    }
                    var_44 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_26 [16] [i_2] [i_2] [i_1] [i_2] [i_2])) ? (arr_26 [i_0] [i_2] [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_2]))))), (arr_26 [i_0] [i_2] [i_2] [i_1] [i_2] [i_0])));
                    arr_60 [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)60);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            {
                arr_66 [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) (((+(arr_62 [i_16 + 1] [i_16 + 1]))) / (min((arr_62 [i_16 + 1] [i_16 + 1]), (arr_62 [i_16 + 1] [i_16 + 1])))));
                /* LoopSeq 2 */
                for (unsigned short i_18 = 1; i_18 < 21; i_18 += 4) /* same iter space */
                {
                    var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_18 + 1] [i_17] [i_16 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_65 [i_18 - 1] [i_18 - 1] [i_16 + 1]))))) && (((/* implicit */_Bool) max((arr_64 [i_18 + 2] [i_17] [i_16 + 1]), (((/* implicit */int) arr_65 [i_18 + 2] [i_18 - 1] [i_16 + 1])))))));
                    var_46 = ((/* implicit */short) max((((/* implicit */int) (short)7250)), (((((/* implicit */_Bool) arr_64 [i_18 + 1] [i_17] [i_18 - 1])) ? (((/* implicit */int) arr_68 [i_18 + 2] [i_17])) : ((~(((/* implicit */int) arr_68 [i_17] [i_17]))))))));
                }
                for (unsigned short i_19 = 1; i_19 < 21; i_19 += 4) /* same iter space */
                {
                    arr_72 [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (+(arr_62 [i_17] [i_17]))))) ? (((/* implicit */unsigned long long int) ((arr_63 [i_19 + 1] [i_16 + 1]) + (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned int) var_9)) : (var_17)))) + (((((/* implicit */_Bool) arr_61 [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (9079256848778919936ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        for (signed char i_21 = 3; i_21 < 22; i_21 += 3) 
                        {
                            {
                                var_47 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (arr_67 [i_16] [18ULL]) : (4294967295U))) - (var_8))))));
                                var_48 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) arr_76 [i_21 - 2] [i_19 + 1] [i_16 + 1] [i_16 + 1])), (arr_62 [i_16 + 1] [i_19 + 2]))));
                                var_49 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31925)) && (((/* implicit */_Bool) var_9))))), (var_14)));
                                var_50 = ((/* implicit */short) (~((~(arr_64 [i_21] [i_17] [(_Bool)1])))));
                            }
                        } 
                    } 
                    var_51 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)143)) ^ (var_9)));
                    arr_79 [i_16] [i_17] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_71 [i_16 + 1] [(short)1] [i_16] [(short)1])) | (((/* implicit */int) arr_75 [i_17] [i_17])))) + (2147483647))) >> (((((/* implicit */_Bool) -1740742352)) ? (((/* implicit */int) arr_71 [(unsigned short)16] [(_Bool)1] [i_17] [(_Bool)1])) : (((/* implicit */int) arr_71 [i_19 + 2] [i_19 - 1] [17] [i_16]))))));
                }
                var_52 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5844344838445441733LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_74 [14U] [i_16] [i_16 + 1] [14U]))))) ? ((+(arr_67 [2] [2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                /* LoopSeq 1 */
                for (signed char i_22 = 0; i_22 < 23; i_22 += 1) 
                {
                    var_53 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-3750)), (var_1)))) ? (var_6) : (((/* implicit */long long int) arr_80 [i_22] [i_17] [(unsigned char)6]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_23 = 0; i_23 < 23; i_23 += 4) 
                    {
                        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) arr_69 [i_17] [i_16 + 1] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_84 [(signed char)8] [i_23] [i_17] [2U])))) : (arr_81 [i_17] [(_Bool)1] [(unsigned short)8] [i_23])));
                        arr_85 [(unsigned short)6] [i_23] [i_17] [i_17] = ((/* implicit */unsigned short) var_6);
                        var_55 = ((/* implicit */_Bool) ((((/* implicit */int) arr_65 [i_16 + 1] [i_22] [i_16 + 1])) / (((/* implicit */int) arr_65 [i_16 + 1] [(unsigned short)5] [(unsigned char)22]))));
                    }
                }
                arr_86 [i_17] [i_17] = ((/* implicit */short) min((arr_84 [i_16 + 1] [19LL] [i_17] [i_16 + 1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_84 [i_16 + 1] [i_17] [i_17] [i_16 + 1])) && (((/* implicit */_Bool) arr_84 [i_16 + 1] [i_17] [i_17] [i_16 + 1])))))));
            }
        } 
    } 
    var_56 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) < (((/* implicit */int) (signed char)-46))));
}
