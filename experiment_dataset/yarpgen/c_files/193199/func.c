/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193199
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((10806992329934929324ULL) - ((~(68169720922112ULL)))));
            arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((var_9) - (8656420907632900734ULL)))))) ? (((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) arr_0 [i_1 + 3]))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) -2950107169421636890LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0] [i_2]))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_2 [i_0]))) == (((/* implicit */int) arr_10 [4LL] [i_2 + 2]))));
            }
            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_14 [i_4] [i_2 + 1] = var_11;
                arr_15 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) & (7639751743774622290ULL)));
            }
            for (unsigned long long int i_5 = 1; i_5 < 6; i_5 += 4) 
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2 + 1])) == (((/* implicit */int) var_8)))))));
                arr_18 [i_5] [(signed char)5] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) == ((~(((/* implicit */int) arr_9 [i_5] [(unsigned short)7]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_21 [i_0] [i_5] [0ULL] [0ULL] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)-12))))) / (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_17 = ((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0]);
                }
                for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_2 + 1]))) : (arr_8 [i_2 + 2])));
                    arr_25 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                }
            }
            arr_26 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1632088174929600998ULL)) ? (-6989422029913337677LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_24 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_24 [i_2 + 2] [i_2 + 1] [9LL] [i_2 - 1]))));
        }
        for (long long int i_8 = 3; i_8 < 7; i_8 += 1) 
        {
            var_20 -= ((/* implicit */short) var_6);
            arr_31 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-499973401163826602LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))));
            var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) 12759540343288005491ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20922))) : (((((/* implicit */_Bool) 15351685790352142272ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            arr_32 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) min((9223372036854775807LL), (((/* implicit */long long int) (signed char)-101))));
        }
        arr_33 [i_0] [i_0] = var_0;
    }
    for (short i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_12 [(short)3] [i_9] [i_9] [(short)6])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_9] [(signed char)8]))) : (arr_12 [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_9] [(short)0]))))))));
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            var_23 = ((/* implicit */_Bool) (((~(-2950107169421636900LL))) + (min((((var_12) - (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9] [i_9] [i_9]))))), (arr_27 [i_9] [i_9] [i_9])))));
            arr_40 [i_9] [i_10] = ((/* implicit */signed char) var_8);
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(arr_12 [i_9] [i_9] [i_9] [i_9]))))));
            var_25 = ((/* implicit */short) 5011064869175634331ULL);
        }
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            arr_44 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_9])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9])))));
            arr_45 [i_9] [i_11] = ((arr_12 [i_9] [i_9] [i_9] [i_9]) == (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23923)) / (((/* implicit */int) var_1))))));
            arr_46 [i_9] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_9] [i_11])) ? (((/* implicit */int) arr_22 [i_9] [i_11])) : (((/* implicit */int) arr_22 [i_9] [i_9]))));
            arr_47 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-90)) + (((/* implicit */int) (_Bool)1))));
            arr_48 [i_11] [(short)2] [i_11] &= ((/* implicit */signed char) (+(arr_8 [i_9])));
        }
        var_26 = ((/* implicit */_Bool) arr_39 [i_9] [i_9]);
        arr_49 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_23 [i_9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (11305697365469587863ULL)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)20046)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) == (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    }
    for (short i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
    {
        arr_54 [i_12] = ((/* implicit */signed char) var_12);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            arr_57 [i_13] [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_12])) == (((/* implicit */int) var_4))));
            var_27 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (arr_8 [i_12])));
            arr_58 [i_12] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_12]))) == (arr_8 [i_12])));
        }
    }
    var_28 = ((/* implicit */unsigned short) (short)2);
    var_29 = ((/* implicit */signed char) (short)-4342);
}
