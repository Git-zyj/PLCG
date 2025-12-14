/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228115
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
    var_18 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned int) arr_3 [i_1] [i_3] [i_4]);
                                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [1U] [i_1] [i_1] [i_1])) ? (max((var_12), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) (~(var_17)))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_1] [i_2] [i_4] [i_4]))))));
                                var_21 = ((/* implicit */unsigned char) max((((/* implicit */short) ((unsigned char) (unsigned short)49940))), (var_3)));
                            }
                        } 
                    } 
                } 
                var_22 &= 0ULL;
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                    {
                        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) arr_3 [5LL] [i_1] [(unsigned char)1])) : (((/* implicit */int) (unsigned short)15595))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (signed char)-13))))) : (((((/* implicit */_Bool) 0ULL)) ? (arr_8 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13)))))));
                        var_24 = ((/* implicit */int) arr_11 [i_0] [12ULL] [i_5] [i_5] [i_6]);
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) arr_0 [i_1 + 1]);
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_23 [i_7] [i_7] [i_6] [i_1 + 1] [i_0 + 2] [(short)18] [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_22 [i_1 - 1] [i_0 + 1] [i_0] [i_0]))));
                            var_27 = ((unsigned char) var_7);
                        }
                        var_28 = ((/* implicit */unsigned long long int) (~(arr_21 [i_1 - 1] [i_5] [i_1] [i_1 + 1])));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                    {
                        var_29 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_17)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_5] [i_5]))))) : (var_11)));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_27 [(unsigned char)8] [8] [i_5] [i_9])) ^ (((/* implicit */int) (short)32767)))))));
                            var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_9 + 1] [i_0 - 1])) ? (((/* implicit */int) (short)20459)) : (((/* implicit */int) (short)29))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (~(3485567961U))))));
                            var_33 = ((/* implicit */unsigned char) var_16);
                        }
                        var_34 = ((/* implicit */unsigned char) 10325462726288599446ULL);
                    }
                    var_35 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0 + 1])) - (((/* implicit */int) (signed char)-13))));
                }
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_12 [(short)8] [i_0] [i_10] [18] [i_0 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_12 [(_Bool)1] [6] [i_10] [(unsigned char)8] [i_0 + 2] [i_1 + 1])) : (((/* implicit */int) arr_12 [20ULL] [i_1] [i_0] [i_11] [i_0 - 1] [i_1 + 1]))))));
                                var_37 = ((/* implicit */long long int) ((unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (var_12))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_13 = 3; i_13 < 19; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            {
                                var_38 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_13 + 3] [i_1] [i_0 + 1] [i_1 - 1]))))) ? ((-(6627002075142176472LL))) : (((/* implicit */long long int) (~(((/* implicit */int) max((arr_7 [i_13]), (((/* implicit */unsigned short) arr_20 [i_0] [i_1] [i_13] [i_14])))))))));
                                var_39 = ((/* implicit */unsigned short) var_13);
                                var_40 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_20 [i_14] [i_13 + 1] [i_10] [i_1 + 1])), (((unsigned long long int) arr_20 [i_14] [i_10] [i_1] [i_0]))));
                                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49940)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [(_Bool)1] [i_10] [i_13] [3U]))) : (var_1)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_10] [(unsigned char)8] [i_13] [10ULL]))) : (288230376151711743ULL)))))) ? (((((/* implicit */_Bool) arr_35 [i_0 - 1] [i_1] [i_1 + 1] [i_13 - 1])) ? ((+(((/* implicit */int) (signed char)-25)))) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (signed char)-16))));
                                var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10])) ? (((/* implicit */long long int) 4294967295U)) : (6627002075142176472LL)))) ? (((unsigned int) 420874565426671562ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 14934310456472815723ULL))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_14] [i_13] [i_1] [14ULL]))) >= (arr_41 [i_0] [i_1] [i_10] [i_13] [i_14])))), (var_15))))));
                            }
                        } 
                    } 
                }
                var_43 = ((((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((int) arr_46 [2LL] [i_1] [i_1] [i_1 - 1] [(short)3]))) : (((((/* implicit */unsigned long long int) -6627002075142176472LL)) ^ (15023952818430040328ULL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 13; i_15 += 2) 
    {
        for (signed char i_16 = 2; i_16 < 11; i_16 += 3) 
        {
            {
                var_44 = ((/* implicit */unsigned char) (signed char)25);
                var_45 = ((/* implicit */unsigned int) min((var_45), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_15] [i_16])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_15] [6ULL] [i_15] [i_16] [i_15] [i_16]))))) : (min((1078772403437158991ULL), (arr_37 [i_15])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_16 - 2] [2U] [i_15]))) ^ (var_1))) : (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_2)))))))))));
                var_46 = ((/* implicit */long long int) arr_27 [i_15] [16LL] [i_15] [i_16]);
                var_47 -= ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) arr_20 [21ULL] [i_16] [i_16 + 1] [i_16])), ((~(10374920035947886130ULL)))))));
            }
        } 
    } 
}
