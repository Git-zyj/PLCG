/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192810
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
    var_17 |= ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (unsigned short)50840)) : (((/* implicit */int) (unsigned short)0))))) * (3158127046U))) | (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */int) ((var_7) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
            arr_7 [(unsigned short)9] [i_0] [i_1] = ((/* implicit */unsigned int) var_0);
            var_18 -= ((((/* implicit */_Bool) (signed char)-125)) ? (arr_2 [i_1] [i_1 + 1]) : (arr_2 [i_1] [i_1 - 2]));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [(_Bool)1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))))))) > (((unsigned long long int) var_3)))))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-25807)) + (2147483647))) << (((var_6) - (3403890869U)))))) / (arr_2 [i_0] [i_2])));
                        arr_15 [i_3] = ((/* implicit */unsigned long long int) (+((-(var_6)))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 1964721737811783799ULL))) || (((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL)))));
                        arr_16 [i_4] [i_0] [i_2 - 1] [i_0] = ((/* implicit */unsigned int) (unsigned char)248);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                var_22 = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0]);
                arr_19 [i_0] [i_5] = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) (short)32763)))));
                var_23 = ((/* implicit */short) ((arr_14 [i_0] [i_2 - 2] [i_5]) >> (((((((/* implicit */_Bool) (unsigned char)255)) ? (var_15) : (((/* implicit */unsigned long long int) 4294967295U)))) - (14089458377449771412ULL)))));
            }
            arr_20 [i_0] [i_0] [i_2] = ((/* implicit */signed char) arr_9 [i_0] [i_2] [i_2]);
            var_24 = ((/* implicit */_Bool) ((((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) 14899474416527016138ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) 3209108)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)-6973))))));
        }
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)151)) * (((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)7] [i_0]))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    {
                        arr_29 [i_6] = ((/* implicit */unsigned int) arr_17 [i_0]);
                        arr_30 [i_0] [i_6] [i_7] [i_0] [i_8] = (unsigned short)5;
                        arr_31 [i_0] [i_0] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)125))));
                        arr_32 [i_0] [i_0] [(signed char)2] [(signed char)12] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_0] [i_6] [i_7])) != (((/* implicit */int) arr_27 [i_6] [i_6] [i_0]))));
                        arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(4294967295U)));
                    }
                } 
            } 
        } 
        arr_34 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)106)) ? (3158127046U) : (((((/* implicit */_Bool) (signed char)119)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_10 = 4; i_10 < 22; i_10 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_10] [i_10])) ? (arr_37 [i_9] [i_9] [i_10 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17774)))));
            var_26 = ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (arr_36 [i_10 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))));
            var_27 -= ((/* implicit */signed char) (~(((/* implicit */int) (short)17787))));
        }
        /* vectorizable */
        for (unsigned short i_11 = 4; i_11 < 22; i_11 += 2) /* same iter space */
        {
            var_28 = (((+(18446744073709551607ULL))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)248))))));
            arr_44 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_11 - 3] [i_11 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (arr_37 [i_11 - 3] [i_11 - 4] [(unsigned char)17])));
        }
        for (unsigned short i_12 = 4; i_12 < 22; i_12 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-23303)), (62U)))), (min((min((12512053754211660113ULL), (((/* implicit */unsigned long long int) (short)-23289)))), (((/* implicit */unsigned long long int) arr_40 [i_9] [i_9] [i_9])))))))));
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))) < (4294967279U))) ? (((/* implicit */unsigned long long int) var_1)) : (17ULL)))));
            var_31 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_46 [i_9])) <= (((/* implicit */int) arr_46 [i_9])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (signed char)-99))))) ? (((/* implicit */int) arr_45 [i_9] [i_12 + 2] [i_12 + 2])) : (((/* implicit */int) arr_43 [i_12] [i_12 - 3])))))));
        }
        for (unsigned short i_13 = 4; i_13 < 22; i_13 += 2) /* same iter space */
        {
            var_32 = (-(((min((((/* implicit */unsigned long long int) (signed char)81)), (var_15))) >> (((((/* implicit */int) (signed char)127)) - (99))))));
            arr_49 [i_9] = ((/* implicit */signed char) (short)17787);
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    for (short i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        {
                            arr_58 [i_16] [i_16] [i_16] [i_9] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_51 [i_13 - 1] [i_16] [i_9]))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_16) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            }
            for (unsigned short i_17 = 1; i_17 < 20; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_66 [i_9] [i_9] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_19] [i_19]))) * (var_6))) > ((-(4294967279U)))))) + ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)127)) && (((/* implicit */_Bool) 31744U)))))))));
                            var_35 = 3954185047U;
                            var_36 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_38 [i_9] [i_9])) : (((/* implicit */int) arr_60 [i_19] [(unsigned short)12] [i_9]))))), (min((((/* implicit */unsigned int) (unsigned char)181)), (1U)))));
                        }
                    } 
                } 
                arr_67 [i_17] [i_9] [i_9] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-103)), ((short)32767)))) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_54 [i_17 + 2] [i_17] [(unsigned short)14] [(short)16]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    arr_72 [i_13 - 1] [i_9] [i_17] [i_20] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) || ((_Bool)1)));
                    arr_73 [i_9] [i_9] [(unsigned char)9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32760))) == (var_8)));
                    arr_74 [i_9] [(short)12] [(short)12] [(short)12] [i_9] = (i_9 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32753))) + (arr_64 [i_13 - 3] [i_13] [i_13] [i_13 - 3] [i_13])))) ? (((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_46 [i_9])) - (220))))) : (((/* implicit */int) arr_54 [i_17] [i_17 - 1] [i_17] [i_17 + 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32753))) + (arr_64 [i_13 - 3] [i_13] [i_13] [i_13 - 3] [i_13])))) ? (((((/* implicit */int) var_2)) << (((((((/* implicit */int) arr_46 [i_9])) - (220))) + (166))))) : (((/* implicit */int) arr_54 [i_17] [i_17 - 1] [i_17] [i_17 + 1])))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_37 = (~(arr_65 [(signed char)10] [i_13] [i_17 + 1] [i_17 + 1] [(signed char)10] [i_13]));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)122)) | (((/* implicit */int) (unsigned char)115))));
                    }
                }
            }
            for (unsigned int i_22 = 0; i_22 < 24; i_22 += 1) 
            {
                var_39 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3321479275U)))))));
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_86 [i_24] [i_9] [i_22] [i_22] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (+(3434280089888910732ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-60), ((signed char)-110))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (4294935543U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31254)))))) ? (4294935543U) : (min((((/* implicit */unsigned int) (unsigned char)97)), (3321479282U)))))));
                            var_40 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_84 [i_13 - 2] [i_22] [(signed char)6] [i_22] [(unsigned char)4])) ? (((/* implicit */int) arr_84 [i_13 + 1] [i_13 + 1] [i_24] [i_13 + 1] [i_24])) : (((/* implicit */int) (unsigned char)129)))), (((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 958517664U)) <= (2724195186994084055ULL)))) : (((/* implicit */int) ((signed char) (signed char)-103)))))));
                            var_41 = (i_9 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [i_9] [i_9] [i_9])) + (-2147483635)))) <= (var_7))))) % (min((((/* implicit */unsigned int) ((_Bool) var_1))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2841748770U)))))))) : (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [i_9] [i_9] [i_9])) - (-2147483635)))) <= (var_7))))) % (min((((/* implicit */unsigned int) ((_Bool) var_1))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2841748770U))))))));
                        }
                    } 
                } 
            }
            var_42 = ((/* implicit */int) arr_76 [i_9] [i_9] [i_13] [(unsigned short)11]);
        }
        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_68 [i_9] [i_9] [i_9] [i_9]), (arr_68 [i_9] [(unsigned char)5] [i_9] [i_9])))) ? (min((var_16), (((/* implicit */unsigned int) arr_68 [i_9] [i_9] [2U] [i_9])))) : (((/* implicit */unsigned int) min((arr_68 [i_9] [i_9] [i_9] [i_9]), (arr_68 [i_9] [i_9] [i_9] [i_9]))))));
    }
}
