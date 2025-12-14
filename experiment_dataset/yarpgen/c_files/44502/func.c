/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44502
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
    var_12 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)11112))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-11095)) || (((/* implicit */_Bool) 13514608740707571479ULL)))))) : (max((((/* implicit */unsigned long long int) 523802792105888180LL)), (13514608740707571457ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 1; i_2 < 9; i_2 += 4) /* same iter space */
            {
                arr_8 [(unsigned short)1] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-27))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 7; i_3 += 2) 
                {
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [8ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))) % (13514608740707571466ULL)));
                            var_13 *= ((/* implicit */long long int) ((arr_14 [(signed char)2] [(signed char)2] [i_1] [(signed char)2] [i_1 - 1] [i_1 + 1]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182)))));
                            arr_16 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-11113))));
                            arr_17 [i_0] [i_0] = ((/* implicit */long long int) ((arr_3 [i_0] [i_2 + 1] [i_1 + 1]) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
            }
            for (long long int i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
            {
                arr_21 [i_5] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-115))));
                arr_22 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((unsigned int) 996889867U)) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                arr_23 [i_0] [i_1] [(unsigned short)6] = ((/* implicit */int) ((((/* implicit */_Bool) 1590734362)) ? (-1418997830287756937LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241)))));
            }
            for (long long int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
            {
                arr_27 [i_0] [i_0] [i_6 - 1] = ((/* implicit */signed char) arr_13 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_1]);
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_2))));
                arr_28 [i_0] [i_1] [i_0] [i_0] = var_3;
            }
            /* LoopNest 2 */
            for (unsigned short i_7 = 2; i_7 < 7; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 1; i_9 < 7; i_9 += 3) 
                        {
                            var_15 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [9LL]))) > (((((/* implicit */_Bool) (signed char)117)) ? (3298077429U) : (1415586907U)))));
                            var_16 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 13514608740707571479ULL)) ? (((/* implicit */int) (short)-17351)) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (short)-31232))));
                            arr_38 [i_0] [i_0] [(signed char)9] [i_0] [(signed char)9] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (arr_35 [i_1 - 1] [i_0] [i_7 + 2] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_6 [4LL] [4LL] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) | (((unsigned long long int) (unsigned char)75))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            arr_41 [i_7 + 1] [i_7 + 1] [i_0] [i_8] [i_0] = ((/* implicit */signed char) -1808420436);
                            arr_42 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11113)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_24 [i_7 + 1] [i_0] [i_7] [(signed char)8]))));
                            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_7 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7 - 2] [i_7 - 2]))) : ((-(arr_36 [i_0] [i_0] [i_7] [i_7] [i_7])))));
                            arr_43 [i_0] [i_0] [i_1] [i_0] [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_6)) ^ (arr_3 [i_7 - 1] [(signed char)0] [i_7])));
                        }
                        /* LoopSeq 1 */
                        for (short i_11 = 1; i_11 < 8; i_11 += 1) 
                        {
                            var_19 = ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_10 [i_1 + 1] [i_7 + 2] [i_0] [i_11 + 1])));
                            var_20 += var_10;
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 2; i_12 < 9; i_12 += 3) 
        {
            arr_50 [i_0] = ((/* implicit */signed char) arr_29 [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_14 = 1; i_14 < 9; i_14 += 2) 
                {
                    arr_56 [i_0] [i_0] [i_14] [i_14 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)11112)) ? (((/* implicit */unsigned long long int) 1859905659285121889LL)) : (2181855888703250994ULL)));
                    arr_57 [i_0] [i_14 + 1] [i_13] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_14 - 1] [i_0] [i_12 - 1]))));
                }
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    for (unsigned short i_16 = 1; i_16 < 8; i_16 += 1) 
                    {
                        {
                            var_21 = var_5;
                            arr_63 [(unsigned char)0] [(unsigned char)0] [i_13] [i_0] [i_16] = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_12 - 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 9; i_18 += 2) 
                    {
                        {
                            var_22 += ((/* implicit */signed char) ((long long int) 3329645178U));
                            var_23 = ((((/* implicit */_Bool) arr_30 [i_12 - 1] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_30 [i_12 - 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_30 [i_12 - 1] [i_0] [i_0] [i_0])));
                            arr_69 [i_0] [i_0] [i_17] [i_17] [i_0] [i_17] = ((((/* implicit */_Bool) arr_52 [(short)8] [i_0] [(unsigned char)4] [i_0])) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (unsigned char)112)));
                        }
                    } 
                } 
                arr_70 [i_0] [i_12] = ((/* implicit */signed char) ((unsigned int) arr_14 [i_12 + 1] [i_12 - 1] [i_12] [i_12] [i_12] [i_12]));
                /* LoopNest 2 */
                for (short i_19 = 4; i_19 < 9; i_19 += 4) 
                {
                    for (unsigned char i_20 = 1; i_20 < 7; i_20 += 2) 
                    {
                        {
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-11112)) ? (((((/* implicit */_Bool) 1249141372U)) ? (-4478043636126444884LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)8] [(unsigned char)8] [i_13] [i_13] [(unsigned char)8]))))) : (arr_58 [i_19])));
                            arr_75 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                            arr_76 [i_0] [i_0] [i_13] [i_19 - 3] [i_20] = ((/* implicit */unsigned char) arr_49 [i_0]);
                        }
                    } 
                } 
            }
        }
        var_25 ^= ((/* implicit */long long int) ((unsigned long long int) (signed char)-2));
    }
    for (unsigned char i_21 = 2; i_21 < 23; i_21 += 3) 
    {
        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-2219))));
        arr_80 [i_21 - 1] [i_21] = (short)11114;
        arr_81 [i_21] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
        arr_82 [i_21] = ((/* implicit */unsigned short) arr_77 [i_21 - 2] [i_21]);
    }
    var_27 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-27)) * (((/* implicit */int) (short)-16353))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_22 = 0; i_22 < 12; i_22 += 2) 
    {
        arr_85 [i_22] = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)107)))) >= (533522575)));
        /* LoopSeq 1 */
        for (signed char i_23 = 0; i_23 < 12; i_23 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_9))));
            arr_88 [i_23] [i_22] [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
            arr_89 [i_22] [i_22] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_79 [i_22]))));
        }
        /* LoopNest 3 */
        for (long long int i_24 = 3; i_24 < 11; i_24 += 4) 
        {
            for (signed char i_25 = 0; i_25 < 12; i_25 += 1) 
            {
                for (unsigned int i_26 = 3; i_26 < 11; i_26 += 4) 
                {
                    {
                        arr_99 [i_26] [i_26] [i_22] [i_22] [i_22] = arr_93 [i_26] [i_25] [i_24];
                        /* LoopSeq 3 */
                        for (int i_27 = 0; i_27 < 12; i_27 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) var_6);
                            var_30 ^= ((/* implicit */unsigned char) (signed char)-105);
                            arr_102 [i_24 + 1] [i_25] [1] = ((/* implicit */unsigned char) ((signed char) 8246205920944227384ULL));
                        }
                        for (int i_28 = 0; i_28 < 12; i_28 += 4) /* same iter space */
                        {
                            var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_100 [i_28] [i_22] [i_22] [i_22]))) < ((~(var_0)))));
                            var_32 = ((/* implicit */unsigned int) 16482569781417165092ULL);
                            arr_106 [i_22] [i_24] [i_25] [i_25] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (short)-24620))) ? (((/* implicit */int) arr_83 [i_24])) : (((/* implicit */int) arr_92 [i_24]))));
                            arr_107 [i_22] [i_22] [i_22] [i_25] [i_26] [(unsigned short)10] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_83 [i_24 + 1]))));
                            arr_108 [i_22] [i_22] [i_25] [i_28] [i_28] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) (short)-11111)))));
                        }
                        for (int i_29 = 0; i_29 < 12; i_29 += 4) /* same iter space */
                        {
                            arr_111 [i_22] [i_24] [(unsigned short)7] [i_26] = (((-(arr_94 [i_24] [i_25] [i_24] [i_22]))) << (((((/* implicit */int) var_4)) - (15419))));
                            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(-274506342))))));
                        }
                        var_34 += ((/* implicit */unsigned long long int) var_1);
                        arr_112 [i_22] [i_22] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_101 [i_26 - 3] [i_24 + 1]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_30 = 0; i_30 < 24; i_30 += 1) 
    {
        for (int i_31 = 0; i_31 < 24; i_31 += 4) 
        {
            for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
            {
                {
                    arr_121 [i_30] [i_30] [i_30] [i_30] = ((/* implicit */long long int) max((((/* implicit */short) var_11)), (min(((short)17345), (((/* implicit */short) var_2))))));
                    /* LoopSeq 2 */
                    for (signed char i_33 = 1; i_33 < 20; i_33 += 3) 
                    {
                        arr_124 [i_30] [i_33 + 1] [i_30] [i_31] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)20661)) < (((/* implicit */int) (short)31231))));
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) arr_120 [i_30] [i_31] [i_32]))));
                        arr_125 [i_30] [i_31] [i_32] [12] [i_30] = ((/* implicit */unsigned char) var_9);
                    }
                    /* vectorizable */
                    for (signed char i_34 = 0; i_34 < 24; i_34 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_35 = 3; i_35 < 20; i_35 += 2) 
                        {
                            var_36 += ((/* implicit */long long int) -1642906174);
                            var_37 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_77 [i_34] [i_34]))));
                        }
                        for (unsigned short i_36 = 0; i_36 < 24; i_36 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_127 [i_34] [i_32 - 1] [i_34] [i_34])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))))));
                            var_39 += ((/* implicit */signed char) ((unsigned short) (signed char)53));
                            arr_135 [i_30] [i_31] [(unsigned char)0] [i_30] [(unsigned char)0] = 274506341;
                            var_40 ^= ((/* implicit */int) ((short) (-(arr_114 [i_30]))));
                        }
                        arr_136 [2] [2] [i_30] [i_30] [i_30] [i_30] = ((/* implicit */signed char) ((_Bool) (short)-31232));
                    }
                    var_41 -= ((/* implicit */signed char) var_3);
                    /* LoopSeq 1 */
                    for (short i_37 = 0; i_37 < 24; i_37 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_38 = 1; i_38 < 21; i_38 += 4) 
                        {
                            var_42 = (short)-24620;
                            arr_142 [i_31] [i_31] [i_32] [i_37] [i_30] [i_31] [13] = ((/* implicit */unsigned short) min(((~(-1979289786))), ((+(((/* implicit */int) var_11))))));
                            arr_143 [i_30] [i_30] [i_30] [i_31] [i_30] [i_37] [i_38 + 3] = ((/* implicit */long long int) (-(-1452774436)));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                        {
                            arr_148 [i_30] [i_31] [(unsigned char)12] [i_37] [i_39] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31228))) : ((~(arr_117 [i_30] [i_37] [i_30])))));
                            var_43 += ((/* implicit */short) ((((/* implicit */_Bool) -290801490)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31239))) : (16787136584038951789ULL)));
                            var_44 += ((/* implicit */signed char) (-(((/* implicit */int) arr_144 [i_30]))));
                        }
                        /* vectorizable */
                        for (long long int i_40 = 2; i_40 < 22; i_40 += 4) /* same iter space */
                        {
                            arr_151 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30] [i_30] = ((/* implicit */unsigned int) ((long long int) ((int) arr_128 [i_30] [i_30] [i_30] [i_30] [i_30])));
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-24622)) / (var_6)))) ? (((/* implicit */int) arr_126 [i_30] [i_30] [i_30] [i_30])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-24620)) || (((/* implicit */_Bool) var_2)))))));
                        }
                        /* vectorizable */
                        for (long long int i_41 = 2; i_41 < 22; i_41 += 4) /* same iter space */
                        {
                            arr_154 [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) arr_77 [i_32 - 1] [i_41 + 1])) ? (var_6) : (((/* implicit */int) (short)31231))));
                            arr_155 [i_30] [i_30] [i_32] [i_37] [i_41 - 2] = ((/* implicit */unsigned long long int) arr_118 [i_31] [i_32] [i_41]);
                            arr_156 [i_41] [i_30] [i_30] [i_30] [i_30] [i_30] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                        }
                        /* LoopSeq 1 */
                        for (short i_42 = 2; i_42 < 23; i_42 += 3) 
                        {
                            arr_159 [i_30] [i_30] [i_32] [i_31] [i_30] = min((((/* implicit */unsigned short) var_8)), ((unsigned short)41503));
                            var_46 ^= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)45))));
                            var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) max(((signed char)-105), ((signed char)-117)))) : ((+(((/* implicit */int) arr_147 [i_30] [i_30] [6LL] [i_30] [i_30]))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)11112)), ((unsigned short)12275)))) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_147 [i_30] [i_32 - 1] [i_32] [i_30] [22ULL])))))));
                        }
                        arr_160 [i_30] [i_31] [i_30] [i_31] = ((/* implicit */long long int) arr_119 [i_37] [(signed char)0] [i_31] [i_30]);
                    }
                    var_48 *= ((/* implicit */signed char) ((unsigned long long int) (unsigned short)8644));
                }
            } 
        } 
    } 
}
