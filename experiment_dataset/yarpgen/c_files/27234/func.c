/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27234
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
    var_13 = ((/* implicit */signed char) ((short) (unsigned char)74));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (((+(var_0))) * (((/* implicit */int) ((min((((/* implicit */int) (unsigned char)46)), (var_0))) >= (((/* implicit */int) ((short) (unsigned char)181)))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                arr_9 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (unsigned char)181);
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)74)), (2582483206U)))) ? (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))) : (((((/* implicit */_Bool) (unsigned char)53)) ? (1392520558U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)9894)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) min(((short)-9890), (((/* implicit */short) (unsigned char)74))))))))));
            }
            for (unsigned short i_3 = 2; i_3 < 24; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    arr_14 [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) min((2047327866), (((/* implicit */int) var_11))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_16 |= ((((/* implicit */_Bool) (short)9892)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-9890)));
                        arr_17 [i_5] [i_4] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (signed char)78)))));
                        arr_18 [i_0] [i_1] [i_3] [i_4] [i_5] = max((max((((/* implicit */unsigned int) var_0)), (var_6))), (((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */_Bool) 3528939786U)) || ((_Bool)1)))), (var_8)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) var_7))))));
                        var_18 = ((/* implicit */long long int) ((unsigned char) var_11));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) (short)-9884)))))));
                    }
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                    {
                        var_20 -= ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62805))) - (((unsigned int) (unsigned char)209))))));
                        var_21 = ((((var_1) / (((/* implicit */unsigned int) var_3)))) / (((/* implicit */unsigned int) ((/* implicit */int) min(((short)9894), (((/* implicit */short) (unsigned char)150)))))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-72)) && (((/* implicit */_Bool) var_0))))), (min((var_2), ((unsigned char)202)))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                    {
                        var_23 = (((+(var_4))) > (((/* implicit */unsigned long long int) ((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13245)))))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((var_4) ^ (((/* implicit */unsigned long long int) var_12)))))));
                        var_25 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)9883)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8236)))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    var_26 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-9890)) && (((/* implicit */_Bool) var_3))))) < (((((/* implicit */_Bool) (short)-9884)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))));
                    var_27 = ((/* implicit */_Bool) var_7);
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */_Bool) ((var_6) + (((((/* implicit */_Bool) var_10)) ? (var_1) : (var_6)))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((var_12) / (var_1))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (short)-9895)) : (((/* implicit */int) var_11))))) > (1117535413U))))));
                    }
                }
                for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    arr_33 [i_0] [i_1] [i_3] [i_11] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_3)) : (3131433023U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)9889)) ? (((/* implicit */int) (short)-9894)) : (((/* implicit */int) var_2)))))));
                    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) max((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))))) / (((((/* implicit */unsigned long long int) var_6)) - (var_4))))), (((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) 12528705943459547537ULL)))))))))));
                }
                arr_34 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) <= (5918038130250004063ULL)));
                var_32 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) 66977792LL)) ? (5918038130250004063ULL) : (((/* implicit */unsigned long long int) 6061537664103507597LL)))), (((/* implicit */unsigned long long int) max((314238826U), (((/* implicit */unsigned int) (short)-32042))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
                arr_35 [i_0] [i_1] [i_3] |= ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_8))) % (-7135892692123681776LL)))));
            }
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : ((-((-(1365854984U)))))));
            arr_36 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) - (1365854962U))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_13 = 4; i_13 < 24; i_13 += 3) 
            {
                arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)202)), (((((/* implicit */int) (signed char)12)) * (((/* implicit */int) var_2))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (short)9893)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) var_7))))) % (((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (3329893442457655676LL))))) : ((+(-4611686018427387904LL)))));
                arr_43 [i_0] [i_0] = ((/* implicit */short) min((min((4294967295U), (((/* implicit */unsigned int) (unsigned char)202)))), (((/* implicit */unsigned int) (short)29000))));
            }
            for (long long int i_14 = 1; i_14 < 23; i_14 += 4) 
            {
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (-(((/* implicit */int) min(((short)29000), (((/* implicit */short) (signed char)-78))))))))));
                var_35 = ((/* implicit */unsigned long long int) (signed char)-10);
                var_36 = ((/* implicit */unsigned short) var_11);
            }
            for (unsigned int i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                arr_50 [i_0] [i_12] [i_12] [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+((~(((/* implicit */int) (_Bool)1))))))) | ((+(((unsigned int) (signed char)-16))))));
                var_37 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(2929112300U)))), (min((((/* implicit */unsigned long long int) var_7)), (var_4)))));
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 2; i_17 < 24; i_17 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned long long int) 7106303731954861597LL)), (var_4))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)53)))))) ^ (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50991))) : (var_4))), (((/* implicit */unsigned long long int) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (short)23927))))))))));
                            var_39 *= (~(min((((/* implicit */unsigned int) ((((/* implicit */int) (short)29000)) >> (((((/* implicit */int) var_7)) + (26781)))))), (min((var_12), (var_6))))));
                            arr_57 [i_0] [i_12] [i_16] [i_17] [i_15] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(min((var_9), (((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) (signed char)5))))) ? (((unsigned long long int) 790111082096269625ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4220188952U) < (3085682393U)))))))));
                            arr_58 [i_0] [i_17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3774567466181345882LL))));
                            var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)29000))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    var_41 += ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) var_11)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_19 = 2; i_19 < 24; i_19 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -4968915988614641756LL))))) <= ((~(((/* implicit */int) var_7))))));
                        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_2)))))))));
                        var_44 = ((/* implicit */int) ((_Bool) (short)29004));
                        var_45 += ((/* implicit */unsigned int) (-(((/* implicit */int) var_11))));
                        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 5077354318513685551ULL)) && (((/* implicit */_Bool) var_6)))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        var_47 += (+(((/* implicit */int) (unsigned short)14199)));
                        var_48 = ((/* implicit */short) ((((/* implicit */int) (short)23949)) < (((/* implicit */int) (unsigned short)65535))));
                    }
                }
                for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        arr_73 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_2)))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (var_1))))));
                        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)72))));
                        arr_74 [i_12] [i_12] [i_15] [i_21] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_9)) : (var_12))) != (3892824526U)));
                    }
                    var_50 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)25786)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */int) (unsigned char)234))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) (short)32759))) % (var_6)))))));
                    var_51 *= (!(((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)229)) | (((/* implicit */int) var_5))))))));
                }
            }
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 25; i_23 += 4) 
            {
                for (int i_24 = 0; i_24 < 25; i_24 += 3) 
                {
                    {
                        arr_82 [i_24] [i_23] [i_12] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (unsigned char)255))) * (((/* implicit */int) (short)19652))))) ? (min(((+(7106303731954861593LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_0)) < (2929112320U)))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((var_0) / (((/* implicit */int) var_10))))) * ((-(2929112311U))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_25 = 4; i_25 < 24; i_25 += 3) 
                        {
                            var_52 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned short)42637))))), (min((((/* implicit */unsigned long long int) var_1)), (12585813948834575920ULL)))));
                            var_53 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_11)), (13369389755195866065ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)172)))))))) ? (((((unsigned int) (unsigned char)253)) * (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (var_1)))))));
                            var_54 = (~(max((((/* implicit */long long int) var_6)), ((+(4968915988614641755LL))))));
                        }
                    }
                } 
            } 
        }
        var_55 = ((/* implicit */signed char) var_7);
        var_56 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((var_9) - (((/* implicit */int) (signed char)-124)))), (((/* implicit */int) min(((unsigned short)22930), (((/* implicit */unsigned short) (unsigned char)72)))))))), (min((min((((/* implicit */unsigned long long int) (unsigned short)42637)), (3429424378692481497ULL))), (((/* implicit */unsigned long long int) var_5))))));
    }
    for (signed char i_26 = 4; i_26 < 23; i_26 += 2) /* same iter space */
    {
        var_57 = ((/* implicit */unsigned short) (!(((var_3) <= (((/* implicit */int) (_Bool)1))))));
        var_58 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) || (((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_0))))));
        var_59 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (-1LL) : (1853742155800367517LL)))));
        var_60 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 281338156)) ? (((/* implicit */long long int) 2087587231U)) : (-4968915988614641755LL))), (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned short) var_2)))))));
        /* LoopSeq 3 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            var_61 = ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned long long int) ((long long int) var_12)))));
            var_62 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((266338304U) * (((/* implicit */unsigned int) var_9)))), (min((((/* implicit */unsigned int) var_5)), (402142758U)))))) != (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (var_0)))), (min((0ULL), (((/* implicit */unsigned long long int) -2518403363230928093LL))))))));
        }
        for (long long int i_28 = 1; i_28 < 24; i_28 += 1) 
        {
            arr_96 [i_28] [i_26] |= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-23950)), (var_5)))), (max((var_4), (((/* implicit */unsigned long long int) (unsigned char)229)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_9)) * (var_6))))));
            /* LoopSeq 1 */
            for (short i_29 = 0; i_29 < 25; i_29 += 3) 
            {
                var_63 = ((/* implicit */_Bool) min((var_63), (((((/* implicit */int) ((unsigned char) var_3))) == ((~(((/* implicit */int) (unsigned char)140))))))));
                var_64 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)23))))) ? (min((((/* implicit */long long int) (unsigned short)24161)), (68719476735LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)(-32767 - 1))))))))) * (((/* implicit */long long int) min((((((/* implicit */int) var_2)) >> (((17299453295508051435ULL) - (17299453295508051423ULL))))), (((/* implicit */int) min((var_10), (((/* implicit */short) var_11))))))))));
                var_65 *= ((/* implicit */_Bool) ((((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned short)6966)))))));
                var_66 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(2232165736U))))));
            }
        }
        /* vectorizable */
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            var_67 |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5)))))));
            var_68 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)248))));
            arr_103 [i_26] [i_30] [i_26] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
            arr_104 [i_26] [i_30] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)35))));
            var_69 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned int) var_0))))));
        }
    }
    var_70 = ((/* implicit */signed char) min((var_70), (((/* implicit */signed char) ((((/* implicit */int) var_7)) | ((+((~(((/* implicit */int) (_Bool)1)))))))))));
}
