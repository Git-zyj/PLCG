/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41248
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), ((-(((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) : (13969766127333839553ULL)))))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-79)) ? ((~(2922055577U))) : (((/* implicit */unsigned int) (-((~(var_11))))))));
                    }
                } 
            } 
            arr_12 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (((~(arr_5 [(_Bool)1] [i_1] [i_1] [(_Bool)1]))) ^ (((/* implicit */unsigned long long int) var_0)))));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            arr_17 [i_4] = ((/* implicit */signed char) arr_5 [i_4 + 1] [i_4] [i_0] [(short)6]);
            arr_18 [i_4] = ((unsigned long long int) ((var_9) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1])))));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_27 [i_4] [15] [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_5] [i_6]);
                            arr_28 [i_5] [i_7] [(unsigned short)6] [10ULL] [(unsigned short)6] |= ((/* implicit */int) ((((arr_16 [(_Bool)1] [i_6]) < (((/* implicit */unsigned long long int) 2921748198U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12965))) : (((((/* implicit */_Bool) var_7)) ? (arr_22 [5LL] [i_0] [(short)13]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
                            var_14 = ((/* implicit */_Bool) ((unsigned int) var_4));
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_24 [i_0]))));
                            arr_29 [i_4] [i_4] [15] [i_4 + 1] [i_4] = ((/* implicit */unsigned long long int) ((((7271585239524008534ULL) < (((/* implicit */unsigned long long int) 549747425280LL)))) || (((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
            } 
            arr_30 [i_4] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1] [i_4] [i_4])) || (((/* implicit */_Bool) 0ULL)))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_33 [i_8] [i_8] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-19)) < (((/* implicit */int) (_Bool)1)))))) + ((~(var_5)))))) | (((18446744073709551589ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8]))))));
            /* LoopSeq 4 */
            for (int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                var_16 -= ((/* implicit */signed char) (short)-12982);
                arr_36 [i_0] [(unsigned short)2] [i_8] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551589ULL)) ? (((/* implicit */long long int) min((((/* implicit */int) (short)(-32767 - 1))), (-1033928490)))) : (var_0)));
            }
            for (short i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                arr_41 [(_Bool)1] [i_10] [i_10] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_8] [i_0]))) * (((arr_13 [i_10] [i_0]) << (((18446744073709551589ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))))))));
                var_17 = ((/* implicit */long long int) ((unsigned short) arr_8 [(short)3] [(short)3] [i_10] [i_10]));
            }
            for (short i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                arr_46 [i_0] [9U] [i_0] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-12982)) + (((/* implicit */int) (short)30770)))) | (min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((int) (short)12965))))));
                arr_47 [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned short) 10051610846386873760ULL)), (arr_10 [i_0] [i_0] [i_0] [i_8] [i_11])))) ? (((/* implicit */int) ((unsigned short) arr_15 [15ULL]))) : (((/* implicit */int) ((signed char) 18446744073709551579ULL)))));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    var_18 -= ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((((((/* implicit */int) arr_34 [3] [i_8] [i_8] [3])) + (2147483647))) >> (((18446744073709551589ULL) - (18446744073709551578ULL)))))) != (((((/* implicit */unsigned int) ((/* implicit */int) (short)-30797))) ^ (var_3))))), (arr_23 [i_11] [i_11] [i_12] [i_12])));
                    var_19 = ((/* implicit */unsigned short) 3759909444U);
                    arr_50 [i_8] [i_11] [10U] [i_8] = ((/* implicit */short) var_3);
                }
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_20 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((var_5) - (4417956815318950475LL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_0] [i_8])) < (2ULL)))) : (((/* implicit */int) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) & (((/* implicit */int) ((_Bool) (_Bool)1)))));
                var_21 = ((short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 815494315U)))))));
            }
            var_22 = ((/* implicit */short) ((unsigned char) 2858676480U));
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            arr_55 [i_0] [15LL] &= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_11)) : (18446744073709551612ULL)));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned int) (_Bool)1)))));
            /* LoopNest 2 */
            for (short i_15 = 3; i_15 < 12; i_15 += 1) 
            {
                for (signed char i_16 = 4; i_16 < 14; i_16 += 4) 
                {
                    {
                        arr_60 [(_Bool)1] [i_15] [i_15 + 1] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) ((2465249667U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)7680)))))) & (((/* implicit */int) arr_26 [(signed char)15] [i_14] [i_0] [i_14] [i_14]))));
                        arr_61 [i_14] [i_15] [i_15] [i_16] [(short)11] [i_14] = ((/* implicit */signed char) ((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    }
                } 
            } 
            var_24 -= ((/* implicit */unsigned int) ((var_11) != (((/* implicit */int) arr_0 [i_14]))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 4) 
        {
            var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((8598321901386334592ULL), (((/* implicit */unsigned long long int) (signed char)-17))))) ? (((((/* implicit */_Bool) (signed char)16)) ? (max((((/* implicit */unsigned long long int) (signed char)-7)), (3337817395917252384ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-16)))))) : (((/* implicit */unsigned long long int) var_1))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_18 = 0; i_18 < 16; i_18 += 1) 
            {
                var_26 -= ((/* implicit */short) (((+(((/* implicit */int) (signed char)-19)))) ^ (((/* implicit */int) ((short) (signed char)-5)))));
                /* LoopSeq 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (signed char)78))) ? (((long long int) var_4)) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-14040)))))));
                    arr_70 [i_0] [i_17] [i_18] [i_19] &= ((/* implicit */signed char) (-((-(var_5)))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                {
                    arr_74 [i_20] [(short)4] = ((/* implicit */unsigned short) ((1272601948821001068LL) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_17])))));
                    var_28 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) var_1)) : (var_4)));
                    var_29 = ((/* implicit */short) ((17825230588604420239ULL) & (((/* implicit */unsigned long long int) arr_1 [i_20]))));
                    var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 3447102574597555024ULL))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (var_4))))));
                }
                var_31 = ((/* implicit */unsigned long long int) arr_49 [i_17] [(signed char)2]);
            }
            for (int i_21 = 0; i_21 < 16; i_21 += 3) 
            {
                var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) max(((signed char)80), (((/* implicit */signed char) (_Bool)1))))))) * (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_17] [i_0]))) : (3759909424U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) arr_3 [i_21] [i_0])))))))));
                /* LoopSeq 1 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) (signed char)7);
                    var_34 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (short)6481)) : (((/* implicit */int) (unsigned short)1055))))) ? (((/* implicit */int) (short)-17945)) : (((/* implicit */int) arr_56 [i_0] [i_17] [i_0] [1])))));
                    arr_79 [i_0] [i_0] [i_0] [i_0] = 8718600328904613237ULL;
                    arr_80 [i_22] [i_0] = ((/* implicit */signed char) 1021038441922349300ULL);
                }
            }
            var_35 = ((/* implicit */unsigned char) 1023);
            var_36 = ((/* implicit */short) arr_77 [i_0] [i_0] [(unsigned short)6] [i_0] [14U] [i_17]);
        }
    }
    /* vectorizable */
    for (signed char i_23 = 0; i_23 < 11; i_23 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */short) -1629409707);
        arr_84 [(unsigned short)4] [i_23] = ((/* implicit */short) ((arr_65 [14LL] [i_23] [i_23] [i_23]) < (var_11)));
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)124)) * (((/* implicit */int) arr_53 [3LL]))))) != ((+(var_4)))));
    }
    for (signed char i_24 = 0; i_24 < 11; i_24 += 4) /* same iter space */
    {
        var_39 = ((/* implicit */short) var_7);
        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (-((-(((/* implicit */int) var_6)))))))));
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (+(9704460784165954595ULL))))));
    }
    var_42 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_25 = 0; i_25 < 19; i_25 += 3) 
    {
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            {
                var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((unsigned long long int) ((_Bool) arr_88 [i_25]))))));
                var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (_Bool)0))));
            }
        } 
    } 
}
