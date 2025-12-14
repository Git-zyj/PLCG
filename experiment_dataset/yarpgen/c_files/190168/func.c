/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190168
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_8 [i_1 + 1] [(signed char)14] [i_2] [i_1]), (arr_8 [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_1]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) arr_3 [i_1]);
                        var_21 = ((/* implicit */signed char) min((max(((~(((/* implicit */int) arr_9 [i_0] [i_1] [16U])))), (((/* implicit */int) (unsigned char)62)))), ((-((+(((/* implicit */int) (unsigned char)164))))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) >> (((((((/* implicit */_Bool) 27U)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)28)) <= (arr_4 [i_0] [(unsigned char)4])))))) - (87))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1])) || (((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-17)))))) : (max((((/* implicit */unsigned long long int) 33030144U)), (659970958778857813ULL)))));
                        arr_15 [i_1] [i_2] [i_4] = ((/* implicit */signed char) (-(((int) ((signed char) 17494066861936151922ULL)))));
                        arr_16 [i_1] [i_2] [i_1 - 1] [i_1] = ((((/* implicit */_Bool) min((arr_7 [i_0] [i_1 - 1] [i_1]), (arr_7 [i_0] [i_1 + 1] [i_1])))) ? (min((arr_7 [i_0] [i_1 + 1] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)192)))) : (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_0] [i_1 + 1]))));
                        var_24 = ((unsigned int) (-(((/* implicit */int) (unsigned char)128))));
                    }
                    for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        arr_19 [i_1] [i_1] [i_2] [4U] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_5] [i_0] [i_0] [i_0]))));
                        var_25 = ((/* implicit */_Bool) (~(arr_4 [i_1] [i_5])));
                        arr_20 [i_1] = (signed char)-119;
                    }
                    arr_21 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [14ULL] [i_1 - 1])) ^ (((/* implicit */int) (unsigned char)167))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        arr_25 [4LL] [i_1] [i_1] [i_2] [i_6 - 1] = (+(((/* implicit */int) ((((/* implicit */_Bool) -4340751400858328148LL)) || (((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1]))))));
                        arr_26 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) arr_9 [i_6 - 1] [i_1 + 1] [i_1 + 1])), ((~(((/* implicit */int) var_15)))))));
                    }
                    for (signed char i_7 = 1; i_7 < 18; i_7 += 2) 
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_12 [i_0] [(signed char)4]);
                        var_26 |= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 - 1] [(signed char)0] [i_0])), (2147352576ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_1 + 1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))))))));
                    }
                }
                /* LoopSeq 4 */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    arr_33 [i_0] [i_0] [i_8] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) 6204374981618409943ULL)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_15)))))) : ((((~(((/* implicit */int) (unsigned char)6)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)8064)))))))));
                    var_27 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8])) ? (arr_31 [i_0] [i_0]) : (arr_2 [(unsigned short)15] [(unsigned char)9])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_1 + 1] [i_8])))))) : (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)52))) : (-1389277202465843634LL))))) * (((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0] [i_0]))));
                }
                for (unsigned char i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_9] [i_1] [i_1])) ? (806954601) : (((/* implicit */int) arr_3 [i_1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_32 [i_1] [i_1] [i_9 - 1])))) ? (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) arr_14 [i_1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_27 [i_0] [i_1] [i_0] [i_0])), ((unsigned char)6))))))) : (arr_13 [i_0] [i_0] [17ULL] [i_0] [i_0] [i_0])));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1934832624)) ? (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (unsigned char)158)))))) : (((((/* implicit */_Bool) (unsigned char)103)) ? (2014010781432647550LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)154)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_30 += ((short) arr_23 [i_1 - 1] [i_1 - 1] [i_0] [4U] [8U] [i_0]);
                                var_31 = 0;
                                var_32 ^= (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) (signed char)76)), ((unsigned short)58121))))));
                            }
                        } 
                    } 
                    var_33 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) - (((((/* implicit */_Bool) (-(-1389277202465843634LL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 2522333404U))) : ((~(arr_2 [i_0] [i_9 + 1])))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((2938536524191094244ULL), (((/* implicit */unsigned long long int) 571957152676052992LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) (short)696)) : (((/* implicit */int) (signed char)96)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 2036915337U)))))) : (((/* implicit */int) var_16))));
                    var_35 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (~(2036915320U)))) ? (((unsigned long long int) arr_29 [i_0] [i_0] [0LL] [i_12])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [14LL] [14LL] [14] [i_12]))))));
                    var_36 |= ((/* implicit */unsigned char) ((14198099093269537875ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_42 [i_0] [i_1] [i_12]))))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1])) ? (arr_28 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (3795468786U))));
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            arr_51 [i_1] [i_14] [i_13] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_39 [i_13] [i_1 - 1] [16U] [i_1] [i_15] [0])))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)10)))) ? ((~(arr_6 [i_0] [i_0]))) : (min((arr_50 [i_13] [i_13] [i_13] [i_1] [(short)8] [i_0]), (((/* implicit */unsigned int) (signed char)(-127 - 1))))))))));
                            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64327)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2048))) : (2258051959U)));
                        }
                        for (int i_16 = 0; i_16 < 20; i_16 += 3) 
                        {
                            arr_56 [i_1] [i_1] [i_13] [i_14] [i_14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 65024U)))))));
                            arr_57 [i_0] [0U] [i_13] [i_14] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((arr_43 [i_0] [i_1 + 1] [i_14]), (((/* implicit */unsigned char) arr_41 [i_1] [(_Bool)1] [i_14] [i_16]))))) ? (((/* implicit */int) arr_53 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (_Bool)1))))))));
                            var_39 *= ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */int) arr_27 [12ULL] [i_14] [i_14] [18])) + (arr_47 [i_0] [i_1 - 1] [i_1 - 1] [i_16]))))));
                        }
                        for (signed char i_17 = 0; i_17 < 20; i_17 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (-((-((+(-6249827833622085208LL))))))))));
                            var_41 = ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_42 -= ((signed char) (!((!(((/* implicit */_Bool) 2388838021U))))));
                            var_43 = ((/* implicit */signed char) 2702803145U);
                        }
                        var_44 = ((/* implicit */int) 6249827833622085208LL);
                        var_45 -= (((+(min((arr_54 [i_14] [(signed char)4] [14U] [(signed char)4] [i_14]), (((/* implicit */int) var_14)))))) == (((((/* implicit */_Bool) (~(arr_4 [i_14] [i_14])))) ? (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) (unsigned short)49152)))));
                        /* LoopSeq 2 */
                        for (signed char i_19 = 0; i_19 < 20; i_19 += 3) /* same iter space */
                        {
                            var_46 |= min((arr_2 [(_Bool)1] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 + 1])));
                            arr_65 [i_0] [i_1 - 1] [i_1] [i_14] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) arr_49 [i_1] [i_14] [i_13] [i_0] [i_1]))) ? (((((/* implicit */_Bool) 4079267800U)) ? (arr_38 [(signed char)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_29 [i_0] [i_1 + 1] [i_0] [i_0])))))))) >> (((((/* implicit */int) arr_27 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1])) << (((/* implicit */int) arr_27 [i_1 - 1] [i_1] [i_1 + 1] [i_13]))))));
                        }
                        /* vectorizable */
                        for (signed char i_20 = 0; i_20 < 20; i_20 += 3) /* same iter space */
                        {
                            var_47 += ((/* implicit */unsigned int) ((unsigned long long int) (signed char)41));
                            arr_69 [i_1] [9U] [i_13] [i_14] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [i_1] [i_1])) ? (arr_61 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
                            var_48 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_55 [i_1] [i_1 - 1] [i_1])) ? (arr_63 [i_0] [i_1 + 1] [i_13] [i_14] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                            arr_70 [i_0] [i_20] [i_1] [i_0] [i_1] [i_0] [i_0] = ((signed char) arr_48 [i_1 + 1] [i_1] [i_1] [i_1]);
                        }
                    }
                    for (unsigned long long int i_21 = 4; i_21 < 16; i_21 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned long long int) min(((-(274877906943LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2388838021U)) ? (arr_6 [i_1 - 1] [i_21 - 4]) : (arr_6 [i_1 - 1] [i_21 + 1]))))));
                        /* LoopSeq 2 */
                        for (signed char i_22 = 0; i_22 < 20; i_22 += 1) 
                        {
                            arr_77 [i_0] [i_13] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)166)) && ((_Bool)1)));
                            arr_78 [i_0] [i_1] [i_1] [i_21] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)166))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)0)), (arr_12 [i_1 - 1] [i_21 - 2])))) : ((-(1475672339)))));
                        }
                        for (int i_23 = 1; i_23 < 19; i_23 += 4) 
                        {
                            arr_81 [i_0] [i_1 + 1] [i_1 + 1] [i_13] [i_1] [i_1 + 1] [i_23] = ((/* implicit */short) (-(min((arr_45 [i_1 - 1] [i_1] [i_23 - 1]), (arr_45 [i_1 + 1] [i_1] [i_23 + 1])))));
                            arr_82 [i_0] [i_1] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)-38))))));
                            arr_83 [i_1] [i_1] [i_1] [i_13] [i_1] = ((/* implicit */unsigned short) min(((signed char)-106), ((signed char)14)));
                            var_50 += ((((/* implicit */_Bool) ((unsigned long long int) arr_23 [i_21] [i_23] [i_23 - 1] [i_23 - 1] [(_Bool)1] [i_0]))) ? (((/* implicit */int) arr_23 [i_1 + 1] [i_23] [i_23 - 1] [i_23] [i_23 - 1] [i_0])) : (((((/* implicit */int) (unsigned short)61322)) + (((/* implicit */int) (signed char)0)))));
                        }
                    }
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 1) 
                {
                    arr_87 [i_0] [i_0] [0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_71 [i_0] [i_1 - 1] [i_0])) ? (15402677844712012443ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [10ULL] [i_1 - 1] [i_1 - 1] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_25 = 0; i_25 < 20; i_25 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)9776)))))));
                        arr_91 [i_0] [i_1] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_68 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                    }
                    arr_92 [i_1] [i_1 + 1] [(signed char)4] [i_24] = ((/* implicit */int) 13151303747233090521ULL);
                    /* LoopSeq 3 */
                    for (unsigned int i_26 = 2; i_26 < 19; i_26 += 2) /* same iter space */
                    {
                        var_52 = ((/* implicit */signed char) (+(arr_63 [(short)18] [5LL] [i_26 - 1] [i_1] [i_1 - 1])));
                        arr_96 [i_0] [i_0] [i_1] [i_24] [i_26 + 1] = ((/* implicit */short) (-((~(arr_84 [i_1] [i_1] [i_26])))));
                        var_53 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)6))));
                    }
                    for (unsigned int i_27 = 2; i_27 < 19; i_27 += 2) /* same iter space */
                    {
                        var_54 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) arr_93 [i_27 - 2] [i_27] [i_0] [i_27] [i_0])))));
                        var_55 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_1 + 1] [i_1] [i_1 - 1] [i_27 - 1])) ? (((/* implicit */int) ((signed char) (unsigned char)35))) : ((~(((/* implicit */int) arr_0 [i_24] [i_27]))))));
                        var_56 = ((/* implicit */unsigned int) var_11);
                        var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((_Bool) 32056386026250505ULL)))));
                    }
                    for (unsigned int i_28 = 2; i_28 < 19; i_28 += 2) /* same iter space */
                    {
                        var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_11 [i_1] [i_28 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_103 [i_1])))))) ? (((int) arr_36 [i_0] [(signed char)16] [i_1])) : (((/* implicit */int) arr_95 [i_28 - 2] [i_28 + 1] [i_28 - 2]))));
                        var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) 215699496U)) ? (arr_44 [i_28 + 1] [i_28 - 1] [2ULL] [i_28 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_28] [i_1] [i_28] [i_28 - 2])))));
                        arr_104 [i_1] [i_1] [i_24] [(_Bool)1] = ((/* implicit */int) ((_Bool) ((7382994335250160856ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9152))))));
                        var_60 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_1 - 1] [i_28 + 1] [i_28 - 2] [i_28 + 1] [i_1]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65516))) / (arr_102 [(unsigned short)4] [i_1] [1U] [i_28 - 2] [i_28])))));
                    }
                }
                for (unsigned long long int i_29 = 0; i_29 < 20; i_29 += 1) 
                {
                    var_61 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-122)) / (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0] [11] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4079267779U)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_62 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!((_Bool)1)))), (arr_106 [i_1 + 1] [i_29])));
                        var_63 -= ((/* implicit */unsigned long long int) (~((~(13)))));
                    }
                }
            }
        } 
    } 
    var_64 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (((unsigned int) ((((/* implicit */_Bool) var_9)) ? (-1501515173) : (((/* implicit */int) (unsigned char)221)))))));
}
