/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216125
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((_Bool) arr_1 [i_2 - 1] [i_2 + 2]));
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2 - 1]))));
                    arr_10 [i_0] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2] [i_2 + 2] [i_2])) && ((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 2]))))));
                    var_13 -= ((((/* implicit */int) (unsigned short)11574)) % ((-(((/* implicit */int) (signed char)-11)))));
                }
            } 
        } 
        var_14 = (unsigned char)227;
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (unsigned char)191)) : (arr_2 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        arr_16 [2LL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)45037)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))));
        var_15 ^= ((/* implicit */unsigned int) (signed char)120);
    }
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_19 [6ULL] |= ((/* implicit */unsigned int) arr_18 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 16; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        arr_28 [i_6] [i_6] [i_5] [i_4] [i_6] = (((-(((/* implicit */int) (signed char)-17)))) & ((-(((/* implicit */int) arr_7 [i_7 + 1] [i_6] [i_5 - 3])))));
                        arr_29 [i_6] [i_6] = ((/* implicit */_Bool) 1073741824U);
                    }
                    for (unsigned int i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                        {
                            arr_36 [i_4] [i_5 + 2] [i_4] [i_6] [i_4] [i_4] [i_6] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_33 [i_6])))) >= (((((/* implicit */_Bool) arr_21 [(short)7] [(short)7] [(unsigned short)4])) ? (((/* implicit */int) arr_20 [i_4] [i_4] [i_8])) : (((/* implicit */int) (unsigned char)42))))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_8 - 1] [i_5])) + (2147483647))) >> (((((/* implicit */int) var_4)) - (209))))))));
                            arr_37 [i_4] [i_4] [i_6] [i_6] [13U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) arr_21 [i_4] [(short)2] [(short)2])) : (((/* implicit */int) (signed char)120))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                        {
                            arr_40 [i_4] [i_5] [i_5] [i_5] [i_6] [i_6] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4] [i_8 - 1])) || (((/* implicit */_Bool) arr_27 [i_10] [i_6] [17ULL]))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_4] [i_8 + 2] [i_10] [i_10])))))));
                        }
                        arr_41 [i_4] [i_4] [i_4] [i_4] [i_6] = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 - 2] [i_5 - 3]))) / (min((var_9), (((/* implicit */unsigned long long int) var_8)))))));
                    }
                    var_18 = ((/* implicit */long long int) arr_39 [i_4] [i_4] [i_5] [i_6] [i_6]);
                    var_19 &= ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_30 [i_5])) : (arr_4 [i_4] [(unsigned char)2] [(unsigned short)21] [i_4]))))) != (((/* implicit */int) ((((unsigned long long int) -398394009043444342LL)) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        arr_44 [i_11] = ((/* implicit */long long int) ((((((/* implicit */int) var_4)) * (((/* implicit */int) (signed char)-60)))) - (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) var_5))))));
        /* LoopSeq 1 */
        for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            arr_47 [i_11] [i_11] [i_12] = ((/* implicit */unsigned int) ((18446744073709551615ULL) - (arr_45 [i_11] [i_11] [i_12])));
            /* LoopNest 3 */
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                for (unsigned char i_14 = 1; i_14 < 21; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (signed char)-17);
                            arr_57 [i_13] [(unsigned short)14] [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)2)) || ((!(((/* implicit */_Bool) (unsigned char)96))))));
                        }
                    } 
                } 
            } 
            var_21 ^= ((/* implicit */unsigned int) (unsigned char)2);
            arr_58 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)2))))) ? (((long long int) arr_51 [i_11] [i_11] [i_11] [(signed char)10] [i_11] [i_11])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_11] [i_12] [i_11] [i_12])) ? (((/* implicit */int) (short)15872)) : (((/* implicit */int) arr_42 [i_11])))))));
        }
    }
    var_22 = var_8;
    var_23 = ((/* implicit */short) min((((/* implicit */long long int) var_11)), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (var_0))) | (var_3)))));
}
