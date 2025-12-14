/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51235
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((unsigned char) (signed char)-12));
        var_21 = ((/* implicit */signed char) arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) /* same iter space */
                        {
                            var_23 = ((((/* implicit */_Bool) (signed char)45)) ? (var_9) : (((/* implicit */long long int) 93122698U)));
                            var_24 = ((long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)115))));
                            var_25 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_9 [i_4] [(signed char)2] [(signed char)2])))) : (((/* implicit */int) arr_7 [i_2] [i_3 - 1] [i_3 - 1] [i_4 - 1])));
                        }
                        for (signed char i_5 = 2; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_5 + 3] [i_5] [i_5 + 3] [i_3 - 1] [i_1 + 1]))));
                            var_27 = ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                        var_28 = ((/* implicit */signed char) ((arr_4 [i_3 - 1] [i_1 - 1]) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) arr_4 [i_3 - 1] [i_1 + 1]))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_29 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)8]))) > (arr_0 [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6]))) : (arr_0 [i_6])));
        /* LoopSeq 4 */
        for (short i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            var_30 -= ((/* implicit */signed char) arr_14 [i_6] [i_6] [i_7] [i_7] [i_7]);
            var_31 = ((/* implicit */unsigned int) var_8);
            var_32 ^= ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [(_Bool)1])) ? (((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [i_7] [(short)7] [i_7])) ? (((/* implicit */long long int) 4201844584U)) : (var_6))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_6] [i_7]))))));
            var_33 = (short)8655;
        }
        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) arr_21 [i_6]);
            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6] [i_8 - 2] [i_6]))));
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    {
                        var_36 = ((/* implicit */long long int) arr_18 [i_8 + 1] [i_8 + 1]);
                        var_37 = ((/* implicit */long long int) arr_26 [i_6] [i_10]);
                        var_38 = ((/* implicit */signed char) (+(arr_22 [i_8 + 1] [i_8 + 1] [i_9])));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-8656)) ? (((/* implicit */int) ((_Bool) (signed char)-2))) : (((/* implicit */int) (signed char)12)))))));
        }
        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_6])) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (unsigned char)187))))) && (((/* implicit */_Bool) ((unsigned short) arr_22 [i_11] [i_6] [i_6])))));
            var_41 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3798))) ^ (var_0))));
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (-(4201844597U))))));
        }
        for (int i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            var_43 ^= ((/* implicit */unsigned int) arr_16 [i_6]);
            var_44 = ((/* implicit */short) ((int) (+(((/* implicit */int) (_Bool)1)))));
        }
        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
    }
    /* vectorizable */
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_13 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)144)))))));
        var_47 = ((/* implicit */_Bool) var_14);
        var_48 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_13 - 1] [4ULL]))));
        var_49 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_13 - 1] [(unsigned short)13] [i_13]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        var_50 = ((/* implicit */_Bool) arr_6 [(signed char)0]);
        var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_14] [i_14] [i_14])) - (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [15LL])))) : (arr_33 [i_14] [i_14])));
    }
    for (short i_15 = 3; i_15 < 23; i_15 += 4) 
    {
        var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned short) arr_40 [i_15 + 2]))))) ? (((((/* implicit */_Bool) arr_41 [i_15 - 3] [i_15 - 3])) ? (((/* implicit */int) arr_41 [i_15 - 2] [i_15 - 1])) : (((/* implicit */int) arr_40 [i_15 + 2])))) : (((/* implicit */int) ((signed char) (short)-21984)))));
        /* LoopSeq 3 */
        for (short i_16 = 3; i_16 < 23; i_16 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_17 = 0; i_17 < 25; i_17 += 1) 
            {
                var_53 = ((/* implicit */signed char) ((long long int) max((arr_40 [i_15 - 3]), (arr_40 [i_15 - 3]))));
                /* LoopSeq 1 */
                for (unsigned char i_18 = 1; i_18 < 24; i_18 += 2) 
                {
                    var_54 = ((/* implicit */short) (-(((/* implicit */int) arr_43 [i_16] [i_15 - 2] [i_15 + 2]))));
                    var_55 = ((/* implicit */short) var_19);
                    var_56 = ((/* implicit */_Bool) arr_44 [(signed char)5]);
                }
                var_57 -= ((/* implicit */short) var_10);
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_58 = ((/* implicit */long long int) ((arr_43 [i_16] [i_16] [i_16]) ? (4201844564U) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)7)), (((((/* implicit */_Bool) (short)-14425)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (short)-1)))))))));
                            var_59 = ((/* implicit */long long int) arr_40 [i_20 - 1]);
                            var_60 ^= ((/* implicit */long long int) max((((/* implicit */short) min((arr_42 [i_15] [i_15] [i_17]), (((/* implicit */signed char) ((_Bool) (signed char)-40)))))), ((short)8655)));
                        }
                    } 
                } 
            }
            for (unsigned short i_21 = 0; i_21 < 25; i_21 += 1) /* same iter space */
            {
                var_61 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_49 [i_16] [i_16] [i_16] [i_16 - 2] [i_16] [(_Bool)1]))));
                /* LoopNest 2 */
                for (unsigned short i_22 = 0; i_22 < 25; i_22 += 3) 
                {
                    for (long long int i_23 = 0; i_23 < 25; i_23 += 2) 
                    {
                        {
                            var_62 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_59 [i_15] [i_15])))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_16 + 2]))) * ((+(868072767U)))))));
                            var_63 = ((/* implicit */signed char) min((var_63), (((/* implicit */signed char) arr_54 [i_23] [i_22] [i_22]))));
                            var_64 = ((/* implicit */unsigned int) max((((/* implicit */short) (signed char)103)), ((short)-17419)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_24 = 4; i_24 < 24; i_24 += 1) 
                {
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        {
                            var_65 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 93122696U)) ? (2378785237237435541ULL) : (((/* implicit */unsigned long long int) 2147483647))));
                            var_66 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)65535)) << (((((((/* implicit */int) (signed char)-16)) + (42))) - (25)))))))) ? (((arr_62 [i_25]) ? (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_15]))) : (((var_9) + (((/* implicit */long long int) ((/* implicit */int) arr_42 [9LL] [i_21] [i_21]))))))) : (((/* implicit */long long int) max((((/* implicit */int) (signed char)-110)), (((((/* implicit */_Bool) arr_64 [i_15] [i_15] [i_21] [i_21] [i_24 - 2] [i_25 + 1])) ? (((/* implicit */int) arr_69 [i_16] [i_16] [i_21] [i_24 - 2])) : (((/* implicit */int) arr_42 [i_15] [i_16] [i_16])))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_26 = 0; i_26 < 25; i_26 += 1) /* same iter space */
            {
                var_67 = ((/* implicit */long long int) max((var_67), (((/* implicit */long long int) var_15))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_27 = 1; i_27 < 23; i_27 += 4) 
                {
                    var_68 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) ((_Bool) var_12)))));
                    /* LoopSeq 1 */
                    for (short i_28 = 0; i_28 < 25; i_28 += 4) 
                    {
                        var_69 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_52 [i_16 + 1] [i_16 - 2] [i_16 - 1] [i_16 - 2])) : (((((/* implicit */_Bool) arr_46 [i_16])) ? (((/* implicit */int) arr_62 [i_15])) : (-883509111)))));
                        var_70 ^= ((/* implicit */_Bool) arr_42 [(signed char)19] [i_16] [i_28]);
                    }
                }
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    var_71 = ((/* implicit */short) max((-1996512732135098116LL), (-4469787147766263465LL)));
                    var_72 = ((/* implicit */signed char) arr_52 [i_15] [i_15] [i_15] [i_15]);
                    var_73 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 93122698U)) ^ (arr_51 [i_16 - 3] [i_16 - 1] [i_16 - 1] [i_16] [i_16 - 3])))) ? (max((arr_51 [i_16] [i_16 - 1] [(signed char)5] [i_16] [i_16]), (arr_51 [i_16] [i_16 - 1] [i_16] [i_16] [i_16]))) : (max((var_5), (arr_51 [i_16] [i_16 - 1] [20ULL] [i_16] [i_16])))));
                }
                var_74 = ((/* implicit */signed char) arr_71 [i_16] [i_16]);
                var_75 = ((/* implicit */unsigned char) ((((_Bool) arr_72 [i_16] [i_15] [i_15 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (4201844567U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_16] [i_26] [i_16] [i_16] [(short)20] [(unsigned short)20])))))) ? (((/* implicit */int) ((short) (short)32767))) : (((/* implicit */int) max((arr_81 [i_15 - 3] [i_15] [i_16 - 3] [i_16 - 3] [i_26]), (((/* implicit */signed char) arr_43 [i_16] [i_26] [i_26])))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_40 [i_26])), (arr_63 [i_15] [i_16] [i_15] [i_15])))) ? (((var_19) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_26] [i_16]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_16])) ? (arr_54 [i_16] [i_16] [i_26]) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [1LL]))))))))));
            }
            for (unsigned long long int i_30 = 1; i_30 < 23; i_30 += 1) 
            {
                var_76 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_75 [i_15] [i_15] [i_15] [i_15]))));
                var_77 = ((/* implicit */long long int) max((((93122732U) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) arr_84 [(_Bool)1] [i_16] [i_30] [i_16]))));
                /* LoopSeq 3 */
                for (short i_31 = 0; i_31 < 25; i_31 += 1) /* same iter space */
                {
                    var_78 = ((/* implicit */unsigned short) arr_40 [i_15]);
                    /* LoopSeq 1 */
                    for (short i_32 = 0; i_32 < 25; i_32 += 1) 
                    {
                        var_79 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 4201844586U)) ? (((/* implicit */long long int) arr_86 [i_16])) : (((((/* implicit */_Bool) (signed char)121)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37))))))) << ((((~(arr_85 [i_15 + 2] [i_15]))) + (1241685397271230855LL)))));
                        var_80 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-5)) || (((/* implicit */_Bool) 4201844573U)))) && (((/* implicit */_Bool) arr_80 [i_15 - 1] [(signed char)2] [i_32]))));
                    }
                    var_81 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)122)), (-821224608))))));
                }
                for (short i_33 = 0; i_33 < 25; i_33 += 1) /* same iter space */
                {
                    var_82 = arr_58 [i_15 - 1] [15LL] [i_33];
                    var_83 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_0))), (((/* implicit */unsigned long long int) arr_42 [11U] [i_16] [i_30 + 1])));
                }
                for (long long int i_34 = 0; i_34 < 25; i_34 += 4) 
                {
                    var_84 = ((/* implicit */short) max((var_84), (((/* implicit */short) arr_79 [i_34] [i_30 - 1] [i_30 + 2] [i_16] [i_15] [i_15] [i_34]))));
                    var_85 = ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)24823)) << (((93122731U) - (93122725U))))) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : (1397042454));
                    /* LoopSeq 4 */
                    for (signed char i_35 = 0; i_35 < 25; i_35 += 2) 
                    {
                        var_86 = ((/* implicit */long long int) arr_44 [i_15 - 2]);
                        var_87 = ((/* implicit */unsigned char) (+(((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-32767)))))));
                        var_88 = ((/* implicit */_Bool) var_17);
                    }
                    /* vectorizable */
                    for (short i_36 = 3; i_36 < 24; i_36 += 4) 
                    {
                        var_89 = ((/* implicit */signed char) ((((4201844555U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_92 [i_15] [i_16] [i_15] [i_34] [i_16]))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_16])))));
                        var_90 = ((/* implicit */signed char) arr_61 [i_16]);
                    }
                    for (long long int i_37 = 0; i_37 < 25; i_37 += 1) 
                    {
                        var_91 -= ((/* implicit */int) (signed char)79);
                        var_92 -= (~(((((/* implicit */unsigned long long int) 9223372036854775806LL)) | (arr_98 [i_15 - 1] [i_30 + 1] [i_34] [i_16 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_38 = 0; i_38 < 25; i_38 += 1) 
                    {
                        var_93 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (1539865481U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                        var_94 = ((/* implicit */signed char) arr_48 [i_15] [(signed char)8] [i_16] [i_15]);
                    }
                }
                var_95 -= ((/* implicit */unsigned char) arr_105 [i_16] [8LL] [i_16 - 1] [i_15]);
            }
            var_96 -= ((/* implicit */long long int) max((max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (var_17)))), (var_2))), (arr_105 [i_15 - 1] [(unsigned char)14] [i_15 + 1] [i_15 - 1])));
            var_97 ^= ((/* implicit */short) min((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_97 [i_15] [i_16 + 1] [(signed char)16] [i_16 + 1])))), (((((/* implicit */_Bool) arr_54 [14LL] [14LL] [i_15])) ? (((/* implicit */int) arr_97 [i_16] [i_16 + 1] [i_16 - 2] [i_16 - 1])) : (((/* implicit */int) arr_97 [i_15] [i_16] [i_16] [i_16]))))));
        }
        for (short i_39 = 3; i_39 < 23; i_39 += 3) /* same iter space */
        {
            var_98 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_90 [i_39 - 1] [i_15 - 2] [i_15] [18LL] [i_15 - 3])))))));
            /* LoopNest 2 */
            for (unsigned char i_40 = 1; i_40 < 23; i_40 += 4) 
            {
                for (unsigned short i_41 = 0; i_41 < 25; i_41 += 4) 
                {
                    {
                        var_99 = ((/* implicit */unsigned int) min((var_99), (((/* implicit */unsigned int) (signed char)-80))));
                        var_100 = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
            var_101 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_68 [(unsigned char)19] [(unsigned char)19] [i_39] [(unsigned char)19] [i_39])))), (arr_106 [15LL])))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_18), (((/* implicit */long long int) (short)10672))))) || (((/* implicit */_Bool) var_2)))))));
            var_102 ^= ((/* implicit */signed char) arr_96 [i_15]);
        }
        for (short i_42 = 3; i_42 < 23; i_42 += 3) /* same iter space */
        {
            var_103 = ((/* implicit */unsigned short) (-(arr_51 [i_15 - 1] [i_15] [i_15] [i_42] [i_42 + 1])));
            var_104 = ((/* implicit */int) arr_61 [i_42]);
            var_105 = ((/* implicit */_Bool) var_0);
        }
    }
    for (signed char i_43 = 0; i_43 < 20; i_43 += 4) 
    {
        var_106 = (((+(((/* implicit */int) (unsigned short)14143)))) & (((arr_65 [6U]) ? (((/* implicit */int) arr_65 [i_43])) : (((/* implicit */int) arr_65 [i_43])))));
        var_107 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)32743)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (_Bool)0))))));
        var_108 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_102 [i_43] [i_43] [i_43] [i_43] [i_43] [i_43]))) + ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (max((((/* implicit */unsigned long long int) (signed char)73)), (var_0)))))));
        var_109 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-14)) - (((/* implicit */int) (signed char)120))));
    }
}
