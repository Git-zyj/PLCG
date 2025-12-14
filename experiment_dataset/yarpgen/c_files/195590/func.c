/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195590
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (-(1331984123U))))));
            arr_4 [i_0] [i_0] = (-(((/* implicit */int) var_4)));
            var_13 |= ((/* implicit */unsigned long long int) arr_2 [(signed char)2] [(signed char)2]);
            arr_5 [i_0] [i_1] = ((/* implicit */int) arr_1 [i_1 - 2]);
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    arr_10 [(unsigned short)4] [i_2 - 1] = ((/* implicit */short) ((arr_9 [i_1 - 2] [i_1 + 1] [i_2 + 1] [i_2 - 2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 1] [i_2 + 1])))));
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (var_5)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_1))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2 + 3] [i_0] [i_2 - 2])) ? ((~(-1577510812))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [8ULL])) > (((/* implicit */int) (unsigned char)150)))))));
                    var_16 = ((/* implicit */unsigned long long int) (((+(2203312917964160702LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) -1577510819)))))));
                    var_17 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (2962983179U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                }
                var_18 = var_10;
                var_19 = ((/* implicit */signed char) arr_8 [(_Bool)1] [i_1] [i_1] [i_0] [i_0]);
            }
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            arr_13 [(unsigned short)9] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [(signed char)0] [i_4])) ? (((/* implicit */int) var_11)) : (var_10)))));
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                var_20 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                var_21 = ((/* implicit */int) var_1);
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)0))));
                arr_16 [i_0] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_1 [6]))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_23 *= ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                    var_24 = ((/* implicit */unsigned short) ((int) arr_17 [i_0] [i_0] [i_7]));
                }
                var_25 |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (9774262229012787018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))));
            }
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                var_26 = 9ULL;
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_8] [i_4])) ? (((/* implicit */int) ((unsigned short) arr_1 [i_4]))) : (((/* implicit */int) arr_7 [i_4]))));
                    arr_27 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_8])) ? (((/* implicit */int) var_2)) : (-1168763537)));
                    arr_28 [i_8] = ((/* implicit */long long int) ((-2002175587) | (((/* implicit */int) var_11))));
                }
                for (int i_10 = 1; i_10 < 8; i_10 += 4) 
                {
                    var_28 -= ((/* implicit */signed char) ((unsigned int) arr_30 [(_Bool)1] [(_Bool)1]));
                    arr_31 [i_4] [i_8] = var_10;
                    var_29 = ((/* implicit */unsigned long long int) ((long long int) arr_8 [i_10 - 1] [i_10] [i_10] [i_10 + 1] [i_10]));
                    var_30 = ((/* implicit */signed char) ((int) ((unsigned char) 18436636237405616833ULL)));
                    var_31 = ((/* implicit */int) 15418373691762588260ULL);
                }
            }
            var_32 = ((/* implicit */unsigned char) ((int) ((var_11) ? (((/* implicit */int) (short)30987)) : (((/* implicit */int) (unsigned short)60413)))));
            arr_32 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((unsigned short) (unsigned char)176));
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_35 [i_11] = ((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL)));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 1; i_12 < 8; i_12 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned int) var_8);
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    arr_42 [i_0] [i_11] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) arr_24 [i_0] [i_0] [i_12] [i_11] [i_12] [i_11])));
                    arr_43 [(signed char)5] [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_0] [i_13] [i_12] [i_12 + 1])) | (((/* implicit */int) arr_21 [i_0] [i_12] [i_12] [i_12 - 1]))));
                }
            }
            for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) arr_24 [i_14] [i_15] [i_11] [i_11] [i_11] [i_0])) : (arr_20 [i_14 + 2] [i_14 - 1])));
                            var_36 |= var_4;
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-80)) ? (var_10) : (((/* implicit */int) (signed char)-62)))))))));
            }
            arr_53 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22498)) ? (55035536) : (((/* implicit */int) (short)2707))));
        }
        /* vectorizable */
        for (signed char i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            var_38 = ((/* implicit */int) arr_45 [i_17]);
            arr_56 [i_0] [i_17] [5LL] |= ((/* implicit */short) ((((/* implicit */int) arr_29 [i_0] [i_17])) + (((/* implicit */int) arr_29 [i_0] [i_17]))));
            var_39 = ((/* implicit */unsigned char) arr_23 [i_17] [i_0] [i_0]);
            arr_57 [i_0] = ((/* implicit */_Bool) ((0) - (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [0] [(unsigned short)9] [i_17])) || (((/* implicit */_Bool) -9223372036854775802LL)))))));
            arr_58 [(short)4] [(signed char)9] = ((/* implicit */unsigned long long int) ((signed char) arr_12 [i_0] [i_17]));
        }
        arr_59 [2U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) : (7U)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_18 = 0; i_18 < 10; i_18 += 2) 
        {
            arr_62 [i_0] = ((((/* implicit */_Bool) arr_55 [i_0])) ? (((/* implicit */int) arr_52 [i_18] [i_18] [i_18] [i_0] [i_0])) : (((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_0] [i_0])));
            /* LoopSeq 2 */
            for (short i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                var_40 = ((/* implicit */short) arr_0 [4ULL]);
                /* LoopSeq 3 */
                for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 1) 
                {
                    arr_70 [(unsigned short)8] [i_18] [(unsigned char)7] [i_19] = ((/* implicit */unsigned long long int) ((arr_67 [i_0] [i_0] [i_18] [1] [i_19] [i_20]) / (4LL)));
                    var_41 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_51 [i_0] [i_18] [(unsigned short)0] [i_18])) ? (arr_38 [i_0] [i_0] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    arr_71 [i_0] [i_19] [i_19] = (~(((/* implicit */int) arr_45 [i_19])));
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (arr_65 [i_19] [(short)3]) : (arr_65 [i_19] [i_20])));
                }
                for (long long int i_21 = 1; i_21 < 8; i_21 += 1) 
                {
                    arr_74 [i_19] [i_19] [i_19] [i_0] = ((/* implicit */int) arr_51 [i_21 + 1] [i_19] [i_21 - 1] [i_21]);
                    /* LoopSeq 2 */
                    for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) /* same iter space */
                    {
                        var_43 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_18 [i_0] [8LL]))))));
                        var_44 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(1010686424)))) ? (arr_23 [i_0] [i_0] [i_21 - 1]) : (-1010686428)));
                    }
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 2) /* same iter space */
                    {
                        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_80 [i_0] [i_18] [i_21 - 1] [i_0])) ? ((+(9120447579453267328ULL))) : (((/* implicit */unsigned long long int) arr_50 [i_21 + 1] [i_21] [i_21 + 1] [i_21 + 1] [i_21 + 2]))));
                        arr_81 [i_0] [i_0] [i_19] [i_21] [9] = ((/* implicit */unsigned char) ((signed char) ((arr_8 [i_23] [i_21] [2ULL] [0ULL] [i_0]) < (((/* implicit */unsigned long long int) 543617033U)))));
                        var_46 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_19] [(unsigned char)3] [i_0])) ? (var_5) : (((/* implicit */int) (unsigned char)107)))))));
                        var_47 = ((/* implicit */unsigned int) arr_61 [i_21 + 1] [9ULL]);
                    }
                    var_48 = ((/* implicit */int) arr_80 [i_0] [i_0] [i_0] [i_21 + 2]);
                }
                for (signed char i_24 = 0; i_24 < 10; i_24 += 1) 
                {
                    var_49 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)28918))));
                    /* LoopSeq 2 */
                    for (long long int i_25 = 0; i_25 < 10; i_25 += 2) 
                    {
                        arr_86 [i_19] [i_19] [i_19] [i_18] [i_0] [i_19] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_19] [i_24] [i_25])) ? (arr_79 [(signed char)7] [i_19]) : (((/* implicit */unsigned long long int) (+(-15))))));
                        arr_87 [i_25] [i_24] [i_19] [i_0] [i_19] [i_18] [i_0] = ((/* implicit */short) ((unsigned char) (_Bool)1));
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 4) 
                    {
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) (((-(arr_46 [i_18] [i_18]))) / (((/* implicit */int) var_11)))))));
                        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (unsigned char)90))))) ? (((((/* implicit */int) (unsigned char)34)) % (((/* implicit */int) var_7)))) : (((((/* implicit */int) (short)28895)) / (-1329805608)))));
                    }
                    var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */int) (short)10255)) : (((/* implicit */int) (unsigned char)223))))) ? (2000173314) : (((((/* implicit */_Bool) (short)-29082)) ? (-919809373) : (1010686424)))));
                    /* LoopSeq 2 */
                    for (signed char i_27 = 1; i_27 < 9; i_27 += 3) 
                    {
                        arr_94 [i_19] [i_27 - 1] [i_19] [i_27 - 1] [i_27 + 1] [i_27 + 1] [i_0] = ((/* implicit */signed char) (-(((long long int) var_11))));
                        var_53 -= ((/* implicit */unsigned int) arr_55 [i_19]);
                    }
                    for (int i_28 = 0; i_28 < 10; i_28 += 1) 
                    {
                        var_54 = ((/* implicit */unsigned long long int) arr_14 [i_24] [i_24] [i_18]);
                        var_55 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [0LL] [i_24])) - (((/* implicit */int) arr_60 [i_19] [5ULL] [i_19]))))) || (arr_45 [i_19]));
                        var_56 = ((/* implicit */short) (~(((/* implicit */int) ((var_9) < (var_10))))));
                        arr_99 [i_19] = ((/* implicit */signed char) 10926623694713817831ULL);
                    }
                }
                var_57 = ((/* implicit */int) (unsigned char)81);
            }
            for (long long int i_29 = 2; i_29 < 8; i_29 += 4) 
            {
                var_58 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(17519932044636449603ULL))))));
                /* LoopSeq 2 */
                for (int i_30 = 0; i_30 < 10; i_30 += 4) 
                {
                    var_59 = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_0] [8LL] [i_18])) ? (((/* implicit */long long int) (+(2888143743U)))) : ((~(3625210285251130640LL)))));
                    var_60 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)53316)) << (((((15136643169278884550ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_18] [i_0] [i_30] [(_Bool)1] [i_30]))))) - (119ULL)))));
                }
                for (unsigned long long int i_31 = 0; i_31 < 10; i_31 += 4) 
                {
                    arr_110 [i_0] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229))))) >> (((((/* implicit */int) arr_106 [i_0] [i_18] [i_29] [i_29 - 2] [i_31])) - (21965)))));
                    arr_111 [i_31] [(_Bool)1] [(signed char)1] [i_0] = ((/* implicit */unsigned int) (~(7328805011074882497ULL)));
                }
                var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) -9223372036854775802LL))));
            }
            var_62 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) var_0)))));
        }
        /* vectorizable */
        for (short i_32 = 0; i_32 < 10; i_32 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_33 = 0; i_33 < 0; i_33 += 1) 
            {
                for (int i_34 = 0; i_34 < 10; i_34 += 4) 
                {
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        {
                            var_63 = ((/* implicit */long long int) min((var_63), (((/* implicit */long long int) (~(14544655854168013932ULL))))));
                            var_64 *= ((/* implicit */int) ((unsigned int) arr_90 [i_0] [0U] [0ULL] [i_0] [i_33 + 1]));
                        }
                    } 
                } 
            } 
            arr_120 [i_32] = ((/* implicit */unsigned char) (short)-25627);
            var_65 = ((/* implicit */signed char) ((arr_46 [i_0] [i_0]) % (arr_46 [i_0] [i_0])));
            var_66 = ((/* implicit */signed char) (+(4194303ULL)));
        }
        arr_121 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ ((~(((/* implicit */int) arr_105 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 408834356)) ? (((/* implicit */unsigned long long int) arr_73 [(unsigned short)4] [i_0])) : (18446744073709551615ULL)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_105 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_0))))))) : (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (304213872U)))));
        var_67 = ((/* implicit */unsigned short) var_3);
    }
    for (int i_36 = 0; i_36 < 21; i_36 += 4) /* same iter space */
    {
        var_68 = ((/* implicit */unsigned long long int) var_4);
        arr_126 [13LL] = ((/* implicit */_Bool) var_3);
        var_69 = ((/* implicit */unsigned long long int) var_9);
        var_70 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (var_9)))), (max((arr_123 [i_36]), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (((arr_125 [i_36]) - (9242065361787941774ULL))))))))));
    }
    for (int i_37 = 0; i_37 < 21; i_37 += 4) /* same iter space */
    {
        var_71 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_124 [i_37] [i_37])))));
        var_72 += ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_128 [i_37] [i_37]), (arr_128 [i_37] [i_37])))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    }
    var_73 = ((/* implicit */unsigned long long int) (unsigned char)139);
}
