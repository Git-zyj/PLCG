/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235666
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 183489377496820430ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_13)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))))) : (var_1)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) arr_0 [i_0]))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (short)-4))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (short)17)) ? (((/* implicit */int) (short)17955)) : (((/* implicit */int) var_14))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))))) ? (((arr_7 [i_1]) ? (((/* implicit */int) (short)17972)) : (((/* implicit */int) arr_7 [i_1])))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_1]))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)235))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) arr_5 [i_1])))) : ((((_Bool)0) ? (((/* implicit */int) (short)-17973)) : (((/* implicit */int) (short)4))))));
        }
        arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17960)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)253))))) ? (((((/* implicit */_Bool) arr_8 [i_1 + 2])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)4994)))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_25 = ((/* implicit */signed char) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_3] [i_4]))) : (arr_15 [i_3] [i_3] [i_4])));
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 16; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_23 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_6])));
                        var_27 |= ((/* implicit */signed char) ((arr_7 [i_6]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_4]))));
                        arr_24 [i_5] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_9 [i_5 - 2] [i_5 - 2] [i_6])) : (((/* implicit */int) var_14))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17911)) ? (((/* implicit */int) (short)17911)) : (((/* implicit */int) (signed char)24))));
                            arr_28 [i_4] [i_4] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_9 [i_5 + 1] [i_7 - 1] [i_7 - 1]))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : (arr_21 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 + 1])));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)202)) ? (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (unsigned short)65521)))) : (((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))));
                            arr_29 [i_5] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)33201)) ? (((/* implicit */int) (short)-4368)) : (((/* implicit */int) var_4))));
                        }
                        arr_30 [i_3] [i_5] [i_5 - 1] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_5 [i_5]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        {
                            arr_37 [i_3] [i_4] [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) (short)-17971)) ? (arr_33 [i_3] [i_4] [i_8] [i_8] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_4] [i_8] [i_3] [i_10])) ? (((/* implicit */int) (unsigned short)65504)) : (((/* implicit */int) (short)-19741))));
                            arr_38 [i_3] [i_3] [i_3] [i_3] [i_3] [i_8] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_10])) ? (((/* implicit */int) (short)-17912)) : (((/* implicit */int) (signed char)-32))));
                            var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28335)) ? (((/* implicit */int) var_15)) : (((var_14) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        {
                            arr_45 [i_8] [i_8] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (var_2)))) ? (((((/* implicit */_Bool) arr_9 [i_4] [i_11] [i_4])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) arr_36 [i_3] [i_8] [i_3] [i_3])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_12))))));
                            var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17955)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-17972))));
                            var_34 *= ((/* implicit */signed char) ((var_14) ? (1818475441407256174ULL) : (arr_21 [i_3] [i_3] [i_3] [i_3])));
                            arr_46 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17888)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65504))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_35 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-22318)) ? (((/* implicit */int) (short)-17956)) : (((/* implicit */int) var_6))));
                    arr_50 [i_4] [i_4] [i_4] |= ((((/* implicit */_Bool) (short)-17895)) ? (16628268632302295453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_4] [i_4] [i_4] [i_4]))));
                }
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (2097151ULL) : (((/* implicit */unsigned long long int) -2458677981987842383LL))));
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (9410937243633736569ULL) : (((/* implicit */unsigned long long int) var_7))));
            }
            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_3] [i_4])))));
        }
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 13; i_14 += 3) 
        {
            for (unsigned short i_15 = 2; i_15 < 15; i_15 += 3) 
            {
                {
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4987)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_15 - 2]))) : (arr_15 [i_14 + 1] [i_15 + 1] [i_15 + 1])));
                    arr_57 [i_3] [i_14] [i_3] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (2703428510U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180)))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        arr_62 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-17907)) : (((/* implicit */int) arr_59 [i_16]))))) ? (((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (unsigned short)65504)) : (((/* implicit */int) (short)17968)))) : (((((/* implicit */_Bool) 3614894226027509121ULL)) ? (((/* implicit */int) (short)-17956)) : (((/* implicit */int) (short)17971))))));
        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27834))) : (4315622417583875094LL)))) ? (((((/* implicit */_Bool) arr_60 [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (2048776327208712349ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_58 [i_16])))) ? (((((/* implicit */_Bool) (unsigned short)39441)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_60 [i_16] [i_16])))) : (((/* implicit */int) arr_60 [i_16] [i_16]))))))))));
    }
    var_41 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (_Bool)1))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17)))))))));
}
