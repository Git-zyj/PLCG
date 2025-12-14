/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34046
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
    var_10 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                            {
                                var_11 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_3] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3])) : (((/* implicit */int) var_5))));
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (unsigned short)0))));
                                var_13 = (!(((/* implicit */_Bool) (unsigned short)65535)));
                                arr_17 [i_0] [14] [i_2] [i_2 + 1] [i_1] [i_4] = ((/* implicit */signed char) ((unsigned char) var_9));
                            }
                            for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                            {
                                var_14 = ((_Bool) (!(((/* implicit */_Bool) min(((unsigned short)65535), ((unsigned short)24))))));
                                var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_2] [5U])) : (((/* implicit */int) (unsigned short)30)))), ((~(((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_1] [i_3]))))));
                                arr_21 [i_0] [i_1] [i_2 + 1] [i_1] [3] = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) var_0))), ((-(((/* implicit */int) (unsigned char)49))))));
                            }
                            arr_22 [i_2] [i_1] = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
                arr_23 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) max(((unsigned short)20), (((/* implicit */unsigned short) (signed char)-3))))) << (((((/* implicit */int) var_8)) - (44727))))) >> (((/* implicit */int) ((short) ((((/* implicit */_Bool) 29U)) && (((/* implicit */_Bool) -2119137262))))))));
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_28 [i_0] [i_1] [i_6] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_1] [i_0]);
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (max((((/* implicit */unsigned int) var_8)), (max((((/* implicit */unsigned int) (_Bool)1)), (var_6)))))));
                    var_17 = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)135)), ((unsigned short)6121))))) * (max((((/* implicit */unsigned int) arr_10 [i_0] [2U] [i_6] [i_0] [i_1])), (107459313U))))), (((/* implicit */unsigned int) (unsigned short)0))));
                }
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) (unsigned short)52427)), (min((-1776596194235586429LL), (((/* implicit */long long int) var_5))))))));
                                arr_38 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))), ((+(((/* implicit */int) var_1))))));
                                var_19 = ((/* implicit */unsigned short) ((signed char) var_8));
                                arr_39 [i_0] [7U] [i_1] [7U] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_9] [i_0])) >> ((((+(((/* implicit */int) (unsigned short)59415)))) - (59390)))));
                            }
                        } 
                    } 
                    arr_40 [i_1] [i_1] [(signed char)1] [i_7] = ((/* implicit */signed char) var_3);
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_45 [i_0] [i_1] [i_7] [i_10] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */long long int) var_7)), (arr_34 [i_0] [i_0] [i_10] [i_10 + 1] [i_10 + 1]))));
                        var_20 += ((/* implicit */unsigned int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))) | (((/* implicit */int) arr_6 [i_1] [i_0]))));
                        var_21 = ((/* implicit */unsigned long long int) 405451162);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_48 [i_11] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_5)))));
                        arr_49 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) (-(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_4)))))));
                        arr_50 [(unsigned short)9] [i_1] [(signed char)11] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_1]))) < (((unsigned int) var_9))))) > (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) arr_29 [i_11])))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_53 [i_0] [i_0] [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)65505)))))) << (((/* implicit */int) ((var_9) && (((/* implicit */_Bool) 0U)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            arr_56 [(unsigned char)13] [i_1] [i_12] [i_13] = ((/* implicit */unsigned int) max(((unsigned short)59383), ((unsigned short)59379)));
                            arr_57 [i_1] [i_1] = ((((/* implicit */_Bool) max((((unsigned char) (unsigned char)35)), (((unsigned char) var_4))))) || (((/* implicit */_Bool) ((unsigned long long int) -1504162833))));
                            arr_58 [i_1] [i_12] [i_7] [i_7] [i_7] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_13] [(unsigned short)14] [i_7] [i_1] [(unsigned short)2] [i_0])))))));
                            var_22 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)-3))))));
                            arr_59 [14LL] [i_0] [14LL] [i_1] [i_1] [i_12] [(unsigned char)3] = ((/* implicit */unsigned short) (unsigned char)0);
                        }
                        arr_60 [i_1] [i_7] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((min(((_Bool)0), ((_Bool)1))), (((_Bool) 4294967265U))));
                        var_23 ^= ((/* implicit */short) max(((-(((long long int) arr_18 [i_7] [(unsigned char)4] [(unsigned short)10] [(unsigned short)10] [i_7])))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)0)))))));
                    }
                }
                for (unsigned char i_14 = 2; i_14 < 14; i_14 += 1) 
                {
                    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != ((-(((/* implicit */int) (short)32517)))))))));
                    var_25 = ((/* implicit */int) (unsigned short)65535);
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        var_26 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)0)), (var_8)))), ((-(7U)))));
                        arr_67 [i_1] [i_1] [13U] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_6))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))) ^ ((~(7U)))));
                    }
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (unsigned short)26896)) : (((/* implicit */int) arr_3 [i_14 - 2] [i_16]))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16083)) || ((_Bool)1)))) | (((/* implicit */int) var_5)))))));
                    }
                    var_29 *= ((/* implicit */unsigned long long int) max((var_5), (((((/* implicit */_Bool) 47U)) || (((/* implicit */_Bool) (signed char)84))))));
                }
                for (unsigned int i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)31))));
                    arr_73 [i_1] [8U] [i_1] [i_1] = min((arr_19 [(unsigned char)11] [i_0] [i_0] [(_Bool)1] [i_0] [(unsigned char)11]), (((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45478))) < (var_6))), (((((/* implicit */_Bool) (unsigned short)19501)) || (((/* implicit */_Bool) var_4))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 15; i_18 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned int) (-(max((0), (((/* implicit */int) (unsigned short)19986))))));
                            arr_79 [i_0] [i_1] [i_1] [i_17] [i_17] [i_18] [i_1] = ((/* implicit */signed char) (+(((unsigned int) -12))));
                            arr_80 [(_Bool)1] [i_1] [i_17] [i_1] &= ((/* implicit */unsigned long long int) (unsigned short)10661);
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_85 [i_0] [i_1] [i_1] [i_18] [4U] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_71 [i_0]), (arr_71 [i_1])))) - (((((((/* implicit */int) arr_71 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_71 [i_0])) + (39))) - (30)))))));
                            arr_86 [i_0] [i_1] [i_17] [i_1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [0U])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))));
                            arr_87 [i_0] [i_17] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)24550), (((/* implicit */unsigned short) (signed char)-32))))) * ((-(((/* implicit */int) (signed char)-31))))));
                        }
                        /* vectorizable */
                        for (signed char i_21 = 1; i_21 < 13; i_21 += 3) 
                        {
                            arr_92 [i_0] [i_1] [i_1] [i_18] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) var_5)))));
                            arr_93 [i_1] [i_1] [i_1] [i_21 + 1] = ((/* implicit */long long int) (unsigned char)0);
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_75 [i_0]))));
                        }
                        arr_94 [i_18] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_33 [i_18] [i_1] [i_1] [i_0])))) ? ((-(((/* implicit */int) (unsigned char)150)))) : (((/* implicit */int) (unsigned short)61215))))) > (((-16LL) & (((/* implicit */long long int) ((/* implicit */int) max((var_2), (var_2)))))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_22 = 0; i_22 < 18; i_22 += 1) 
    {
        for (int i_23 = 4; i_23 < 14; i_23 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 1) 
                {
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)6485)), (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (arr_97 [i_23])));
                    arr_101 [i_22] [i_23] [i_23] = ((/* implicit */unsigned short) ((15U) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)6485))))));
                    arr_102 [16ULL] [i_23] [i_22] [i_22] = ((/* implicit */int) ((((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)2)))))) <= (((/* implicit */int) min((var_7), ((unsigned short)19985))))));
                    var_34 = ((/* implicit */_Bool) var_8);
                }
                for (long long int i_25 = 0; i_25 < 18; i_25 += 4) 
                {
                    arr_105 [i_22] [8U] [i_22] = ((/* implicit */unsigned int) ((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 12)) ? (((/* implicit */int) (unsigned short)35771)) : (((/* implicit */int) (unsigned char)156)))))) > (((((/* implicit */int) (unsigned short)40024)) ^ (((/* implicit */int) (unsigned char)255))))));
                    arr_106 [i_25] [i_22] [i_22] = ((/* implicit */short) (unsigned short)25512);
                    var_35 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)129)) + (((/* implicit */int) (unsigned char)127))));
                }
                for (unsigned short i_26 = 0; i_26 < 18; i_26 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_27 = 0; i_27 < 18; i_27 += 3) 
                    {
                        for (unsigned short i_28 = 0; i_28 < 18; i_28 += 4) 
                        {
                            {
                                arr_114 [i_27] [i_27] [i_22] [i_27] = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57440)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))), (arr_103 [(unsigned short)7] [i_22] [i_22] [i_23]))));
                                var_36 = ((/* implicit */long long int) min((((/* implicit */int) max((max(((unsigned short)0), (arr_111 [i_22] [i_23] [i_26] [i_28]))), (((/* implicit */unsigned short) max(((unsigned char)129), (((/* implicit */unsigned char) (signed char)112)))))))), ((~(((/* implicit */int) arr_107 [i_28] [i_27]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_29 = 3; i_29 < 16; i_29 += 2) 
                    {
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                        {
                            {
                                arr_120 [i_22] [i_29] [i_26] [i_23] [i_22] = ((/* implicit */unsigned int) max(((~(1086592990911072324ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
                                arr_121 [i_22] [i_23] [i_22] [i_29] [(signed char)14] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(var_5))))));
                                arr_122 [i_22] [i_23] [i_26] [i_22] [i_23] = ((/* implicit */unsigned long long int) min(((((~(arr_103 [6U] [6U] [i_22] [i_22]))) >> (((((/* implicit */int) arr_98 [i_29 - 2] [i_29 - 2])) - (14439))))), (((/* implicit */unsigned int) (unsigned short)7843))));
                                arr_123 [i_22] [i_29] [i_22] = ((/* implicit */long long int) min((((/* implicit */int) var_8)), (((((/* implicit */int) var_0)) | ((-(((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    arr_124 [i_23 - 4] [i_23] [i_26] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (unsigned short)61215)))))) / (min((((/* implicit */unsigned int) var_1)), (4294967295U)))));
                }
                /* LoopSeq 3 */
                for (unsigned int i_31 = 0; i_31 < 18; i_31 += 1) 
                {
                    var_37 = var_5;
                    /* LoopNest 2 */
                    for (unsigned long long int i_32 = 3; i_32 < 17; i_32 += 3) 
                    {
                        for (signed char i_33 = 3; i_33 < 16; i_33 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44894)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (((((long long int) -857368277805312111LL)) | (((/* implicit */long long int) max((4286941542U), (((/* implicit */unsigned int) (unsigned short)35546))))))))))));
                                arr_132 [i_22] [i_22] [i_22] [i_32] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35551)))))))) || (((/* implicit */_Bool) arr_108 [i_31]))));
                                arr_133 [i_22] [i_23] [(unsigned short)10] [i_32 - 1] [i_22] = ((/* implicit */signed char) ((short) max((arr_107 [i_22] [i_33 + 1]), (arr_107 [i_23 + 1] [i_33 + 2]))));
                            }
                        } 
                    } 
                    arr_134 [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_4)))), (((/* implicit */int) var_0))))) || (((((/* implicit */int) var_2)) == ((+(((/* implicit */int) (unsigned short)40271))))))));
                }
                for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                {
                    arr_137 [i_22] = min((((/* implicit */unsigned short) (signed char)-39)), (max(((unsigned short)7889), (((/* implicit */unsigned short) (_Bool)0)))));
                    /* LoopNest 2 */
                    for (unsigned short i_35 = 2; i_35 < 16; i_35 += 1) 
                    {
                        for (unsigned short i_36 = 3; i_36 < 17; i_36 += 3) 
                        {
                            {
                                arr_143 [i_22] [i_22] [i_22] [i_22] [i_35] [17LL] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-13))));
                                arr_144 [i_22] [i_22] = ((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) <= ((~(arr_130 [i_22] [i_22]))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_37 = 3; i_37 < 17; i_37 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_38 = 0; i_38 < 18; i_38 += 3) 
                    {
                        arr_151 [i_22] [i_22] = ((/* implicit */signed char) var_0);
                        arr_152 [i_22] [i_22] [2LL] [i_37] [i_37] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)25512))));
                        arr_153 [(signed char)0] [i_22] [i_38] [i_22] [i_37] [i_22] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)40024)) - (((((/* implicit */int) ((unsigned short) var_9))) & ((~(((/* implicit */int) arr_95 [i_22]))))))));
                    }
                    var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) min((((/* implicit */int) max((arr_136 [i_22] [i_23 + 3] [i_37]), (((/* implicit */unsigned short) var_0))))), ((~(((/* implicit */int) (unsigned short)9876)))))))));
                    var_40 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                    arr_154 [i_22] [i_22] [i_22] = ((/* implicit */_Bool) ((((((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) : (1ULL))))) + (2147483647))) << (((max((((unsigned long long int) -13LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_0))))))) - (18446744073709551603ULL)))));
                    var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40023))));
                }
            }
        } 
    } 
}
