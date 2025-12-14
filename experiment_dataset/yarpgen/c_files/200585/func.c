/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200585
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_12))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2097151LL) + (((/* implicit */long long int) 19U))))) ? (((/* implicit */long long int) ((67108863) >> (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (9223372036854775807LL) : (9223372036854775783LL)))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_21 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [(_Bool)1]))));
            var_22 = ((/* implicit */signed char) arr_0 [i_0]);
        }
        for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
        {
            var_23 -= ((/* implicit */signed char) (-(9223372036854775805LL)));
            var_24 = ((/* implicit */signed char) var_8);
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    var_26 -= ((/* implicit */int) (_Bool)1);
                    var_27 = ((/* implicit */unsigned short) ((_Bool) arr_12 [i_5 - 1] [i_5 + 2] [i_5 + 2]));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    arr_17 [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-125)) % (((/* implicit */int) (unsigned short)65530))));
                    arr_18 [i_6 - 1] [i_4] [i_0] [i_3] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) < (var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65526)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_9 [i_0])) : (arr_5 [i_0] [i_3] [i_4]))));
                    arr_19 [i_4] [i_3] = ((/* implicit */unsigned char) -67108877);
                    var_28 = ((/* implicit */unsigned int) ((arr_6 [i_6 - 1] [i_6] [i_6 - 1]) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6 - 1] [i_6])))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_22 [i_7] [i_3] [i_3] [i_7] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 3; i_8 < 15; i_8 += 4) 
                    {
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [8LL] [i_0] [i_8])) ? (((/* implicit */long long int) arr_24 [i_0] [i_3] [i_4] [0ULL] [i_0])) : (var_7))))));
                        arr_26 [i_0] [i_3] [i_4] [i_7] [i_7] = ((/* implicit */int) ((unsigned char) -2097165LL));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((unsigned char) ((((/* implicit */_Bool) 1152921504606846976LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)21916)))))));
                        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)50179))))) % (arr_12 [i_3] [i_3] [i_4])));
                        arr_27 [i_3] [i_3] [i_7] [i_7] [i_4] = ((/* implicit */_Bool) ((unsigned int) 14ULL));
                    }
                    arr_28 [i_0] [i_7] [i_4] [16ULL] = ((/* implicit */signed char) ((unsigned int) ((18446744073709551587ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_32 = ((/* implicit */_Bool) (unsigned char)255);
                        arr_31 [i_0] [i_0] [i_4] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7] [i_3] [i_4] [i_7] [i_9]))) ^ (var_5)));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((-1) + (25)))));
                    }
                    for (unsigned int i_10 = 4; i_10 < 14; i_10 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((var_16) != (((/* implicit */int) ((((/* implicit */int) arr_14 [i_7])) > (((/* implicit */int) arr_10 [i_4])))))));
                        var_35 |= ((/* implicit */signed char) ((long long int) (+(arr_29 [i_0] [i_0] [i_3] [i_4] [i_0] [i_10] [i_10 - 2]))));
                    }
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        var_36 = ((unsigned int) arr_13 [(unsigned char)7] [i_7] [i_3] [i_0]);
                        var_37 = ((/* implicit */unsigned long long int) (unsigned short)3);
                    }
                    for (unsigned short i_12 = 2; i_12 < 15; i_12 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((~(1920LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))))))));
                        arr_40 [i_0] [i_3] [(signed char)16] [i_7] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)227))));
                    }
                    arr_41 [i_0] [i_7] [i_4] [i_7] = ((/* implicit */unsigned int) var_4);
                }
                var_39 = ((((/* implicit */_Bool) ((var_3) >> (((2218089750U) - (2218089737U)))))) ? (arr_21 [i_0] [i_3] [i_3] [i_3] [i_4]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_32 [i_0] [i_0] [i_3] [i_4] [i_0] [i_4])) : (arr_21 [i_0] [(unsigned short)0] [i_3] [i_3] [i_4]))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                var_40 = ((/* implicit */long long int) min((var_40), (4882376040841704074LL)));
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        arr_48 [i_0] [i_3] [i_13] [i_13] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0] [i_13]))));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_15])) ? (arr_39 [i_0] [(signed char)11] [i_3] [i_13] [i_14] [i_14] [i_15]) : (((/* implicit */int) arr_1 [i_0] [i_3]))));
                    }
                    var_42 = ((/* implicit */int) ((unsigned int) (unsigned short)65521));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_43 = ((/* implicit */long long int) arr_7 [i_16]);
                    arr_53 [i_0] [i_16] [i_0] [15ULL] = ((/* implicit */unsigned char) (-(arr_23 [i_0] [i_3] [i_3] [i_3] [i_0] [i_16] [i_16])));
                }
            }
            for (long long int i_17 = 2; i_17 < 13; i_17 += 4) 
            {
                var_44 = ((/* implicit */int) ((unsigned long long int) var_13));
                arr_58 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)28);
                var_45 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_0)));
                arr_59 [i_0] [i_3] [i_17] = ((/* implicit */unsigned long long int) var_18);
            }
            /* LoopSeq 2 */
            for (unsigned short i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                arr_62 [i_0] [i_18] = ((/* implicit */signed char) 18446744073709551594ULL);
                var_46 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2084549781417965090LL))));
            }
            for (unsigned long long int i_19 = 3; i_19 < 14; i_19 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_20 = 2; i_20 < 14; i_20 += 4) 
                {
                    var_47 = ((/* implicit */unsigned int) var_11);
                    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-1364373345511085262LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)54)) << (((((/* implicit */int) (unsigned char)209)) - (187)))))) : (((unsigned int) var_14))));
                }
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_49 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_45 [i_0] [14LL] [(unsigned char)14] [i_0] [0U]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 3; i_22 < 16; i_22 += 4) 
                    {
                        var_50 = ((/* implicit */unsigned int) (~(var_16)));
                        var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) var_18))));
                    }
                }
                var_52 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_19 + 3] [i_3])) ? (arr_15 [i_19 + 1] [i_19 - 1] [i_19 + 1]) : (arr_15 [i_19 - 1] [i_19 - 2] [i_19 + 3])));
                var_53 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) var_7)) ? (485269793U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65471))))) : (((/* implicit */unsigned int) (-(var_1))))));
                arr_74 [i_0] = ((/* implicit */unsigned char) (((-(196608ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3809697506U))))));
            }
            var_54 = (+(((2097168LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned long long int i_23 = 4; i_23 < 14; i_23 += 4) 
        {
            arr_78 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -1LL);
            var_55 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_6)))) == (((/* implicit */int) (signed char)-7))));
        }
        arr_79 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_56 = ((/* implicit */int) ((min((36028788429029376LL), (-3176479885815136107LL))) <= (((((((/* implicit */_Bool) (unsigned short)19)) ? (2097183LL) : (-2097151LL))) << (((/* implicit */int) var_18))))));
}
