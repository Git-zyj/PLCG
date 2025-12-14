/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49973
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        arr_3 [i_0] = ((/* implicit */signed char) var_2);
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] = ((((/* implicit */unsigned long long int) arr_6 [i_2] [i_1 - 2] [i_0])) - (((unsigned long long int) arr_6 [i_1 - 3] [i_2] [i_2])));
                    arr_10 [i_0] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))) : (var_7)));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (arr_13 [i_3])))) ? (((unsigned long long int) arr_11 [3ULL])) : (min((((((/* implicit */_Bool) (unsigned short)20080)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) : (arr_13 [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) var_15)))))))));
        arr_14 [i_3] |= ((/* implicit */unsigned int) arr_11 [i_3]);
        arr_15 [i_3] = ((arr_13 [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_12 [i_3])) | (((/* implicit */int) var_4))))))));
    }
    for (signed char i_4 = 2; i_4 < 7; i_4 += 2) 
    {
        arr_20 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_4 - 2] [i_4 - 2] [i_4 - 2]), (((/* implicit */unsigned long long int) arr_11 [i_4 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4491022924184045863LL)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)91))))) ? (min((((/* implicit */unsigned long long int) arr_17 [i_4] [i_4])), (var_11))) : (max((arr_0 [i_4]), (((/* implicit */unsigned long long int) arr_12 [i_4])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)120), (var_13)))) + (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_14)))))))));
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27628)) ? (((/* implicit */int) ((_Bool) 18446744073709551615ULL))) : (((((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_18 [i_4 + 2] [(short)6]))))));
        var_18 = ((/* implicit */short) arr_7 [i_4]);
    }
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_19 = arr_19 [i_5];
        var_20 = min((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_21 [i_5] [i_5]), (((/* implicit */long long int) var_1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) arr_23 [i_5])) ? (arr_6 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5]))))));
    }
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    {
                        var_21 = (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)106))) : (arr_19 [i_6]))));
                        arr_36 [i_6] [i_6] [i_8] [i_6] = ((long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9] [i_7] [i_8] [i_9]))) / (576460752303423487ULL)))));
                    }
                } 
            } 
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((short) 18446744073709551615ULL)))));
            arr_37 [i_7] &= ((/* implicit */short) arr_30 [i_7]);
        }
        for (long long int i_10 = 1; i_10 < 9; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) var_11);
                        var_24 = var_1;
                        var_25 = ((/* implicit */_Bool) 17729567899732223091ULL);
                    }
                } 
            } 
            var_26 &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max(((signed char)106), ((signed char)-26)))) ? (((/* implicit */unsigned long long int) arr_7 [i_10 - 1])) : (((var_2) ? (((/* implicit */unsigned long long int) arr_38 [i_6])) : (1ULL))))));
            var_27 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_45 [i_6] [i_10 - 1])) ? (arr_45 [i_6] [i_10 + 1]) : (arr_27 [i_6] [i_10 + 1] [i_10])))));
        }
        for (unsigned char i_13 = 3; i_13 < 7; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_13] [i_13 + 1])) ? (((/* implicit */int) arr_18 [i_6] [i_13 + 1])) : (((/* implicit */int) arr_18 [i_13] [i_13 + 1]))))) < (((((/* implicit */_Bool) arr_6 [2ULL] [i_13 + 1] [i_13 - 3])) ? (arr_6 [i_6] [i_13 + 1] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6] [i_13 + 1] [i_14] [i_14])))))));
                        var_29 = ((/* implicit */short) ((max((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(unsigned char)7])) || (var_2)))), ((+(((/* implicit */int) arr_31 [i_6] [i_13] [i_6] [i_15])))))) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [i_6])) : (((/* implicit */int) var_13))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */_Bool) (signed char)-92);
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_56 [i_6] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_27 [(unsigned short)4] [i_16] [i_16])) ? (var_0) : (((/* implicit */unsigned int) -1166029804)))));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) 18446744073709551602ULL))));
            arr_57 [i_16] = ((/* implicit */_Bool) var_4);
        }
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (-2147483647 - 1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_17 [i_6] [i_6])), (var_14))))) : ((-(min((((/* implicit */unsigned long long int) var_6)), (var_11)))))));
        /* LoopSeq 1 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    {
                        var_33 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [1LL] [1LL] [i_19]))) * (((((/* implicit */_Bool) (((_Bool)1) ? (-2147483629) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (1166029795) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) (unsigned short)0)), (31ULL)))))));
                        /* LoopSeq 2 */
                        for (long long int i_20 = 0; i_20 < 10; i_20 += 3) 
                        {
                            arr_72 [i_6] [i_17] [i_18] [i_19] [i_20] = ((/* implicit */long long int) 2147483628);
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((-1068053947229714925LL), (((/* implicit */long long int) (signed char)65)))), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (((((((/* implicit */int) (signed char)-91)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) arr_18 [i_6] [i_20]))))) : (((long long int) var_6))))));
                            arr_73 [4ULL] [i_6] [i_6] [0ULL] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((((/* implicit */int) var_4)) * (((/* implicit */int) arr_17 [i_6] [i_6])))) > (min(((-(((/* implicit */int) var_14)))), (((/* implicit */int) ((arr_26 [i_19]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_34 [i_17] [i_18] [i_19] [i_20]))));
                        }
                        for (int i_21 = 1; i_21 < 8; i_21 += 2) 
                        {
                            var_36 += ((/* implicit */_Bool) arr_49 [i_6] [i_18] [i_6]);
                            var_37 ^= ((/* implicit */unsigned long long int) max((arr_42 [i_6] [i_17] [i_18] [i_21 - 1]), (((/* implicit */unsigned short) var_8))));
                        }
                        var_38 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-1))))), (((unsigned long long int) arr_23 [i_6])))), (max((((/* implicit */unsigned long long int) (short)5235)), (18412782413390200907ULL)))));
                    }
                } 
            } 
            var_39 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)-120)) + (((/* implicit */int) min((arr_25 [i_6]), (arr_25 [i_17]))))));
        }
    }
    for (short i_22 = 0; i_22 < 10; i_22 += 2) /* same iter space */
    {
        var_40 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_66 [2] [i_22] [(unsigned short)1] [i_22]))));
        var_41 -= ((/* implicit */long long int) var_13);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 2) 
    {
        for (long long int i_24 = 0; i_24 < 13; i_24 += 3) 
        {
            {
                arr_86 [i_23] [i_23] [i_23] = min((((((/* implicit */_Bool) var_10)) ? (arr_0 [i_23]) : (((/* implicit */unsigned long long int) 4616629112698599596LL)))), (max((arr_0 [i_23]), (arr_0 [i_23]))));
                /* LoopSeq 1 */
                for (unsigned int i_25 = 0; i_25 < 13; i_25 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 0; i_26 < 13; i_26 += 2) 
                    {
                        for (short i_27 = 2; i_27 < 10; i_27 += 2) 
                        {
                            {
                                arr_97 [i_23] [i_24] [i_25] [(signed char)3] [i_27 + 3] = ((/* implicit */long long int) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))));
                                arr_98 [i_23] [i_24] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (max((arr_0 [i_27 - 1]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_7 [i_26]))))))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) var_13)), (arr_6 [i_23] [i_23] [i_23]))), (((/* implicit */long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_28 = 0; i_28 < 13; i_28 += 3) 
                    {
                        var_43 += ((/* implicit */unsigned short) var_0);
                        var_44 &= ((((((/* implicit */int) arr_92 [i_23])) + (((/* implicit */int) arr_84 [i_25])))) > (((/* implicit */int) arr_1 [i_25])));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_92 [i_25])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_87 [i_25] [i_24] [i_25])))) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_15)))))))) : (((arr_6 [i_24] [i_24] [i_25]) ^ (arr_6 [i_23] [i_24] [i_25])))));
                        /* LoopSeq 1 */
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            arr_105 [i_28] [i_23] [i_24] [i_24] [i_25] [i_25] [i_29] = ((/* implicit */long long int) (+(arr_93 [i_23] [i_23] [i_25] [i_28] [i_28] [i_29])));
                            var_46 = ((/* implicit */unsigned long long int) var_14);
                            arr_106 [i_23] [i_24] [i_24] [i_25] [i_28] [i_29] [i_25] &= ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_101 [i_23] [i_23] [i_23] [i_23] [i_23]))))));
                            var_47 = arr_92 [i_29];
                        }
                        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) var_10))));
                    }
                    for (int i_30 = 0; i_30 < 13; i_30 += 2) 
                    {
                        var_49 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)-90)))), (((/* implicit */int) var_1))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_101 [i_23] [i_23] [i_23] [i_23] [i_23])), (var_0)))), (arr_108 [i_23] [i_23] [i_23] [i_23])))));
                        /* LoopSeq 3 */
                        for (signed char i_31 = 3; i_31 < 11; i_31 += 2) 
                        {
                            var_50 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((long long int) (_Bool)1)), (((/* implicit */long long int) (_Bool)1))))), (arr_110 [i_23] [i_23] [i_23] [i_25] [i_25] [i_30] [i_31])));
                            var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) arr_1 [i_25]))));
                        }
                        for (int i_32 = 3; i_32 < 10; i_32 += 2) 
                        {
                            var_52 = arr_108 [i_23] [i_23] [i_25] [i_23];
                            var_53 = ((/* implicit */unsigned char) arr_96 [i_23] [i_24] [i_25] [0ULL] [i_32] [i_23] [i_24]);
                            arr_118 [i_23] [i_23] [i_25] [i_30] [i_32] = ((/* implicit */unsigned char) ((((((arr_89 [7] [i_32 - 2] [4ULL] [i_32] [i_32 - 2] [i_32]) / (((/* implicit */int) arr_92 [i_32 - 2])))) + (2147483647))) >> (((min((arr_89 [i_32 - 1] [i_32 + 2] [i_32 - 1] [i_32] [i_32] [i_32]), (arr_89 [i_24] [i_32 - 1] [(short)3] [i_32] [i_32] [i_32 - 2]))) - (1119040373)))));
                            var_54 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_89 [i_32] [i_32 - 3] [i_25] [i_32 + 1] [i_32 + 3] [i_25])) ? (var_7) : (((/* implicit */unsigned long long int) arr_89 [i_32] [i_32 + 3] [i_32 - 1] [i_32 - 1] [i_32 - 1] [i_24]))))) ? (((((/* implicit */_Bool) arr_89 [i_30] [i_32 - 2] [i_32] [i_32 + 2] [i_32 - 3] [i_30])) ? (((/* implicit */int) (unsigned short)18316)) : (((/* implicit */int) var_6)))) : (((var_9) + (((/* implicit */int) (_Bool)1))))));
                            arr_119 [i_23] [i_32] [i_24] [i_30] [i_30] = ((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) var_15)))) < (((((/* implicit */_Bool) var_0)) ? (-1) : (((/* implicit */int) (signed char)(-127 - 1)))))))), (((((/* implicit */int) arr_99 [i_23] [i_23] [i_23] [i_23])) - (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) var_2)) : (var_9)))))));
                        }
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                        {
                            arr_123 [i_23] [i_23] [i_23] [i_23] [i_33] = min((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)64)), (arr_100 [i_33] [i_23] [i_23] [i_24] [i_33])))), (max((((/* implicit */long long int) arr_82 [i_23] [i_23])), (((((/* implicit */_Bool) (signed char)-1)) ? (arr_6 [i_24] [i_24] [i_30]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                            var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_81 [i_23] [i_33]))) < (arr_103 [i_30] [i_25] [i_30])))))))));
                            var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) var_9))));
                        }
                        arr_124 [i_23] [i_23] [6LL] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1073741824))))) + ((+(((/* implicit */int) max((arr_81 [5] [5]), (arr_114 [i_30]))))))));
                    }
                    for (unsigned long long int i_34 = 2; i_34 < 11; i_34 += 3) 
                    {
                        var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1490685716)) ? (6495236547847475245LL) : (-2467069584144594021LL)));
                        var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)39157))) ? (arr_122 [i_34 + 1] [i_34 + 1] [i_34] [i_34]) : (((/* implicit */long long int) ((/* implicit */int) arr_99 [(unsigned char)8] [(signed char)0] [6LL] [(short)1])))))) ? ((+(((/* implicit */int) arr_90 [i_34] [i_34] [i_34 - 1] [i_23])))) : (((/* implicit */int) min((arr_112 [i_23] [i_23] [i_24] [i_25] [i_34 + 2] [i_34]), (((/* implicit */unsigned short) var_2)))))));
                        var_59 *= ((((long long int) arr_99 [i_34 + 1] [i_34 - 2] [i_34 + 1] [i_34 - 2])) < (((/* implicit */long long int) ((/* implicit */int) var_6))));
                        var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) arr_126 [(_Bool)1] [i_24] [i_25] [i_34]))));
                    }
                }
                var_61 *= ((((/* implicit */long long int) ((/* implicit */int) (!(arr_117 [i_23] [i_23] [i_23] [i_23] [i_23] [i_24]))))) < (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) -1490685716)) : (2467069584144594021LL))));
                arr_127 [i_23] [i_23] = ((/* implicit */int) min((((var_2) ? (arr_85 [i_23]) : (arr_85 [i_23]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_81 [i_24] [i_23])) ? (((/* implicit */int) arr_81 [i_24] [i_23])) : (((/* implicit */int) arr_81 [i_23] [i_24])))))));
            }
        } 
    } 
}
