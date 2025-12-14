/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34516
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
    var_17 = ((/* implicit */int) max((var_17), (min((var_15), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-1))))))));
    var_18 = ((/* implicit */_Bool) var_13);
    var_19 &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)13)) != (953250119)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) 1108213545329359730LL);
        var_20 += ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (min((((/* implicit */int) (short)-10970)), ((~(((/* implicit */int) (unsigned char)27))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            arr_14 [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) / (15289062247492329546ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-5)) ? (-133211591) : (((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((arr_9 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_3] [i_1])) - (54)))))) : (((unsigned long long int) arr_11 [i_0] [i_1])))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (3157681826217222070ULL)))));
                            arr_15 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) arr_0 [i_0]);
                        }
                        arr_16 [i_3] = ((/* implicit */signed char) (((~(-1108213545329359714LL))) / (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3])))), ((+(-1108213545329359736LL)))))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((int) (-9223372036854775807LL - 1LL))))))))));
                        var_22 ^= ((((((/* implicit */int) arr_10 [i_2 + 1] [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_10 [i_2 + 1] [i_2] [i_2] [i_1])))) % (((/* implicit */int) min(((unsigned char)140), ((unsigned char)163)))));
                    }
                    var_23 = ((((/* implicit */_Bool) arr_12 [i_1])) ? ((((-(((/* implicit */int) (short)-10965)))) / (((/* implicit */int) (short)-20)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_0])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -2003045530)), (15289062247492329557ULL))))))));
                }
            } 
        } 
    }
    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            arr_23 [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (-1108213545329359730LL) : (9223372036854775807LL)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) arr_21 [i_6] [i_6] [i_5])) : (((/* implicit */int) (signed char)124))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5]))) % (9419848681923056904ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_19 [i_5 + 2] [i_5 + 1]))))));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 22; i_9 += 2) 
                    {
                        {
                            arr_32 [i_9] [i_8] [i_7] [i_7] [i_9] [i_7] = ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_22 [i_6])) < (((/* implicit */int) arr_27 [i_5] [i_8]))))), (min(((short)19104), ((short)-10706)))))) & (((((/* implicit */int) arr_21 [i_6] [i_8] [i_9 + 1])) / (((/* implicit */int) arr_30 [i_5] [i_5] [i_5 + 1] [i_5] [i_7] [i_9 + 1] [i_9])))));
                            var_24 = ((/* implicit */int) var_4);
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((((arr_29 [i_6] [i_6] [i_6] [i_5] [i_5]) >> (((9494703816934917066ULL) - (9494703816934917011ULL))))) >> (((((long long int) (unsigned char)247)) - (212LL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9217254220650711536LL)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) arr_19 [i_6] [i_6]))))))))));
            var_26 = ((/* implicit */unsigned long long int) arr_25 [i_5] [i_6] [i_6]);
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                for (signed char i_12 = 3; i_12 < 23; i_12 += 2) 
                {
                    for (signed char i_13 = 2; i_13 < 22; i_13 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((signed char) arr_28 [i_12] [i_12] [i_12 - 2] [i_12] [i_12] [i_12]));
                            var_28 = ((/* implicit */long long int) (unsigned char)0);
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)200)) ? (arr_41 [i_5] [i_10] [22LL]) : (((/* implicit */int) var_1))))) * (((((/* implicit */_Bool) arr_44 [i_5] [i_10] [i_10] [i_11] [i_12] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (6080097285479007256ULL))))))));
                            arr_45 [i_5] [i_10] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2003045527)) ? (((/* implicit */int) arr_21 [i_5] [i_11] [i_13])) : (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5 + 3]))) : (((long long int) 1229372493))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */signed char) ((short) 0));
        }
        var_31 += ((/* implicit */signed char) ((((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_40 [i_5 + 3])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5 + 3] [i_5]))) < ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (short)19105)))))))) : (((/* implicit */int) (_Bool)0))));
    }
    for (long long int i_14 = 1; i_14 < 20; i_14 += 3) 
    {
        var_32 = ((/* implicit */unsigned char) ((signed char) arr_43 [i_14 - 1] [12ULL] [i_14 + 1] [i_14 - 1] [i_14]));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned char i_16 = 1; i_16 < 20; i_16 += 2) 
            {
                for (signed char i_17 = 4; i_17 < 18; i_17 += 3) 
                {
                    {
                        var_33 |= (+(((/* implicit */int) min(((short)-1), (((/* implicit */short) arr_21 [i_14 - 1] [i_16 - 1] [i_17 - 1]))))));
                        var_34 = (short)-9491;
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */_Bool) 7522458446014345217ULL);
        /* LoopNest 2 */
        for (signed char i_18 = 4; i_18 < 19; i_18 += 4) 
        {
            for (int i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_20 = 2; i_20 < 17; i_20 += 2) 
                    {
                        arr_67 [i_20] [i_19] [i_18] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)244))));
                        arr_68 [i_14] [i_19] [i_20] |= (~(((/* implicit */int) ((signed char) (unsigned char)123))));
                        arr_69 [i_20] [i_19] [i_18] [i_14] = ((/* implicit */int) min((((short) arr_37 [i_20] [i_20 + 2] [i_18 - 4] [i_14 - 1])), (((/* implicit */short) ((signed char) min((((/* implicit */int) (signed char)19)), (-78558038)))))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) min((((/* implicit */int) ((short) ((arr_53 [i_14] [i_18] [i_19] [i_20]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_14]))))))), (((-2003045530) + (((int) arr_43 [i_14] [i_20] [i_14] [i_14] [i_14])))))))));
                        var_37 = ((/* implicit */signed char) ((int) (short)-15553));
                    }
                    for (int i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        var_38 += ((/* implicit */unsigned long long int) (signed char)61);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 1) 
                        {
                            arr_77 [i_19] [i_22] [i_18] [i_21] [i_19] = ((/* implicit */signed char) ((13948832661863130493ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_39 [i_14] [i_18] [i_21] [i_22])) ^ (750553877))))))));
                            var_39 = max((arr_6 [i_18 - 1] [i_14 + 1]), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
                            var_40 = ((/* implicit */int) max((var_40), ((+(((/* implicit */int) arr_50 [i_21]))))));
                            var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_14] [i_18] [i_21] [i_22])) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) arr_30 [i_22] [i_21] [i_21] [i_19] [i_19] [i_18] [i_14]))))) ? (((((/* implicit */_Bool) arr_4 [i_14])) ? (((/* implicit */int) arr_56 [i_19])) : (-1493269904))) : (min((((/* implicit */int) var_12)), (var_14))))) % (((/* implicit */int) arr_72 [i_14]))));
                        }
                        for (int i_23 = 1; i_23 < 20; i_23 += 4) 
                        {
                            var_42 = ((/* implicit */int) ((long long int) arr_39 [i_23] [i_19] [i_18] [i_14]));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_14 + 1] [i_18]))) == (((unsigned long long int) var_3))))) : ((~((+(((/* implicit */int) arr_35 [i_21]))))))));
                            var_44 += ((((/* implicit */_Bool) arr_79 [i_14] [i_21] [i_19] [i_14] [i_23] [i_14] [i_19])) ? (((/* implicit */int) arr_40 [i_23])) : (((/* implicit */int) arr_34 [i_19] [i_19])));
                            var_45 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned char)18)))) || (((/* implicit */_Bool) arr_24 [i_19] [i_21] [i_23]))))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_44 [i_23] [i_21] [i_19] [i_19] [i_18] [i_14]))))) : (min((var_4), (((/* implicit */unsigned long long int) arr_40 [i_19])))))));
                            var_46 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) arr_19 [i_18 - 1] [i_21]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_18 - 1] [i_23]))) + (15494192264817632075ULL)))));
                        }
                        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                        {
                            arr_83 [i_24] [i_21] [i_19] [i_19] [i_18] [i_18] [i_14] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_19])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_21]))))) != (((unsigned long long int) arr_73 [i_14] [i_18] [i_19] [i_21] [i_24]))))), (min((max((((/* implicit */unsigned long long int) arr_80 [i_24] [i_19] [i_18] [i_14])), (17188614911113052247ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [i_19] [i_18])) != (((/* implicit */int) arr_62 [i_24])))))))));
                            arr_84 [i_14] [i_18] [i_19] [i_21] [i_24] = ((((((/* implicit */_Bool) max((arr_73 [i_18] [i_21] [i_19] [i_19] [i_24]), (((/* implicit */long long int) arr_27 [i_21] [i_18]))))) ? (((((/* implicit */int) (unsigned char)255)) >> (((-234807381) + (234807383))))) : (((((/* implicit */_Bool) arr_8 [i_18] [i_14])) ? (((/* implicit */int) arr_31 [i_21] [i_19] [i_19] [i_14] [i_24] [i_21])) : (((/* implicit */int) arr_36 [i_14] [i_19] [i_21])))))) == (((((/* implicit */_Bool) (signed char)-20)) ? (((((/* implicit */_Bool) arr_30 [i_24] [i_21] [i_21] [i_19] [i_18] [i_14] [i_14])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_19 [i_24] [i_18])))) : ((~(((/* implicit */int) arr_46 [i_19] [i_14])))))));
                            var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) 914249132957724652ULL)) || (((/* implicit */_Bool) -905606431))));
                            var_48 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_19] [i_21])) >> (((6080097285479007246ULL) - (6080097285479007215ULL)))))))))) : (((((/* implicit */_Bool) min((arr_11 [i_14] [i_21]), (((/* implicit */short) arr_13 [i_24] [i_24] [i_21] [i_19] [i_18] [i_14] [i_14]))))) ? (arr_4 [i_24]) : (((/* implicit */unsigned long long int) ((long long int) (signed char)36)))))));
                        }
                        var_49 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) | ((~(7014839893909758360ULL)))))) ? (((((/* implicit */int) var_12)) & (((((/* implicit */_Bool) arr_65 [i_18])) ? (((/* implicit */int) arr_43 [i_14] [i_18] [i_19] [i_19] [i_21])) : (((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) arr_60 [i_18] [i_18] [i_18])))));
                    }
                    arr_85 [i_14] [i_19] [i_18] = ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_35 [i_14])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_14] [i_18] [i_19] [i_18] [i_19] [i_18])))))))) ? (((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) arr_72 [i_18]))))) ? (((((/* implicit */long long int) 2147483647)) % (-498138301224808760LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_56 [i_19])), (arr_21 [i_14] [i_18] [i_19]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_18 - 3] [i_14] [i_14 - 1] [i_14])) ? (((/* implicit */int) ((unsigned char) 2147483647))) : (((((/* implicit */_Bool) 6080097285479007247ULL)) ? (((/* implicit */int) arr_21 [i_19] [i_18] [i_14])) : (var_11)))))));
                    var_50 = ((/* implicit */unsigned long long int) min((var_50), (18446744073709551603ULL)));
                    arr_86 [i_18] [i_14] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_14] [i_18] [i_18] [i_19])) ? (2952551808891919524ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111)))));
                }
            } 
        } 
        var_51 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((max((1384040208), (((/* implicit */int) (_Bool)1)))) | (min((arr_51 [i_14]), (((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) 1752731966))));
    }
}
