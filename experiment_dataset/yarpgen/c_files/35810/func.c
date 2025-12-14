/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35810
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
    var_12 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))))), ((+(var_0))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) min((max((((/* implicit */unsigned int) (signed char)77)), (131008U))), (((/* implicit */unsigned int) (signed char)-78)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((+(min((((/* implicit */unsigned int) (signed char)-6)), (var_5))))) != (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
        var_13 = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) var_8)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 4; i_3 < 17; i_3 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) arr_1 [17U]))));
                    arr_12 [i_1] [i_1] [i_1] [16LL] = ((/* implicit */short) ((unsigned long long int) var_4));
                    var_15 = var_4;
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((short) (signed char)78)))));
                    var_17 = ((/* implicit */unsigned short) ((unsigned int) (short)3845));
                }
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_3))));
                    arr_15 [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) var_4)) >> (((5352792441910235247LL) - (5352792441910235221LL)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        arr_20 [(short)15] [i_1] [(short)15] = ((/* implicit */short) (!(((/* implicit */_Bool) 130999U))));
                        var_19 = ((/* implicit */unsigned long long int) 4294967295U);
                    }
                    for (unsigned int i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        arr_24 [i_1] [(unsigned char)1] [(_Bool)1] [i_2] [i_4] [i_1] [(unsigned char)1] = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_6 + 2] [i_1] [i_6 - 1]))));
                        arr_25 [i_1] [(unsigned short)9] [i_4] [8ULL] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) -5352792441910235258LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6 + 1] [i_6 - 1]))) : (0ULL)));
                    }
                    arr_26 [(short)16] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7] [i_1]))) : ((+(arr_19 [(signed char)1] [i_7] [i_0] [i_0] [i_0] [i_0])))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (var_3)));
                    arr_30 [i_1] = ((/* implicit */unsigned int) 7229163045727134085ULL);
                }
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    var_22 += ((/* implicit */unsigned long long int) ((arr_1 [i_0]) >> (((arr_23 [0ULL] [i_1] [i_2] [i_8] [i_8]) - (3473573468134656973ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [8U] [i_1] [i_1] [i_8] [(short)3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9] [i_1] [i_9] [i_8] [i_1] [i_8]))) : (((long long int) 12085746068618182211ULL))));
                        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) 3537622592U)))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) : (var_11)))));
                        var_25 = ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_8]) : (arr_5 [i_2]));
                        arr_36 [i_1] [17U] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                    }
                    var_26 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) * (18131345383836686605ULL))) * (((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                }
                var_27 = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_0]))));
            }
            /* vectorizable */
            for (long long int i_10 = 1; i_10 < 17; i_10 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    arr_43 [16LL] [i_1] [i_1] [8] = ((/* implicit */unsigned int) (~(arr_33 [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) (signed char)8))));
                        arr_47 [i_12 + 1] [i_11] [0ULL] [i_1] [1LL] [1LL] [1LL] = ((/* implicit */unsigned short) 2918709700996824753ULL);
                        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 2319342803886019050ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_10 + 1])) : (var_0)));
                    }
                    var_30 = ((/* implicit */int) ((unsigned int) arr_40 [i_1] [i_10 - 1] [i_1]));
                    /* LoopSeq 2 */
                    for (short i_13 = 3; i_13 < 17; i_13 += 1) 
                    {
                        arr_51 [i_0] [i_0] [i_1] [i_13] [i_11] [i_11] = ((/* implicit */unsigned int) ((unsigned short) arr_33 [i_0] [i_11] [i_10 + 1] [i_13 + 1]));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_10 + 1] [i_10 + 1] [i_13 - 3] [i_13 - 3] [i_13 + 1])) ? (((/* implicit */int) arr_17 [i_11] [i_10 + 1] [i_13 - 3])) : (((/* implicit */int) (signed char)-107)))))));
                    }
                    for (short i_14 = 2; i_14 < 17; i_14 += 3) 
                    {
                        arr_56 [i_0] [i_1] [i_11] [i_1] = ((/* implicit */long long int) var_8);
                        var_32 = ((/* implicit */long long int) var_3);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_10 + 1] [(unsigned char)16]))) : (var_11)));
                        arr_57 [i_1] [i_1] [i_10] [i_1] [i_0] = ((/* implicit */unsigned int) (-(8188LL)));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_10 + 1] [i_11])) < (((/* implicit */int) arr_21 [i_0] [i_0] [i_10 + 1] [i_11]))));
                    }
                }
                for (long long int i_15 = 1; i_15 < 16; i_15 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */_Bool) var_9);
                    arr_60 [i_10] [6ULL] [6ULL] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1704549880U)) ? (-9223372036854775805LL) : (9223372036854775807LL)));
                }
                for (long long int i_16 = 1; i_16 < 16; i_16 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0ULL))));
                    arr_64 [i_1] [i_16] [i_10 + 1] [i_16] [i_16] [i_16 - 1] = ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)117)) * (((/* implicit */int) (unsigned short)20401))))) - (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_16] [i_10 + 1] [i_1] [i_0]))))));
                }
                for (long long int i_17 = 1; i_17 < 16; i_17 += 4) /* same iter space */
                {
                    arr_67 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -1962690391)) : (7297278191937280366ULL))));
                    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((unsigned int) arr_52 [i_17 - 1] [i_10 + 1] [i_17 + 2] [i_10 + 1] [i_10 - 1]))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    arr_71 [13U] [i_1] [i_10 - 1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_10)) : (var_0))));
                    arr_72 [i_0] [i_0] [i_18] [i_10] [i_18] [i_10] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_1] [i_0] [i_1] [i_10 + 1])) ? (((/* implicit */int) arr_29 [i_0] [3U] [i_10] [i_10 + 1])) : (((/* implicit */int) var_3))));
                }
                for (short i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        arr_77 [i_0] [14ULL] [i_10] [i_1] [17ULL] = ((/* implicit */unsigned short) (-((-(9223372036854775807LL)))));
                        var_39 ^= ((/* implicit */unsigned short) arr_70 [i_1] [(unsigned char)5] [i_10 + 1] [i_1] [i_20]);
                        var_40 = ((/* implicit */int) ((unsigned int) 1152921504338411520ULL));
                        arr_78 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned long long int) ((int) 2552351030U))) : (((arr_74 [i_0] [1U] [i_1] [i_1] [i_19] [i_20]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_1] [11U] [i_1] [(_Bool)1])))))));
                        var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7203085425353614942ULL))));
                    }
                    for (signed char i_21 = 0; i_21 < 18; i_21 += 1) 
                    {
                        arr_81 [i_0] [15ULL] [i_10 - 1] [i_19] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8188LL)) ? (((/* implicit */int) (unsigned short)37961)) : (((/* implicit */int) (unsigned char)129))));
                        var_42 = ((/* implicit */unsigned long long int) arr_22 [i_1] [i_10 - 1] [i_10 - 1]);
                    }
                    arr_82 [i_1] [i_1] [(short)3] = ((/* implicit */signed char) arr_61 [(_Bool)1] [i_1] [i_1] [i_10 + 1] [i_0] [i_10]);
                    /* LoopSeq 2 */
                    for (unsigned char i_22 = 3; i_22 < 17; i_22 += 3) /* same iter space */
                    {
                        arr_85 [i_0] [i_1] [i_0] [(unsigned short)16] [i_22] = ((/* implicit */unsigned long long int) var_8);
                        var_43 = ((/* implicit */unsigned int) (unsigned char)141);
                        arr_86 [(unsigned short)2] [(unsigned short)2] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                    }
                    for (unsigned char i_23 = 3; i_23 < 17; i_23 += 3) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned short) (-(780858321014854931ULL)));
                        var_45 = ((/* implicit */unsigned long long int) var_11);
                        var_46 = ((/* implicit */signed char) arr_65 [i_0] [i_0] [i_1] [i_1] [i_1] [i_10]);
                    }
                }
                /* LoopSeq 1 */
                for (unsigned short i_24 = 4; i_24 < 17; i_24 += 3) 
                {
                    var_47 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61506)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20425))) : (12085746068618182211ULL))))));
                    arr_92 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = (+(var_10));
                    /* LoopSeq 3 */
                    for (long long int i_25 = 0; i_25 < 18; i_25 += 3) 
                    {
                        arr_95 [i_0] [16ULL] [16ULL] [i_10 - 1] [i_1] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (unsigned short)4029)) : (((/* implicit */int) (unsigned short)20408))));
                        var_48 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (unsigned short)45135)))));
                        arr_96 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [i_24 - 3] [i_25] [i_25] [i_25] [i_25] [(short)3])) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_32 [i_24 - 1] [i_24 - 2] [i_24 - 2] [i_24 - 4] [i_10 - 1]))));
                    }
                    for (int i_26 = 0; i_26 < 18; i_26 += 4) /* same iter space */
                    {
                        arr_99 [i_1] [i_24] [i_10 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_39 [i_24] [i_10] [i_1]);
                        var_49 = ((/* implicit */unsigned short) ((unsigned char) arr_75 [i_10] [(unsigned short)16] [(signed char)3] [10ULL] [i_10 - 1] [i_10] [i_10 + 1]));
                        arr_100 [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)25729)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_10 - 1] [i_24 - 1] [i_24 + 1] [i_24 - 1]))) : (((((/* implicit */_Bool) arr_40 [i_0] [i_26] [i_1])) ? (((/* implicit */unsigned long long int) var_5)) : (var_2))));
                        arr_101 [i_1] [(_Bool)1] [i_24 - 2] [i_26] = ((/* implicit */long long int) ((((/* implicit */_Bool) -5036459784863952251LL)) ? ((-(((/* implicit */int) (signed char)-56)))) : (((/* implicit */int) arr_59 [i_10 - 1] [i_10 + 1] [i_1]))));
                    }
                    for (int i_27 = 0; i_27 < 18; i_27 += 4) /* same iter space */
                    {
                        arr_106 [i_1] = ((/* implicit */unsigned int) var_7);
                        var_50 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)129)))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4030)) && (((/* implicit */_Bool) (unsigned short)53943)))))));
                    }
                }
                arr_107 [i_0] [i_1] [i_10] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) arr_10 [i_10 + 1] [(signed char)8])));
            }
            var_51 *= ((/* implicit */signed char) arr_4 [i_0]);
            var_52 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_98 [(signed char)5] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_98 [i_0] [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_98 [3ULL] [(short)11] [i_1] [i_0] [i_0])))));
            var_53 = ((/* implicit */short) arr_89 [i_1] [i_1]);
        }
        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3516))) : (2900483654U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)39780)) : (((/* implicit */int) arr_32 [1ULL] [i_0] [1ULL] [3U] [i_0]))))) : (arr_94 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_8 [6U] [(signed char)2] [6U])) : (((/* implicit */int) (unsigned short)4))));
    }
    /* vectorizable */
    for (unsigned int i_28 = 0; i_28 < 16; i_28 += 1) 
    {
        var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_80 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])))))));
        var_56 -= ((/* implicit */signed char) 746828786U);
        arr_111 [i_28] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_28] [i_28]))) < (arr_48 [i_28] [i_28] [i_28])));
        arr_112 [i_28] = (~(arr_50 [10ULL] [10ULL]));
    }
    var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) 4099849804460322489LL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    var_58 = ((/* implicit */long long int) ((unsigned short) ((unsigned int) ((_Bool) 11217581027982417507ULL))));
    var_59 |= ((/* implicit */short) (-(10ULL)));
}
