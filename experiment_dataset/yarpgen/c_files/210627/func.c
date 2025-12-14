/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210627
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (_Bool)0)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max(((signed char)3), (((/* implicit */signed char) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_1] [11ULL] [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_7)))))) ? ((+(((/* implicit */int) arr_5 [(signed char)11] [i_1 + 1] [i_0])))) : ((+((-(((/* implicit */int) (_Bool)0))))))));
                var_17 = ((/* implicit */signed char) var_15);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 -= ((unsigned char) ((((/* implicit */int) (signed char)-3)) & (((/* implicit */int) var_0))));
                                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_10) <= (var_1)))), ((-(((/* implicit */int) var_2))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)112), (((/* implicit */signed char) (_Bool)0)))))) | (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0 - 2] [i_0 - 1]) : (arr_14 [i_0 - 1] [i_1 + 2] [i_2] [i_3 + 1] [i_4])))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) ((long long int) (signed char)111));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned int i_6 = 1; i_6 < 6; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_7 [i_5] [i_6 + 2]))), ((+(((/* implicit */int) var_4))))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((arr_7 [i_5] [i_5]) % (((/* implicit */long long int) arr_8 [i_5] [(signed char)1] [i_6 + 2] [i_7]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (0ULL)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        arr_25 [(_Bool)1] [3U] [i_8] = ((/* implicit */unsigned long long int) ((signed char) arr_15 [0] [i_6] [5] [i_6] [i_6] [i_6]));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_8] [i_8] [i_7])) <= (((/* implicit */int) arr_5 [9] [9ULL] [i_7]))))) : (((/* implicit */int) var_6)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 2; i_10 < 8; i_10 += 1) 
                        {
                            arr_32 [i_5] [i_5] = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (4294967287U)))));
                            var_24 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (1390909130) : (((/* implicit */int) (unsigned char)242))))) : (((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_7])) ? (9007199254740991ULL) : (arr_29 [i_5] [i_6] [i_6 + 1] [i_6] [i_5] [i_9] [i_10])))));
                            arr_33 [i_5] [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_9 - 1] [(signed char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6 + 4] [i_9 - 1] [i_7]))) : (var_5)));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            arr_38 [i_5] [i_5] [0ULL] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -694439679)) ? (arr_8 [i_5] [3U] [i_5] [i_5]) : (((/* implicit */int) var_8))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_6] [i_7]))) | (arr_14 [i_5] [i_5] [i_5] [i_5] [(_Bool)1])))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25574)) * (((/* implicit */int) arr_18 [i_6 + 1] [i_6 + 1] [i_6 + 1])))))));
                            arr_39 [i_5] [i_6] [i_7] [i_7] [i_9] [i_11] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_7)) >> (((1089588372U) - (1089588361U))))));
                            var_26 *= ((/* implicit */short) arr_31 [i_6 - 1] [i_6] [i_6] [i_6 + 4] [i_6 + 4]);
                            var_27 *= ((/* implicit */_Bool) var_1);
                        }
                    }
                    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_14) >= (arr_26 [i_6 + 1] [i_6 + 2]))))));
                        var_29 = ((/* implicit */short) var_11);
                        var_30 |= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((var_14) <= (((/* implicit */unsigned int) -345653199)))) ? ((-(1U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_22 [1LL] [i_6] [i_7]))))))))), ((-(((long long int) -694439680))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_45 [i_13] = ((/* implicit */short) (unsigned short)20486);
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 19; i_16 += 1) 
                    {
                        arr_53 [i_13] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) arr_46 [i_13] [i_13] [(signed char)1])) - (max((((/* implicit */int) arr_46 [i_13] [i_13] [i_16])), (arr_50 [i_15] [i_14] [i_15])))));
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 1; i_17 < 19; i_17 += 2) 
                        {
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (max((2114719018), (694439683))) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) ((unsigned char) var_3))))))));
                            var_33 = ((/* implicit */unsigned int) min((var_13), (arr_49 [(unsigned char)9] [(unsigned char)4] [i_15])));
                        }
                        for (unsigned short i_18 = 2; i_18 < 19; i_18 += 4) 
                        {
                            arr_60 [i_13] [i_14] [i_15] [i_15] [i_18] = ((/* implicit */signed char) max((10074452537951314669ULL), (((/* implicit */unsigned long long int) var_8))));
                            var_34 = ((/* implicit */_Bool) var_7);
                            arr_61 [i_15] = ((/* implicit */unsigned char) var_3);
                            var_35 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)64192)) | (2114718993)))))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_36 = ((((/* implicit */_Bool) ((long long int) arr_42 [i_13]))) ? (((/* implicit */long long int) -1390909130)) : (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_64 [i_13] [11U] [i_13] [(_Bool)1] [i_15]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (max((0LL), (((/* implicit */long long int) var_11)))))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)100)), ((unsigned char)238)))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_13] [i_14] [i_19]))))) | (((/* implicit */int) var_12)))))))));
                        }
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_15] [i_15] [(unsigned char)6])) ? (((/* implicit */int) var_7)) : (1104909673)))) % (var_15)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)95))))) : (arr_57 [i_15] [i_15] [i_14])));
                        var_39 = ((/* implicit */long long int) (short)-1);
                    }
                    var_40 ^= ((/* implicit */unsigned short) max((((/* implicit */int) ((-1104909666) <= (694439679)))), (((((/* implicit */_Bool) arr_62 [i_13] [i_14] [i_15] [i_15])) ? (((/* implicit */int) arr_59 [i_13] [i_14] [i_13] [(unsigned char)4] [i_13])) : (((/* implicit */int) arr_59 [i_13] [i_14] [i_13] [(short)16] [(short)16]))))));
                    arr_67 [(unsigned short)14] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_6), (((/* implicit */short) arr_49 [(short)4] [i_14] [i_15]))))) ? (((((/* implicit */_Bool) 694439659)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))) : (min((-694439678), (((/* implicit */int) (signed char)-54)))))), (((((/* implicit */_Bool) arr_44 [8U])) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-99)), ((unsigned short)42525))))))));
                }
            } 
        } 
        arr_68 [i_13] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13] [i_13]))) - (arr_56 [i_13] [i_13])));
        var_41 = ((/* implicit */long long int) ((unsigned char) (+(-249392818))));
    }
    for (int i_21 = 0; i_21 < 20; i_21 += 1) 
    {
        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((long long int) (-(-1303605206)))))));
        /* LoopNest 2 */
        for (long long int i_22 = 3; i_22 < 17; i_22 += 2) 
        {
            for (unsigned short i_23 = 2; i_23 < 19; i_23 += 1) 
            {
                {
                    var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) arr_57 [(signed char)2] [i_22 - 1] [i_22]))));
                    var_44 = var_5;
                }
            } 
        } 
        var_45 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)49830)) >> (((1188355290916019020LL) - (1188355290916018996LL)))))));
    }
    for (unsigned int i_24 = 2; i_24 < 15; i_24 += 1) 
    {
        arr_79 [i_24] [9ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) min((((/* implicit */unsigned int) -1104909687)), (3716256414U)))))));
        /* LoopNest 3 */
        for (long long int i_25 = 0; i_25 < 17; i_25 += 3) 
        {
            for (signed char i_26 = 0; i_26 < 17; i_26 += 1) 
            {
                for (unsigned char i_27 = 0; i_27 < 17; i_27 += 2) 
                {
                    {
                        var_46 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (2402435384U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) >= (3529826874U))))))));
                        var_47 |= max((((/* implicit */int) arr_72 [i_27])), ((((_Bool)1) ? (((/* implicit */int) max(((short)-20039), (((/* implicit */short) (unsigned char)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_83 [i_24 + 2] [i_25] [i_26]))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_28 = 2; i_28 < 13; i_28 += 1) 
        {
            arr_88 [i_28] = ((/* implicit */unsigned long long int) min(((short)-20039), (((/* implicit */short) (_Bool)1))));
            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) 1LL))));
            var_49 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_78 [i_24] [i_24])) - (((/* implicit */int) ((_Bool) var_9))))), (((/* implicit */int) (unsigned char)62))));
            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_74 [i_28])) ^ (arr_84 [i_24 + 1] [i_28 + 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) >= (var_5)))) >= (min((arr_51 [i_24 - 1] [i_24 - 1] [(unsigned short)16] [i_28]), (((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) -407135954680255121LL)) ? (max((var_15), (((/* implicit */unsigned long long int) 1044480)))) : (((/* implicit */unsigned long long int) -694439686))))));
        }
        for (int i_29 = 0; i_29 < 17; i_29 += 1) 
        {
            var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_77 [i_29]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-114))))) : (((((/* implicit */unsigned long long int) arr_51 [i_24] [i_24] [i_29] [14ULL])) / (((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
            var_52 = ((((/* implicit */_Bool) arr_77 [i_29])) ? (((/* implicit */long long int) ((/* implicit */int) ((694439669) != (((/* implicit */int) (unsigned char)255)))))) : (arr_90 [i_24] [(short)5] [i_29]));
            var_53 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned short) max((arr_62 [(unsigned short)16] [(signed char)4] [i_24] [i_24]), (((/* implicit */unsigned short) arr_86 [6ULL]))))))));
            /* LoopNest 2 */
            for (unsigned char i_30 = 0; i_30 < 17; i_30 += 1) 
            {
                for (int i_31 = 0; i_31 < 17; i_31 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_32 = 4; i_32 < 16; i_32 += 2) /* same iter space */
                        {
                            var_54 = ((/* implicit */unsigned int) min((var_54), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_73 [i_24] [i_29] [i_30])) : (((/* implicit */int) arr_54 [i_24] [i_24] [i_32] [i_32]))))) ? (((/* implicit */int) arr_75 [i_32])) : (((/* implicit */int) arr_54 [i_24 + 1] [i_24] [i_32] [i_32 - 1]))))) ? (min((((/* implicit */unsigned int) -2147483647)), (3029478842U))) : ((+(min((((/* implicit */unsigned int) arr_46 [i_24] [i_29] [i_31])), (4U)))))))));
                            var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57911)) || (((/* implicit */_Bool) (unsigned char)0))));
                            arr_99 [i_29] [i_30] [i_31] [i_29] = ((/* implicit */unsigned short) (unsigned char)63);
                            arr_100 [9ULL] [i_30] [i_30] [9] [i_24] = ((/* implicit */long long int) var_13);
                        }
                        for (unsigned int i_33 = 4; i_33 < 16; i_33 += 2) /* same iter space */
                        {
                            var_56 -= ((/* implicit */unsigned short) var_6);
                            var_57 = ((/* implicit */signed char) var_8);
                        }
                        for (unsigned short i_34 = 1; i_34 < 15; i_34 += 4) 
                        {
                            var_58 = ((/* implicit */int) (+(min((16613125022050725517ULL), (((/* implicit */unsigned long long int) (unsigned char)194))))));
                            arr_107 [i_29] [i_30] [i_31] [i_34] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((long long int) -2147483642))) || (((/* implicit */_Bool) arr_92 [i_24] [i_31] [i_24])))) ? (((unsigned long long int) ((unsigned long long int) arr_98 [i_24 + 1] [(short)15] [i_30] [i_31] [i_34 + 2]))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)238)) || (((/* implicit */_Bool) (signed char)-51))))))));
                        }
                        arr_108 [i_24] = (~((((_Bool)1) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) 8191U)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
        {
            var_59 = ((/* implicit */unsigned long long int) ((signed char) arr_78 [i_35] [i_24 + 2]));
            /* LoopSeq 1 */
            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_37 = 2; i_37 < 15; i_37 += 1) 
                {
                    for (unsigned char i_38 = 1; i_38 < 16; i_38 += 1) 
                    {
                        {
                            var_60 = ((/* implicit */unsigned short) max((var_60), (((/* implicit */unsigned short) arr_51 [(short)4] [i_35] [i_35] [(_Bool)1]))));
                            var_61 = ((/* implicit */unsigned short) min((var_61), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_8))) && (((/* implicit */_Bool) var_15)))))));
                            var_62 ^= ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
                var_63 |= arr_111 [i_24 - 2] [i_35] [i_35];
                var_64 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_114 [i_24 + 1] [i_35] [i_36])) : (((/* implicit */int) var_8))));
            }
            var_65 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_106 [(unsigned short)6]))))) ? (((/* implicit */int) ((signed char) (short)19467))) : (((((/* implicit */int) (_Bool)1)) / (arr_81 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6])))));
            var_66 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (short)-4))));
        }
        for (short i_39 = 0; i_39 < 17; i_39 += 1) 
        {
            var_67 = ((/* implicit */short) min((((/* implicit */int) (unsigned char)1)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_105 [i_24] [i_24] [i_24] [i_39] [(_Bool)1] [13ULL])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_103 [i_24] [i_24] [i_39] [0ULL])))))))));
            var_68 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (((((/* implicit */unsigned long long int) -12LL)) + (((13590720678340828525ULL) & (var_10))))));
        }
    }
    var_69 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)72)) : (617050026)))) ? (var_14) : (max((var_14), (((/* implicit */unsigned int) var_11))))))) ? (min((16147345486817527501ULL), (((/* implicit */unsigned long long int) (unsigned char)143)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_4), (var_4)))))))));
}
