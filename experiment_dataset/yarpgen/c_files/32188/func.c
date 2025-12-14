/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32188
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
    var_14 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_11))) : (((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) 156147393U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4011334737U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))) * (2195337934U))))));
    var_15 *= var_4;
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned char) var_2);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0 + 2])), (var_0)))) ? (var_0) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~((~(arr_4 [i_1])))))) * (min((((arr_1 [i_1] [i_1 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_0 [i_1] [i_1 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-115)))))))));
        var_17 = ((/* implicit */signed char) (unsigned short)38937);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 3) 
        {
            arr_10 [(signed char)3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)114)) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) arr_9 [(signed char)3] [(signed char)3] [i_2]))))));
            var_18 *= (~(((((/* implicit */_Bool) 0ULL)) ? (arr_4 [7U]) : (1363280556U))));
        }
        arr_11 [8ULL] = ((/* implicit */unsigned int) min(((signed char)96), ((signed char)-115)));
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)115)), (8991447388906749634LL)));
                        arr_19 [i_1] [i_3 - 1] [i_4] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_3 - 1] [i_3] [i_5]))) : (var_0)))) && (((/* implicit */_Bool) (signed char)-28)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
        {
            arr_25 [i_6] [i_7 + 1] [i_6] = ((((arr_3 [6U]) ? (17975773006592166360ULL) : (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_23 [i_7] [i_6]))))) >> ((((~(((/* implicit */int) max(((signed char)-38), (((/* implicit */signed char) arr_1 [i_6] [i_7]))))))) + (37))));
            arr_26 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_13);
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_8 + 1] [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) arr_9 [i_8 + 1] [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) arr_9 [i_8 + 1] [i_8 + 1] [i_8 + 1])))))));
            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
            /* LoopSeq 4 */
            for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 4; i_10 < 6; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (signed char)-69))))));
                            arr_38 [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_8] [i_8] [i_6] [i_10 - 4]))));
                            var_23 = ((/* implicit */long long int) 2962109817U);
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -5676040551180405578LL)))) : (var_11)));
                /* LoopSeq 4 */
                for (signed char i_12 = 4; i_12 < 9; i_12 += 3) 
                {
                    arr_42 [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_6] [i_12])))))) ? (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24)))));
                    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-92))));
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned short) arr_40 [i_6] [i_12 - 4]));
                }
                for (unsigned int i_13 = 4; i_13 < 9; i_13 += 3) 
                {
                    arr_47 [i_6] [i_8] [i_6] [i_13] = ((/* implicit */long long int) var_7);
                    var_27 = ((/* implicit */unsigned long long int) var_4);
                }
                for (int i_14 = 3; i_14 < 8; i_14 += 1) 
                {
                    arr_50 [i_6] [i_6] [i_8] [i_8] [i_6] [i_14] = ((/* implicit */signed char) arr_45 [i_8 + 1] [i_8 + 1]);
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_6] [2U] [i_9] [7LL] [i_9])) ? (((/* implicit */unsigned int) 1555324438)) : (var_4))));
                        arr_53 [i_6] [i_8] [i_9] [i_6] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1514045510)) ? (2403111580U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))))))));
                        var_29 *= ((/* implicit */_Bool) ((int) (signed char)-51));
                    }
                    for (unsigned int i_16 = 1; i_16 < 9; i_16 += 4) 
                    {
                        arr_57 [i_6] [(signed char)2] = ((/* implicit */signed char) arr_12 [i_6]);
                        var_30 = ((((var_12) & (((/* implicit */int) arr_31 [i_6] [i_8] [i_6] [i_14])))) > (((/* implicit */int) var_7)));
                        var_31 = ((/* implicit */unsigned int) arr_6 [i_8] [i_8]);
                    }
                    for (unsigned long long int i_17 = 3; i_17 < 7; i_17 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned short) var_4);
                        var_33 = ((/* implicit */unsigned int) arr_46 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_14 - 2] [i_17 + 3] [i_17 + 1]);
                        arr_61 [i_6] [1LL] [i_6] [i_14] [4LL] = arr_59 [i_6] [i_6] [i_9] [i_6] [i_17 - 2];
                        arr_62 [i_6] [i_8] [i_6] [i_14] [i_17] = ((((/* implicit */_Bool) 3462854866U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_8 + 1] [i_17 + 2]))));
                    }
                    arr_63 [i_6] [i_8] [2LL] [i_14] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-50))))) ? (((((/* implicit */_Bool) 3398963634U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((2848563359U) + (var_4))))));
                }
                for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    var_34 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
                    var_35 = ((/* implicit */unsigned char) arr_39 [i_6] [2LL] [i_8 + 1] [i_8]);
                    var_36 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                }
                /* LoopNest 2 */
                for (long long int i_19 = 2; i_19 < 9; i_19 += 4) 
                {
                    for (unsigned int i_20 = 1; i_20 < 8; i_20 += 4) 
                    {
                        {
                            arr_72 [i_6] = ((/* implicit */unsigned int) arr_27 [i_6]);
                            var_37 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) var_3))))));
                            arr_73 [i_6] [i_8] [i_9] [i_19 + 1] [i_20 + 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_19 - 2] [i_8]))));
                            arr_74 [8U] [(unsigned char)3] [i_6] [8U] [8U] = var_1;
                        }
                    } 
                } 
            }
            for (long long int i_21 = 0; i_21 < 10; i_21 += 1) 
            {
                var_38 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))) * (18446744073709551601ULL));
                /* LoopNest 2 */
                for (short i_22 = 2; i_22 < 7; i_22 += 4) 
                {
                    for (long long int i_23 = 1; i_23 < 9; i_23 += 4) 
                    {
                        {
                            arr_82 [i_22] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (arr_44 [i_23 - 1] [i_22 - 2] [i_21] [i_8 + 1])));
                            var_39 = ((/* implicit */signed char) var_1);
                            arr_83 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [i_22 + 2] [i_23 + 1] [i_8 + 1])) * (((/* implicit */int) arr_9 [i_8 + 1] [i_22 + 1] [i_23 - 1]))));
                        }
                    } 
                } 
                arr_84 [i_6] [i_8] [i_8 + 1] [i_6] = ((/* implicit */_Bool) var_0);
                var_40 = ((/* implicit */unsigned char) (~(3398963634U)));
                var_41 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)208))));
            }
            for (long long int i_24 = 0; i_24 < 10; i_24 += 3) 
            {
                arr_87 [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_71 [i_8] [i_8 + 1] [i_8 + 1]))) | (var_13)));
                var_42 = ((/* implicit */long long int) var_7);
            }
            for (signed char i_25 = 0; i_25 < 10; i_25 += 1) 
            {
                var_43 = ((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_6] [i_8] [i_25] [i_8 + 1])) != (((/* implicit */int) arr_37 [i_6] [i_6] [i_25] [i_8 + 1]))));
                arr_91 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) var_0);
                var_44 = ((/* implicit */unsigned char) ((arr_8 [i_8 + 1] [i_8 + 1]) * (((/* implicit */unsigned long long int) var_0))));
            }
            /* LoopNest 3 */
            for (long long int i_26 = 0; i_26 < 10; i_26 += 3) 
            {
                for (unsigned long long int i_27 = 1; i_27 < 6; i_27 += 1) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 1) 
                    {
                        {
                            arr_99 [i_6] [(unsigned char)6] [i_6] [i_6] [i_26] [i_27] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_96 [i_27 + 4] [i_8] [i_8 + 1]))) : (var_1)));
                            var_45 = ((/* implicit */signed char) (+(arr_60 [i_6] [i_6] [i_8 + 1] [i_26] [i_27 + 2] [i_6] [i_27 - 1])));
                        }
                    } 
                } 
            } 
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1612973167)) ? (((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_30 [i_6] [i_8 + 1])))) : (((((/* implicit */_Bool) var_13)) ? (694188175) : (var_12)))));
        }
        /* LoopNest 2 */
        for (long long int i_29 = 1; i_29 < 9; i_29 += 1) 
        {
            for (signed char i_30 = 1; i_30 < 9; i_30 += 1) 
            {
                {
                    var_47 = 10809150713150817767ULL;
                    arr_105 [i_6] [4ULL] [(unsigned char)9] = ((/* implicit */signed char) var_0);
                    var_48 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_95 [i_6] [0U] [i_30] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_95 [i_6] [i_29 + 1] [i_29 + 1] [i_6])))) / ((+(((/* implicit */int) var_10))))));
                    arr_106 [i_6] [i_6] [i_6] [i_6] = max((((/* implicit */long long int) var_9)), (((max((((/* implicit */long long int) var_4)), (var_2))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (short)-7415))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_31 = 2; i_31 < 20; i_31 += 4) 
    {
        arr_109 [i_31 - 1] [i_31] = ((/* implicit */unsigned long long int) ((arr_1 [i_31] [i_31]) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) arr_18 [i_31 - 2] [i_31 - 1] [i_31] [(short)6]))));
        /* LoopSeq 2 */
        for (unsigned char i_32 = 0; i_32 < 21; i_32 += 4) 
        {
            var_49 = ((long long int) (-(((/* implicit */int) (unsigned char)120))));
            /* LoopNest 3 */
            for (unsigned int i_33 = 4; i_33 < 19; i_33 += 2) 
            {
                for (unsigned int i_34 = 2; i_34 < 19; i_34 += 3) 
                {
                    for (unsigned long long int i_35 = 3; i_35 < 18; i_35 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_115 [i_31 - 2] [i_35 + 2] [i_34 - 2]))));
                            arr_119 [i_31] [i_32] [4U] [(unsigned char)18] [(signed char)1] = ((((((/* implicit */_Bool) arr_15 [i_32] [i_32])) && (((/* implicit */_Bool) -6785674988583194738LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((+(var_5))));
                        }
                    } 
                } 
            } 
            arr_120 [i_31] [i_31] [i_32] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 21ULL)) ? (-1612973165) : (((/* implicit */int) (signed char)-19)))));
            /* LoopNest 2 */
            for (unsigned int i_36 = 1; i_36 < 19; i_36 += 2) 
            {
                for (unsigned long long int i_37 = 0; i_37 < 21; i_37 += 4) 
                {
                    {
                        var_51 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_117 [i_31 - 2] [i_36 + 2] [i_36] [i_36 + 1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)122)))))));
                        arr_127 [i_31] [(_Bool)1] [i_36] [i_36] [i_31] [i_32] = var_9;
                    }
                } 
            } 
        }
        for (signed char i_38 = 1; i_38 < 20; i_38 += 3) 
        {
            var_52 = ((signed char) 900916591236588645ULL);
            arr_130 [i_31] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_110 [i_31 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_116 [i_31 - 1] [i_31] [i_31] [i_38] [i_38])))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_108 [i_38])) : (2ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_39 = 3; i_39 < 20; i_39 += 3) 
        {
            arr_133 [i_39] [i_39] [i_31] = ((/* implicit */long long int) 11135299575030006929ULL);
            /* LoopSeq 1 */
            for (short i_40 = 0; i_40 < 21; i_40 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_41 = 2; i_41 < 19; i_41 += 1) 
                {
                    arr_140 [i_41] [i_40] [i_39] [i_39] [i_31 - 2] [(unsigned short)7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_124 [i_39 - 1] [i_31 + 1]))));
                    var_53 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                    /* LoopSeq 1 */
                    for (long long int i_42 = 3; i_42 < 20; i_42 += 1) 
                    {
                        var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-40)) || (((var_1) == (var_0)))));
                        arr_144 [i_39] [i_39 - 1] [i_40] [i_41 + 2] [i_42] [i_42] = ((/* implicit */long long int) var_7);
                        arr_145 [i_31] [i_39 - 3] [9ULL] [i_40] [i_41] [i_39] = ((/* implicit */signed char) ((arr_135 [i_39] [i_39] [i_39 - 3] [(unsigned char)7]) >> (((arr_135 [3U] [i_39 - 2] [i_39 - 3] [i_39 - 2]) - (14434041543672427056ULL)))));
                        var_55 = ((/* implicit */unsigned char) var_5);
                    }
                    arr_146 [(signed char)10] [i_39] [i_39] [i_40] |= arr_9 [i_31] [i_39] [i_40];
                }
                var_56 = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_31 + 1]))));
                var_57 = (!(((/* implicit */_Bool) 9258014026505967490ULL)));
                var_58 += ((/* implicit */unsigned char) arr_126 [i_31 + 1] [i_31 - 2] [i_39 - 2] [i_39 + 1]);
                var_59 = (signed char)34;
            }
            var_60 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_142 [i_31 - 2] [i_31] [(signed char)6]))) == (((/* implicit */long long int) var_0))));
            arr_147 [i_39] = ((/* implicit */long long int) arr_13 [i_31] [i_39]);
        }
        for (short i_43 = 0; i_43 < 21; i_43 += 1) 
        {
            arr_150 [i_31] [i_43] [i_31 - 2] = ((/* implicit */unsigned char) arr_123 [i_31 - 2] [i_31 - 1]);
            arr_151 [i_43] = ((/* implicit */unsigned long long int) var_9);
            /* LoopSeq 1 */
            for (int i_44 = 2; i_44 < 20; i_44 += 1) 
            {
                var_61 = ((/* implicit */long long int) ((((/* implicit */int) ((2951306227130808268ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_124 [i_31] [i_43])))))) << (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-4413203310493226341LL))) + (4413203310493226357LL)))));
                var_62 *= ((/* implicit */signed char) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_131 [i_31 - 1] [i_31 - 2] [i_44 - 2])))));
                /* LoopSeq 3 */
                for (unsigned long long int i_45 = 1; i_45 < 19; i_45 += 1) 
                {
                    arr_157 [i_43] [i_44] [i_43] [i_43] = ((/* implicit */signed char) var_5);
                    arr_158 [i_43] [(_Bool)1] [i_43] [i_45 - 1] [i_45] = ((/* implicit */_Bool) ((long long int) -1612973168));
                    var_63 = ((/* implicit */unsigned char) 0);
                }
                for (_Bool i_46 = 0; i_46 < 1; i_46 += 1) 
                {
                    arr_163 [i_46] [i_43] [i_43] [i_43] [i_31] = ((/* implicit */unsigned char) var_12);
                    var_64 = ((/* implicit */signed char) (+((+(var_12)))));
                }
                for (_Bool i_47 = 0; i_47 < 1; i_47 += 1) 
                {
                    var_65 = ((/* implicit */_Bool) arr_113 [5U] [i_47] [2U] [i_44 - 1]);
                    /* LoopSeq 3 */
                    for (unsigned int i_48 = 2; i_48 < 17; i_48 += 1) 
                    {
                        arr_169 [i_43] [i_44] [i_43] = ((/* implicit */_Bool) (+(var_8)));
                        var_66 -= ((/* implicit */long long int) arr_7 [i_43] [i_47]);
                    }
                    for (unsigned short i_49 = 2; i_49 < 20; i_49 += 3) 
                    {
                        var_67 = ((((/* implicit */int) arr_116 [9U] [i_31 + 1] [i_44 - 2] [i_49 - 2] [i_31 + 1])) - (var_12));
                        arr_172 [i_49] [i_47] [i_43] [i_43] [i_43] [i_31 - 2] = (unsigned char)136;
                        arr_173 [i_43] [(_Bool)1] [i_44] [i_44] [i_44] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_31 - 2] [i_44 + 1]))));
                        var_68 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_160 [10LL])))));
                        arr_174 [i_31] [i_43] [i_43] [i_43] [i_49] [i_49] = ((/* implicit */unsigned long long int) arr_124 [i_47] [i_49]);
                    }
                    for (unsigned int i_50 = 1; i_50 < 19; i_50 += 3) 
                    {
                        arr_178 [i_31] [i_31] [i_43] [i_47] [(unsigned char)18] = ((/* implicit */long long int) arr_1 [i_44 - 2] [8U]);
                        arr_179 [i_43] [i_43] [(signed char)13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    }
                }
            }
        }
    }
}
