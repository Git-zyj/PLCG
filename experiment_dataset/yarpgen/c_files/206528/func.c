/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206528
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_7 [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_1 + 1] [i_1 - 1]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2783828550U)) ? (((/* implicit */long long int) var_14)) : (arr_3 [i_1 - 1]))))))) ? (min((((((/* implicit */_Bool) 12U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_3 [i_0]))), (((/* implicit */long long int) ((signed char) arr_1 [i_1 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_1 - 1] [i_1 - 1] [i_1]), (arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1])))))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (signed char)-36)), (max((((/* implicit */unsigned long long int) -1514594036)), (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) (signed char)14)))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 + 1])), (2831763930280932865ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)2])) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 1])) + (((/* implicit */int) arr_0 [(unsigned char)7])))) : (((/* implicit */int) arr_0 [i_1 - 1]))))) : (((((arr_3 [1ULL]) & (((/* implicit */long long int) ((/* implicit */int) var_17))))) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) >= (((/* implicit */int) arr_8 [i_2])))))) / (((((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_9 [i_2]) : (arr_9 [i_2]))) >> (((((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (unsigned char)243)))) + (90)))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) * (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) arr_9 [i_2])) / (var_12)))))));
    }
    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 2) /* same iter space */
    {
        arr_13 [0U] = ((/* implicit */unsigned char) min((arr_8 [i_3 + 1]), (arr_11 [i_3 + 1] [i_3 - 2])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            arr_16 [i_3 - 1] [i_3 - 3] [i_4] = ((/* implicit */unsigned char) ((arr_4 [i_3 - 3] [i_3 - 1] [i_3 - 1]) ? (((/* implicit */int) ((short) 4294967295U))) : (((((/* implicit */_Bool) arr_9 [(signed char)6])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_12 [i_3] [i_4]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                arr_20 [i_3 - 1] [i_5] [i_3] = ((/* implicit */signed char) (-(((arr_1 [2ULL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4])))))));
                var_21 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_3 - 3] [(signed char)3] [i_5]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    arr_23 [i_3 - 2] [i_4] [i_5] [i_6] = arr_3 [i_3];
                    var_22 *= ((/* implicit */unsigned long long int) ((arr_17 [i_3 - 3] [5ULL] [i_5] [0LL]) << ((((+(((/* implicit */int) (_Bool)1)))) - (1)))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) : (27U)));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((arr_22 [(short)2] [i_5] [(short)2] [i_3 - 2]) + (((arr_1 [i_3]) & (((/* implicit */unsigned long long int) var_14))))))));
                    arr_24 [(unsigned char)2] [i_4] [i_5] [i_6] |= ((unsigned long long int) ((unsigned char) arr_21 [i_3 - 3] [i_3 - 3] [i_5] [8]));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */_Bool) arr_9 [i_7]);
                            var_26 = ((/* implicit */signed char) var_7);
                            var_27 = ((/* implicit */long long int) arr_14 [i_7] [i_3]);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_29 [i_3] [i_4] [i_5] [i_7] [(short)0])) ? (((/* implicit */int) (short)-15760)) : (((/* implicit */int) (unsigned char)208)))) / (201326592))))));
                        }
                    } 
                } 
                arr_30 [i_4] [i_5] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3 - 2] [i_4] [i_5] [i_3 - 2]))) : (((7978282143777805595ULL) % (((/* implicit */unsigned long long int) 23U)))));
            }
            for (unsigned long long int i_9 = 2; i_9 < 7; i_9 += 1) 
            {
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_27 [(unsigned char)8] [i_3] [i_3] [i_3]))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        {
                            arr_40 [i_3] [i_3] [i_9] [i_10] [i_11] = ((/* implicit */int) ((arr_9 [i_3 - 2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_3 - 3] [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_9 + 2])))));
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((((/* implicit */int) arr_5 [i_3 - 3])) + (((/* implicit */int) arr_0 [i_3])))) - (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_15 [i_3 - 1])))))))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 3; i_12 < 9; i_12 += 3) 
        {
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [i_3])) << (((arr_39 [i_3] [i_3] [i_3] [5U] [i_3 - 3] [i_3] [i_3]) - (769541513)))))) ? (((/* implicit */unsigned long long int) arr_38 [i_12] [i_12] [i_12 - 3] [(_Bool)0] [i_12 - 1] [i_12 - 2])) : (((((/* implicit */_Bool) arr_41 [i_3] [i_12 + 2] [i_12 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_29 [i_3 - 2] [i_3 - 2] [i_12 + 2] [i_3] [i_3])))));
            arr_44 [i_12] [8U] = ((/* implicit */unsigned long long int) ((signed char) arr_26 [i_3 - 1] [i_12 - 1]));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_31 [i_3] [i_3]) / (((/* implicit */unsigned int) arr_39 [i_12 - 3] [i_12 - 3] [i_12] [i_12 - 3] [i_12] [i_12 - 1] [2ULL]))))) <= (arr_27 [3LL] [3LL] [i_3 - 2] [i_3])));
            arr_45 [(unsigned char)7] [(unsigned char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 - 3]))) : (arr_36 [i_3 + 1] [2ULL] [i_12 + 1] [i_12 + 1])));
        }
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            arr_48 [i_3] [i_3] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_28 [i_3] [i_3] [i_3] [i_3 - 1] [i_13] [i_3 + 1])) : (((/* implicit */int) (short)-5165))))), (max((((/* implicit */unsigned long long int) 4294967281U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25046))) + (var_12))))));
            var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_13] [i_3 - 1] [i_3]) ? (11005035816226810883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 - 2] [i_3 - 3] [i_13])))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -2231328733576763893LL)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)84))))))) : (var_11)));
        }
    }
    /* vectorizable */
    for (unsigned char i_14 = 3; i_14 < 10; i_14 += 2) /* same iter space */
    {
        arr_51 [i_14 + 1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_11 [i_14 + 1] [i_14 - 2]))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            for (unsigned long long int i_16 = 1; i_16 < 7; i_16 += 1) 
            {
                for (int i_17 = 3; i_17 < 9; i_17 += 3) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)76))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9963))) : (12560800199380896941ULL)))));
                        arr_61 [i_14 + 1] [(short)1] [i_16] = ((/* implicit */unsigned short) ((unsigned int) arr_9 [i_14 - 3]));
                        var_35 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))) | (((((/* implicit */unsigned long long int) arr_3 [i_14 - 2])) + (var_0)))));
                        var_36 = ((/* implicit */short) (~(arr_27 [0U] [8] [i_14 + 1] [i_17 + 2])));
                        arr_62 [(unsigned short)0] [i_15] [1U] [1U] = ((/* implicit */int) 4294967286U);
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) arr_37 [i_14] [6ULL] [i_14 - 2] [i_14 - 3] [i_14 - 1] [i_14 - 2])) : (((/* implicit */int) arr_37 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_14 - 2]))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_18 = 2; i_18 < 11; i_18 += 1) 
    {
        for (unsigned long long int i_19 = 2; i_19 < 13; i_19 += 1) 
        {
            {
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (-(((unsigned int) arr_8 [i_19 - 2])))))));
                arr_68 [i_18 + 2] [(unsigned char)8] [i_19 + 1] = ((/* implicit */signed char) arr_65 [i_19]);
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned long long int) var_13);
    var_40 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) var_2))))) > (min((max((((/* implicit */unsigned long long int) var_14)), (10599275987906327239ULL))), (((var_0) - (var_1)))))));
}
