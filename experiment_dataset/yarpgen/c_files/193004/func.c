/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193004
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
    var_10 = ((/* implicit */signed char) 0U);
    var_11 = ((/* implicit */_Bool) (+((-(15U)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) ((long long int) (-2147483647 - 1)));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned char) ((var_6) ? ((-2147483647 - 1)) : (2147483647)));
                /* LoopSeq 2 */
                for (long long int i_3 = 3; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4)))));
                    arr_10 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned int) arr_9 [i_3 + 1] [i_2] [(signed char)0] [i_0]);
                    var_15 = ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_3 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [7] [(unsigned char)0] [i_3 - 3])) ^ (((/* implicit */int) (signed char)-15))))) : ((+(21U))));
                    arr_11 [i_2] = ((/* implicit */int) (((-2147483647 - 1)) < (((/* implicit */int) (_Bool)1))));
                }
                for (long long int i_4 = 3; i_4 < 11; i_4 += 3) /* same iter space */
                {
                    var_16 -= ((/* implicit */int) (unsigned short)9192);
                    var_17 = ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_2]));
                }
                var_18 = ((/* implicit */unsigned short) (unsigned char)178);
            }
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-2147483647 - 1)))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 9; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 = ((((var_0) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_6] [i_0])))) ? ((((_Bool)1) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))));
                            arr_22 [i_0] [i_1] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */_Bool) arr_6 [i_0] [i_5] [i_5]);
                            var_21 ^= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [(short)8])))))));
                        }
                    } 
                } 
                arr_23 [i_0 + 1] [i_1] [i_5] = ((/* implicit */signed char) (short)-15);
                var_22 = ((/* implicit */long long int) var_1);
            }
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((unsigned long long int) (!((_Bool)0))));
                            var_24 ^= (-(4294967295U));
                            arr_33 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) 0)) : (arr_12 [i_0] [i_10 - 1] [i_0 - 3] [i_9] [i_10])));
                        }
                    } 
                } 
                arr_34 [i_8] [i_1] [i_8] = ((/* implicit */_Bool) ((unsigned short) var_8));
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_39 [i_11] [i_8] [i_8] [i_0] = ((/* implicit */int) arr_25 [i_0 + 1] [i_1] [i_8] [i_11]);
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 11; i_12 += 3) 
                    {
                        arr_43 [i_0 - 2] [i_0 - 2] [i_8] = ((/* implicit */_Bool) (unsigned char)227);
                        var_25 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                        var_26 -= ((/* implicit */signed char) (unsigned short)65535);
                    }
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)10] [i_8] [(unsigned short)10])) ? (((((/* implicit */_Bool) 431254433U)) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-114)))));
                        var_28 = ((/* implicit */long long int) var_4);
                    }
                }
                for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (short)-22571))));
                    arr_49 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0 - 4] [i_0])) | (((/* implicit */int) arr_17 [i_0] [i_0 + 3]))));
                    var_30 = ((_Bool) (signed char)-88);
                    arr_50 [i_0] [i_1] [i_8] [8U] [i_0] [i_1] |= ((/* implicit */long long int) var_9);
                }
                for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    var_31 = ((/* implicit */short) (unsigned short)65522);
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) (_Bool)1);
                        var_33 = ((/* implicit */int) (signed char)-123);
                        var_34 = ((/* implicit */int) (((_Bool)1) ? (14611427303697112581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                    var_35 -= ((/* implicit */long long int) (~(((/* implicit */int) (short)1468))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        var_36 -= ((((/* implicit */_Bool) 5677802498908277858LL)) ? (((unsigned long long int) (unsigned char)87)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0 - 4] [i_0 - 4] [(short)1] [i_0] [i_0]))));
                        var_37 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(var_9)))) <= (((long long int) arr_5 [i_8] [i_1] [i_8]))));
                        arr_59 [i_8] = (((!(arr_27 [i_8] [i_8]))) ? (13980872876637740687ULL) : (((/* implicit */unsigned long long int) arr_20 [i_0 + 2] [i_0 + 3])));
                        var_38 -= (~(((/* implicit */int) arr_3 [i_0 + 2])));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_64 [i_8] [i_1] [i_1] [i_15] [i_18] [i_15] = ((/* implicit */signed char) (short)32751);
                        arr_65 [i_0] [i_8] [(short)1] [i_15] [i_18] = ((/* implicit */long long int) (_Bool)1);
                        arr_66 [i_8] [i_1] [i_1] [i_18] = ((/* implicit */unsigned long long int) (unsigned short)32850);
                    }
                }
                var_39 = ((/* implicit */long long int) 292796317);
            }
            arr_67 [i_0] = ((((/* implicit */_Bool) ((arr_37 [i_0 + 2] [i_1] [i_0] [i_0] [i_0] [i_0]) + (arr_46 [(signed char)6] [i_0] [i_0] [i_0] [i_0])))) ? (((arr_18 [i_0] [i_0 - 4] [i_0] [i_0] [i_1] [i_1] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22571))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_7))))));
            /* LoopSeq 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                arr_70 [(short)2] [11] [i_19] = ((/* implicit */_Bool) ((signed char) var_6));
                arr_71 [i_1] [i_1] = ((/* implicit */long long int) var_0);
                var_40 = ((/* implicit */long long int) var_2);
                var_41 = ((/* implicit */_Bool) var_4);
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        {
                            var_42 ^= ((/* implicit */signed char) var_6);
                            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                    } 
                } 
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
            {
                var_44 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) 0ULL)))));
                arr_80 [i_0] [i_1] [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_20 [i_1] [i_22]))) * (((/* implicit */int) ((1490459520U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-31004))))))));
                var_45 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) 2026005369U)))));
            }
            var_46 = ((/* implicit */_Bool) max((var_46), ((!(((/* implicit */_Bool) var_2))))));
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (4694775678827350880LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4401196824910451519ULL))))))));
        }
        for (unsigned short i_23 = 0; i_23 < 12; i_23 += 1) 
        {
            var_48 = ((/* implicit */short) 6614474300662896785LL);
            var_49 = ((/* implicit */long long int) (_Bool)1);
            /* LoopSeq 1 */
            for (unsigned short i_24 = 0; i_24 < 12; i_24 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_25 = 1; i_25 < 9; i_25 += 4) 
                {
                    var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-32)) / (((/* implicit */int) arr_53 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 3] [i_23]))));
                    /* LoopSeq 3 */
                    for (signed char i_26 = 2; i_26 < 10; i_26 += 3) 
                    {
                        var_51 = ((/* implicit */_Bool) arr_68 [i_0 - 3] [i_26 + 2] [i_24]);
                        arr_93 [i_26] [i_26] = ((/* implicit */signed char) 292796301);
                        var_52 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_26 [i_0] [i_23] [i_25 + 2])) + (((/* implicit */int) (signed char)37))))));
                        var_53 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (unsigned char i_27 = 0; i_27 < 12; i_27 += 3) /* same iter space */
                    {
                        var_54 = ((/* implicit */unsigned short) (signed char)0);
                        var_55 -= ((/* implicit */short) ((int) var_3));
                    }
                    for (unsigned char i_28 = 0; i_28 < 12; i_28 += 3) /* same iter space */
                    {
                        arr_98 [10LL] [i_28] [(short)10] = ((/* implicit */short) (+(((((/* implicit */int) arr_74 [i_0 + 2] [i_23] [i_24] [2] [i_25] [i_28])) & (((/* implicit */int) var_8))))));
                        arr_99 [i_0] [i_28] [i_0] = ((/* implicit */unsigned long long int) (((-(98286541568840887LL))) <= (((/* implicit */long long int) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_56 = ((/* implicit */short) (_Bool)1);
                    }
                    var_57 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24604))) > (var_9)))) + (((/* implicit */int) var_6))));
                    var_58 = ((/* implicit */int) var_9);
                }
                arr_100 [i_23] = ((/* implicit */signed char) ((16175724875057621557ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_5)))))));
            }
        }
        for (short i_29 = 2; i_29 < 9; i_29 += 4) 
        {
            var_59 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (-3))) + (((/* implicit */int) (unsigned short)45876)));
            var_60 -= ((/* implicit */_Bool) ((((6770867852305283127ULL) << (((arr_18 [i_0 + 2] [i_29] [i_0 - 4] [i_0 + 2] [i_29 + 3] [i_0 + 2] [i_29]) - (13065081419960446318ULL))))) | (var_2)));
            var_61 = ((/* implicit */unsigned long long int) arr_97 [i_29] [i_0] [i_0] [i_0] [i_0]);
            arr_103 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_2)));
        }
        /* LoopSeq 2 */
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-24575)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (short)32763)) << (((((((/* implicit */int) (short)-979)) + (997))) - (7))))) : (((/* implicit */int) (short)-10))));
            var_63 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) 2026005370U)) && (var_7))))));
            var_64 = ((/* implicit */unsigned short) (!(arr_17 [i_0 - 4] [i_0 - 2])));
            var_65 = ((/* implicit */unsigned long long int) 1356217367);
            /* LoopSeq 1 */
            for (short i_31 = 0; i_31 < 12; i_31 += 3) 
            {
                var_66 = ((/* implicit */short) min((var_66), (((/* implicit */short) (~(((/* implicit */int) var_0)))))));
                /* LoopSeq 1 */
                for (unsigned short i_32 = 0; i_32 < 12; i_32 += 2) 
                {
                    var_67 = ((/* implicit */int) var_2);
                    arr_112 [i_0] [i_31] [i_31] [i_32] [i_32] = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) var_4)) : (((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_30] [i_31] [i_31]))))));
                }
            }
        }
        for (long long int i_33 = 1; i_33 < 11; i_33 += 3) 
        {
            arr_116 [i_33] [i_33 + 1] [i_33 - 1] = ((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) ((arr_89 [i_0 - 1] [i_0] [i_33] [i_33]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19152)))))) : (((/* implicit */int) (signed char)59))));
            var_68 = ((/* implicit */int) 11061687662145761855ULL);
            arr_117 [i_0 - 2] [i_33 - 1] = ((/* implicit */_Bool) arr_96 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (int i_34 = 0; i_34 < 12; i_34 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                {
                    for (short i_36 = 0; i_36 < 12; i_36 += 4) 
                    {
                        {
                            var_69 -= ((/* implicit */short) ((((((/* implicit */int) var_7)) / (((/* implicit */int) (short)18764)))) + (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_6))))));
                            arr_126 [i_0] [i_0] [i_33 - 1] [i_34] [i_35] [i_35] [i_36] = ((/* implicit */unsigned int) (+(-1356217374)));
                            var_70 -= ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                var_71 = ((/* implicit */int) ((unsigned char) (unsigned char)206));
                /* LoopSeq 1 */
                for (unsigned char i_37 = 1; i_37 < 11; i_37 += 3) 
                {
                    var_72 = (+(7385056411563789761ULL));
                    var_73 = ((/* implicit */int) max((var_73), (((/* implicit */int) arr_115 [i_37] [i_33] [i_33]))));
                }
            }
            var_74 = ((/* implicit */short) ((int) arr_3 [i_0 + 3]));
        }
    }
    for (short i_38 = 0; i_38 < 12; i_38 += 4) 
    {
        var_75 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (3957755770907341982LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_38])) ? (((/* implicit */long long int) var_9)) : (-2565105781921012185LL))))))), (((((/* implicit */int) ((var_5) && (((/* implicit */_Bool) arr_68 [i_38] [i_38] [i_38]))))) - (-1217578727)))));
        var_76 = ((/* implicit */signed char) max((var_76), (((/* implicit */signed char) 12750960614880085067ULL))));
        arr_131 [i_38] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)32766), (((/* implicit */short) arr_62 [i_38] [i_38] [i_38] [i_38])))))) % (var_9)));
    }
}
