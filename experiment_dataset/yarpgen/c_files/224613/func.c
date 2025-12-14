/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224613
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
    var_13 = ((/* implicit */_Bool) max((var_13), (var_7)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 0U))) || (((/* implicit */_Bool) var_12))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_1] [i_4 - 1] [i_4] [i_4] [i_4]) ? (((unsigned int) 1073741823U)) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)949)) & (((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_4 - 2] [i_3])) ? (arr_8 [i_1] [i_1 + 4] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_4] [i_3] [i_1])))))))));
                            var_15 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) var_1)))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_16 |= ((/* implicit */_Bool) (short)-949);
                            arr_18 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_5]), (((/* implicit */unsigned int) (unsigned char)176))))) && (((/* implicit */_Bool) ((unsigned int) arr_13 [i_1] [i_2])))))) + (((((/* implicit */int) arr_10 [i_5] [i_1] [i_0])) - (((/* implicit */int) (!(var_9))))))));
                        }
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((((long long int) 1601120189U)) <= (((/* implicit */long long int) ((/* implicit */int) (short)949)))))) - (((/* implicit */int) ((unsigned char) (-(var_1)))))));
                    }
                } 
            } 
        } 
        arr_19 [(short)2] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((3221225473U), (((/* implicit */unsigned int) (short)949))))), (((unsigned long long int) arr_13 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 4; i_7 < 13; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 4; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9 - 1] [i_7 - 2]))));
                        arr_31 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */long long int) (-(((unsigned int) var_7))));
                    }
                    for (unsigned int i_10 = 4; i_10 < 13; i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_6] [i_7] [i_7] [i_8] [i_10] = ((/* implicit */unsigned int) 13037625250497585434ULL);
                        var_19 += ((/* implicit */long long int) ((_Bool) ((arr_24 [i_7] [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [6LL] [i_8] [i_7] [6LL]))) : (arr_32 [(_Bool)1] [i_8] [i_10]))));
                        arr_35 [i_6] [i_6] [i_8] [i_7] = ((/* implicit */_Bool) arr_20 [i_7 - 4] [i_6]);
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((short) arr_27 [i_7 - 2] [i_10 - 2] [i_10] [i_10])))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        var_21 *= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_32 [i_11] [i_8] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1LL))));
                        var_22 *= (((!(((/* implicit */_Bool) 1601120189U)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_23 [i_7]) : (var_0))) : (((/* implicit */unsigned long long int) arr_20 [i_6] [i_11])));
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) <= (var_0)))) : (((/* implicit */int) (_Bool)1))));
                        arr_38 [i_6] [i_8] [i_7] = ((/* implicit */short) 1073741831U);
                    }
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5409118823211966169ULL))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6] [(unsigned char)2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [4ULL]))) : (7971178305779677236LL))))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) << (((/* implicit */int) var_2))))) || (var_4)));
    }
    for (unsigned long long int i_12 = 4; i_12 < 15; i_12 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_47 [i_13 - 1] [i_12] [i_14] [i_14]))) ? (((/* implicit */int) (!(var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-949)))))));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13037625250497585434ULL)) ? (((/* implicit */int) (!(var_9)))) : (((/* implicit */int) (_Bool)1))));
                arr_49 [i_12] [i_12] = ((/* implicit */unsigned char) max((3872833955680931399LL), (((/* implicit */long long int) 2693847107U))));
                var_29 = ((/* implicit */_Bool) ((var_2) ? (((max((var_9), (var_8))) ? (((((/* implicit */_Bool) arr_44 [i_12] [i_14])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_43 [i_13] [i_12]))) : (min((arr_45 [i_13] [i_14]), (((/* implicit */unsigned long long int) (short)-14881)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2))))));
            }
            for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 3) 
            {
                arr_53 [i_15] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) ((unsigned char) 2752443268U)))));
                arr_54 [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1723911431681553206LL)))))) - (max((arr_44 [i_13] [i_13]), (((/* implicit */unsigned int) arr_52 [i_12] [i_12] [i_12]))))));
                arr_55 [i_12] [i_13] [i_12] = arr_43 [i_12] [i_15];
                arr_56 [10U] [i_15] &= ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) (-(var_5)))))));
            }
            var_30 = ((/* implicit */long long int) ((unsigned int) arr_44 [i_12] [i_13]));
        }
        arr_57 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5753474626412732611ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13037625250497585434ULL)))) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 412316860416LL)), (2013265920ULL)))) ? (arr_45 [i_12 - 4] [i_12 - 4]) : (((/* implicit */unsigned long long int) ((long long int) arr_39 [i_12] [i_12])))))));
    }
    for (unsigned long long int i_16 = 1; i_16 < 8; i_16 += 4) 
    {
        var_31 ^= ((/* implicit */unsigned int) min((arr_7 [i_16] [i_16] [i_16] [i_16]), (max((((/* implicit */short) var_10)), (arr_7 [i_16 + 2] [i_16] [i_16] [i_16 + 2])))));
        var_32 = ((/* implicit */_Bool) (-(((arr_52 [i_16] [i_16] [(_Bool)1]) ? (((/* implicit */int) arr_52 [i_16] [i_16 + 1] [2ULL])) : (((/* implicit */int) arr_52 [i_16 + 2] [i_16 + 1] [4ULL]))))));
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_28 [i_16])) <= (((/* implicit */int) (_Bool)1))))))));
        var_34 += ((/* implicit */_Bool) (short)9);
        var_35 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(1147469187U)))) ? (((/* implicit */int) arr_10 [i_16 + 2] [i_16 - 1] [i_16 + 1])) : (((/* implicit */int) var_4)))), (((arr_26 [i_16 + 2] [i_16 - 1] [i_16 + 2] [i_16]) ? (((/* implicit */int) arr_26 [i_16 + 1] [i_16 + 2] [i_16 - 1] [i_16])) : (((/* implicit */int) arr_26 [i_16 + 2] [i_16 + 1] [i_16 - 1] [i_16]))))));
    }
    /* LoopSeq 3 */
    for (long long int i_17 = 1; i_17 < 19; i_17 += 1) 
    {
        arr_64 [i_17] = ((/* implicit */short) (!(var_2)));
        arr_65 [i_17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_62 [i_17 + 1]))));
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((max((max((((/* implicit */unsigned long long int) arr_62 [i_17])), (arr_63 [i_17]))), (max((((/* implicit */unsigned long long int) (short)-23939)), (arr_63 [i_17]))))) > (max((max((var_5), (((/* implicit */unsigned long long int) arr_62 [i_17])))), (((((/* implicit */_Bool) arr_63 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14881))) : (arr_63 [i_17]))))))))));
        var_37 = ((/* implicit */_Bool) min((var_37), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_63 [i_17]) - (var_3)))) ? (((((/* implicit */_Bool) (short)21632)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-21623), (((/* implicit */short) arr_62 [i_17])))))))))))));
    }
    for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            for (unsigned int i_20 = 2; i_20 < 11; i_20 += 1) 
            {
                {
                    arr_75 [i_20] [i_20] [i_19] [i_18] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_30 [i_19] [i_20 - 1] [i_20] [i_20] [i_20] [i_20])))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-32430))) - (arr_30 [i_20] [i_20] [i_20 - 2] [i_20] [i_20 - 2] [i_20 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-10102)) ? (((/* implicit */int) (short)9098)) : (((/* implicit */int) (unsigned char)21)))))))));
                    arr_76 [i_18] [i_19] [i_19] [i_20] = ((long long int) (-(((long long int) 16511771653309788442ULL))));
                    var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)949)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9087)))))))))) >= ((((_Bool)1) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_19] [i_20 + 1])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_21 = 0; i_21 < 12; i_21 += 1) 
        {
            var_39 &= ((/* implicit */unsigned int) var_0);
            arr_80 [i_21] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)62))))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (2634360626U)))))) - (((/* implicit */int) ((_Bool) arr_62 [i_18])))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_22 = 1; i_22 < 20; i_22 += 2) 
    {
        arr_83 [i_22] = ((/* implicit */unsigned long long int) var_7);
        /* LoopSeq 4 */
        for (long long int i_23 = 1; i_23 < 18; i_23 += 4) 
        {
            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) (-(((/* implicit */int) ((8592492131833947771ULL) < (((/* implicit */unsigned long long int) arr_81 [i_22] [i_23]))))))))));
            arr_87 [i_22] [i_23] [i_23] |= ((/* implicit */short) (-(((/* implicit */int) var_10))));
            arr_88 [i_23] = ((/* implicit */_Bool) ((unsigned int) var_5));
            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1813243073175526284ULL)) ? (1147469162U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40)))));
        }
        for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 2) 
        {
            var_42 = ((/* implicit */_Bool) max((var_42), ((!(((/* implicit */_Bool) (short)32767))))));
            var_43 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21632)) ? (((/* implicit */unsigned long long int) arr_82 [i_22 + 2])) : (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_85 [i_22] [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_82 [i_22])))) : (arr_81 [i_22 + 1] [i_22])));
        }
        for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 1) 
        {
            arr_93 [i_22] [i_25] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 7824001919098371243LL)))) ? (((((/* implicit */_Bool) (short)-21627)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7824001919098371243LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-956)) ? (((/* implicit */int) (short)21632)) : (((/* implicit */int) (unsigned char)119)))))));
            var_44 *= ((unsigned int) ((_Bool) var_4));
            /* LoopSeq 2 */
            for (unsigned long long int i_26 = 1; i_26 < 21; i_26 += 1) 
            {
                arr_97 [i_26] [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) arr_63 [i_22]);
                var_45 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (arr_92 [i_22] [i_25] [i_26])))));
                arr_98 [i_22] [i_25] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_82 [i_22 + 1])) ? (((/* implicit */unsigned long long int) arr_82 [i_22 - 1])) : (arr_63 [i_26 - 1])));
                var_46 = ((/* implicit */short) ((unsigned int) arr_96 [i_22] [i_22] [i_22 + 1]));
            }
            for (short i_27 = 0; i_27 < 22; i_27 += 1) 
            {
                arr_102 [i_22] [i_22] [i_22 - 1] &= ((/* implicit */_Bool) arr_89 [i_27]);
                var_47 = ((/* implicit */unsigned char) ((_Bool) 3790823852U));
                var_48 = (!(((/* implicit */_Bool) -6915436946493294872LL)));
                var_49 = ((/* implicit */_Bool) var_6);
            }
        }
        for (short i_28 = 0; i_28 < 22; i_28 += 4) 
        {
            arr_107 [i_22] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)216)) * (((/* implicit */int) (_Bool)1))));
            var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18)) ? (((/* implicit */int) (short)-8793)) : (((/* implicit */int) (short)941))));
        }
        var_51 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    }
}
