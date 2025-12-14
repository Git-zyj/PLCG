/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190999
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_5))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) var_6);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~(11619181476407805320ULL)));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */signed char) arr_7 [i_1]);
        var_15 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) min((arr_7 [i_1]), (((/* implicit */unsigned short) arr_6 [i_1])))))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_12))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                arr_14 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-4337)) ^ (((/* implicit */int) (unsigned short)2))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    arr_17 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) var_8);
                    var_17 = arr_10 [i_1] [i_1];
                }
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    var_18 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)117)), (334569304567117071ULL)));
                    arr_20 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((short) (~(((/* implicit */int) arr_13 [(unsigned short)8] [i_2]))))));
                    var_19 = ((/* implicit */short) (~(min((334569304567117082ULL), (11605782137849809864ULL)))));
                    arr_21 [i_1] [i_2] [i_2] [(short)9] = (~(max((18112174769142434523ULL), (((/* implicit */unsigned long long int) (unsigned char)7)))));
                }
            }
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)127), (((/* implicit */unsigned short) (unsigned char)144))))) + ((~(((/* implicit */int) arr_11 [i_1] [i_2] [i_6] [i_6]))))));
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2] [i_6])) << (((334569304567117064ULL) - (334569304567117052ULL))))))));
                var_22 = var_13;
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) var_2)))))));
                var_24 &= var_12;
            }
            for (short i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                arr_30 [i_1] [i_2] [i_2] [(unsigned short)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18112174769142434515ULL)) ? (334569304567117100ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16368)))));
                var_25 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)19759)) ? (((/* implicit */int) (unsigned short)32768)) : ((~(((/* implicit */int) (unsigned char)255)))))) ^ (((/* implicit */int) arr_28 [i_7] [i_1]))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_1] [i_7]))) % (min((11605782137849809874ULL), (arr_25 [i_1] [i_1] [i_1])))));
            }
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                var_27 = ((((((/* implicit */int) (short)-22856)) ^ (((/* implicit */int) (unsigned char)68)))) <= (((/* implicit */int) arr_6 [i_2])));
                arr_33 [i_1] [(unsigned short)6] [(signed char)15] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_1])) && (((/* implicit */_Bool) var_4))));
            }
            var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) 18112174769142434508ULL)))));
            arr_34 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))))));
            arr_35 [i_1] [i_2] = ((/* implicit */_Bool) (-(arr_10 [i_1] [i_2])));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)224)) ? (18112174769142434537ULL) : (18112174769142434541ULL))))));
            arr_38 [i_1] [i_9] = ((/* implicit */unsigned short) ((arr_6 [i_1]) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_9]))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) ? ((+(((/* implicit */int) arr_18 [i_1] [i_1] [10U] [i_9] [i_9] [i_1])))) : (((/* implicit */int) (unsigned short)32768))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50591))) : ((-(var_10)))));
        }
    }
    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18112174769142434554ULL)))))) | (18446744073709551606ULL))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)27529))))))))));
        var_33 = ((/* implicit */unsigned int) ((((unsigned long long int) (~(var_8)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10] [i_10])))));
        var_34 &= ((/* implicit */signed char) arr_10 [i_10] [i_10]);
        arr_41 [i_10] &= var_4;
        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_24 [i_10] [i_10] [i_10]))));
    }
    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        arr_46 [i_11] [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_0 [i_11] [i_11]), (arr_0 [i_11] [i_11]))))));
        var_36 *= ((/* implicit */unsigned short) ((min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) arr_31 [i_11] [i_11] [(signed char)15])))) * (((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) arr_1 [0U]))))) && (((/* implicit */_Bool) var_2)))))));
        /* LoopNest 2 */
        for (signed char i_12 = 2; i_12 < 12; i_12 += 1) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_53 [(signed char)2] [2U] [(unsigned short)12] &= ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) 18112174769142434489ULL)) ? (334569304567117139ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)246)) - (((/* implicit */int) ((_Bool) (unsigned short)29139))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_57 [i_11] [5U] [i_12 + 1] [i_13] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2097151ULL) ^ ((+(334569304567117105ULL)))))) ? (arr_36 [i_12 + 3] [i_11]) : (((/* implicit */unsigned long long int) min((arr_19 [i_11] [i_12] [3ULL] [i_13 - 1] [i_14] [i_14]), (((/* implicit */unsigned int) arr_55 [i_11] [i_12] [(unsigned char)10] [(unsigned char)10] [i_11] [i_14])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            arr_60 [i_13] [i_12] = ((unsigned short) ((((/* implicit */_Bool) arr_23 [i_11] [(unsigned short)16])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))));
                            arr_61 [i_13] [i_12] = var_2;
                            arr_62 [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [(short)15] [i_13] [i_13 - 1] [i_14]))));
                        }
                        /* vectorizable */
                        for (short i_16 = 0; i_16 < 15; i_16 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_11] [i_13 - 1])) || (((/* implicit */_Bool) arr_22 [i_11] [i_13 - 1]))));
                            arr_66 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_11] [i_12 - 1] [i_13 - 1] [i_14]))));
                            var_38 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            arr_67 [i_13] [i_12] [(unsigned char)13] [i_14] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned short)65521))))) ? (((/* implicit */int) arr_27 [i_12 + 3] [i_13 - 1] [i_13 - 1] [i_13 - 1])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_31 [(unsigned short)1] [i_13 - 1] [i_13]))))));
                        }
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_48 [i_12 - 2])) == (((/* implicit */int) max((arr_48 [i_12 + 2]), (arr_48 [i_12 + 3]))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((((((/* implicit */int) min((((/* implicit */short) (unsigned char)252)), ((short)-6078)))) + (2147483647))) >> ((+(((/* implicit */int) arr_28 [i_12 - 2] [i_12 - 1]))))));
                            var_41 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_69 [i_13 - 1] [i_12 - 2] [i_11] [i_11]))));
                        }
                        for (short i_19 = 0; i_19 < 15; i_19 += 3) 
                        {
                            var_42 = var_6;
                            arr_75 [i_11] [(unsigned short)4] [i_17] &= arr_50 [(unsigned short)9] [(unsigned short)9];
                        }
                        arr_76 [i_13] [i_12 + 2] = ((/* implicit */unsigned char) arr_54 [i_13] [i_13 - 1] [i_13] [i_13] [i_13 - 1]);
                        /* LoopSeq 2 */
                        for (unsigned int i_20 = 0; i_20 < 15; i_20 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_69 [i_20] [i_17] [(signed char)14] [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_37 [i_12 + 2]))))));
                            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (~(var_8))))));
                            var_45 = ((/* implicit */signed char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_11] [i_12 + 3] [i_13]))))) << (((((/* implicit */int) (short)-32153)) + (32170)))))));
                            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)194))))) ? (max((2876882144U), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) || (((3345506362446416586ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16)))))))))));
                            var_47 = ((((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */int) ((unsigned char) arr_69 [i_11] [i_11] [i_11] [i_11]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34556))))))) > (((((/* implicit */int) arr_55 [i_13 - 1] [i_12 + 3] [i_12 + 2] [i_12 + 3] [i_13] [i_13])) << (((((/* implicit */int) arr_55 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_12 - 1] [i_20] [i_13 - 1])) - (13868))))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 15; i_21 += 4) 
                        {
                            arr_83 [i_21] [i_13] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)236))));
                            arr_84 [i_21] [i_13] [i_13] [i_13] [(unsigned short)9] = ((/* implicit */unsigned char) (short)-10599);
                        }
                    }
                }
            } 
        } 
        var_48 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) arr_58 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))), (min((((((/* implicit */int) var_2)) | (((/* implicit */int) arr_58 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))), (((/* implicit */int) arr_44 [i_11]))))));
    }
}
