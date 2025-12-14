/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196996
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
    var_13 = ((/* implicit */long long int) var_1);
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) (signed char)-89))))) ? (((((/* implicit */_Bool) min(((unsigned short)65535), (var_9)))) ? (((/* implicit */int) max(((signed char)-80), ((signed char)94)))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) (signed char)-92)))));
    var_15 = ((/* implicit */unsigned char) 8514201134278926796ULL);
    var_16 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8096647492333354919LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)92)), (var_9))))))), (((/* implicit */unsigned int) var_8))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned long long int) (signed char)-64))) ? (((((/* implicit */_Bool) (unsigned short)45735)) ? (8514201134278926798ULL) : (7367914297544136080ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_18 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (signed char)71)) - (((/* implicit */int) (signed char)71)))) : (((/* implicit */int) (signed char)13)))) >= (((((arr_2 [i_0]) != (arr_2 [23]))) ? (min((((/* implicit */int) var_8)), (var_1))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63351))) : (16817800582142066363ULL)))));
        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) -2082683722));
    }
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((((((36028797018963840ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) % (((/* implicit */unsigned long long int) ((unsigned int) 7937125161395435553LL))))), (((/* implicit */unsigned long long int) ((unsigned char) var_12)))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        arr_13 [i_1] [i_4] [8U] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) max((arr_8 [i_1 - 1]), (arr_8 [i_1 - 2])))), (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-24621)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_3)))));
                        arr_14 [i_4] [i_1] [i_2 + 2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)109))))) ? (arr_4 [i_1 + 1]) : (((/* implicit */int) min(((short)-22567), ((short)32767))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26437))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) : (9104107623999166624LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) 9087338349999914001ULL))))));
                        var_21 |= ((/* implicit */short) ((unsigned int) min((arr_9 [i_1 - 2] [i_2 + 2]), (arr_8 [i_1 + 3]))));
                        var_22 = ((/* implicit */unsigned long long int) min((-11LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 2]))) <= (1628943491567485256ULL))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 3; i_5 < 14; i_5 += 3) 
                        {
                            arr_19 [i_4] [i_4] [i_3] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)16789)))) : (((/* implicit */int) arr_1 [i_1 + 2] [i_2 - 1])))));
                            arr_20 [i_1] [i_1] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) arr_18 [i_5 - 3] [i_4] [i_2 + 2]);
                            var_23 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)4734)), (-4038901091614216745LL)))), (((((/* implicit */unsigned long long int) arr_0 [i_2 - 1] [i_2 - 1])) % (var_6)))));
                        }
                    }
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */int) arr_16 [i_3]);
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) ((signed char) arr_4 [i_1]))) : (((/* implicit */int) (unsigned char)12))));
                        var_26 = ((/* implicit */int) (unsigned short)65535);
                        var_27 *= ((/* implicit */short) 11078829776165415537ULL);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) 267361681U);
                        arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_1 [i_2] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2] [i_2 + 1])))), ((-(((/* implicit */int) (unsigned short)65535))))));
                        arr_26 [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) var_5));
                        var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_3] [i_1]))) | (-9104107623999166625LL)))) : (((((/* implicit */unsigned long long int) 2147483647)) & (1272942612806944912ULL)))))) ? (((unsigned int) (-(arr_15 [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_2] [i_2])) ? (-6036235395302735486LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >= (6036235395302735487LL)))))));
                    }
                    var_30 = ((/* implicit */int) min((var_30), (max((((/* implicit */int) var_7)), (min((max((-490876470), (((/* implicit */int) (unsigned short)12735)))), (((/* implicit */int) arr_12 [i_3] [i_1 - 1] [i_2 + 1]))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_9 = 2; i_9 < 15; i_9 += 3) 
            {
                arr_31 [i_8] = ((/* implicit */short) ((arr_16 [i_8]) ? (((/* implicit */unsigned long long int) ((long long int) 18004444961890957778ULL))) : (((((/* implicit */_Bool) 3691431626641760616ULL)) ? (((/* implicit */unsigned long long int) var_11)) : (14755312447067791000ULL)))));
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)33855)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) arr_22 [i_1] [i_1 - 1] [i_1] [i_1 + 3])) : (((/* implicit */int) arr_10 [i_1] [i_1 + 2] [i_9 - 2])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 2) 
                {
                    arr_34 [(signed char)0] [i_8] [i_1 + 3] = ((/* implicit */unsigned int) -925499514);
                    var_32 *= ((/* implicit */_Bool) var_3);
                    var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
                    arr_35 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                    arr_36 [11U] [10ULL] [i_9 + 1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) || (((/* implicit */_Bool) ((short) arr_29 [i_8])))));
                }
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) var_3))));
                arr_37 [i_8] [i_8] [4LL] = var_0;
            }
            var_35 += ((/* implicit */unsigned long long int) (signed char)-53);
            var_36 = ((/* implicit */short) 18004444961890957778ULL);
        }
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            var_37 = ((/* implicit */unsigned char) min((((/* implicit */int) ((short) arr_7 [i_1] [(unsigned short)11] [i_11]))), (((int) 3691431626641760615ULL))));
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    {
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 676870554641858076LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_1] [i_1 - 2] [i_1 - 2]))) : (3691431626641760616ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_1] [i_1 + 1] [i_1 + 1])) ? (var_1) : (((/* implicit */int) (unsigned short)6))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) - (1641406265571077683ULL)))));
                        arr_46 [i_1] [i_1] [i_1] [i_11] [i_1] [i_13] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 7ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))))), (((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned char) (signed char)-17)))))))) % (arr_30 [i_11] [i_13])));
                        arr_47 [i_1] [13ULL] [i_12] [13ULL] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_29 [i_13]))))))), (min((((/* implicit */unsigned int) (signed char)11)), (((((/* implicit */_Bool) 3691431626641760616ULL)) ? (1766381990U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                        var_39 += ((/* implicit */short) arr_4 [i_11]);
                        var_40 -= min((arr_44 [i_1] [i_1] [i_1] [i_13]), (((/* implicit */unsigned int) arr_16 [i_13])));
                    }
                } 
            } 
        }
        var_41 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned char) var_2))) ? (max((((/* implicit */unsigned long long int) var_7)), (3691431626641760622ULL))) : (((/* implicit */unsigned long long int) 2528585328U)))) - (((((/* implicit */_Bool) arr_38 [12U] [i_1])) ? (((((/* implicit */_Bool) -2739070301870899001LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) : (14755312447067791008ULL))) : (((/* implicit */unsigned long long int) (+(3697990128671505875LL))))))));
    }
}
