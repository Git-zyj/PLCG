/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205798
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((arr_0 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] [i_3 - 1] = ((/* implicit */unsigned short) (short)4699);
                                arr_14 [i_3] [i_3] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (~(arr_7 [i_3 + 1] [i_0])));
                            }
                        } 
                    } 
                    var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_10 [i_2])))) ? (arr_7 [i_1] [i_0]) : (((/* implicit */unsigned long long int) (+(arr_10 [i_0]))))));
                }
                for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_13 = ((/* implicit */signed char) (short)-12695);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_0] [i_0] [i_5] [i_0]))) ? (arr_20 [i_0] [i_0] [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_5])))));
                            arr_25 [i_0] [i_0] [i_5] [i_6] [i_0] [i_7] [i_7] = ((/* implicit */unsigned int) ((arr_21 [i_1] [i_5] [i_5] [i_5] [i_7]) ? (((/* implicit */int) (short)-3498)) : (((((/* implicit */int) arr_5 [i_0] [i_5] [i_0])) / (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_6]))))));
                            var_15 -= ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                        }
                        var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (arr_0 [i_5])))));
                        arr_26 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(var_2)));
                    }
                    /* vectorizable */
                    for (short i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */int) (short)2)) | (((/* implicit */int) var_1)))) : (((/* implicit */int) (short)-12695))));
                        arr_29 [i_0] [i_1] [i_0] [i_5] [i_8] [i_8 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_1] [i_0] [i_5] [i_8])) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_1] [i_0] [i_8]))));
                    }
                }
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_3 [i_0] [i_1]))))));
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_9] [i_9])) : (((/* implicit */int) (unsigned char)251))))), (max((var_7), (((/* implicit */unsigned int) (unsigned char)255))))));
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)-3489)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (var_2)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_11 = 1; i_11 < 17; i_11 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_11] [i_10] [i_10] [i_9] [i_1] [i_0]))) : (3536131537U)))));
                            var_22 = ((/* implicit */short) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_10] [i_11 - 1])) & (((/* implicit */int) arr_31 [i_10] [i_10] [i_1] [i_0]))));
                            var_23 = ((/* implicit */long long int) max((var_23), (arr_4 [i_1] [i_9] [i_10])));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_2 [i_0]))));
                            arr_37 [i_9] [i_1] [i_9] = ((/* implicit */short) (+(((/* implicit */int) arr_34 [i_9] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 + 1]))));
                        }
                        for (unsigned char i_12 = 3; i_12 < 16; i_12 += 1) 
                        {
                            var_25 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))), (arr_4 [i_1] [i_9] [i_12 + 2])));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (((~(min((var_9), (((/* implicit */long long int) var_8)))))) / (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (arr_10 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0]))) : (arr_30 [i_9]))))))));
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-1))));
                            var_28 = ((/* implicit */unsigned long long int) (short)3666);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 3) /* same iter space */
                        {
                            arr_49 [i_9] [i_1] [i_9] [i_9] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) var_3);
                            arr_50 [i_0] [i_9] [i_9] [i_0] [i_14] = ((/* implicit */unsigned long long int) (short)-22107);
                            var_29 = ((/* implicit */long long int) (~(arr_0 [i_14 + 3])));
                        }
                        var_30 = ((/* implicit */unsigned short) min(((signed char)-7), (((/* implicit */signed char) var_1))));
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 1; i_15 < 17; i_15 += 4) 
                    {
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (!(((/* implicit */_Bool) -4551489180862521895LL)))))));
                        var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_15 - 1] [i_15] [i_0] [i_15 - 1] [i_0] [i_15 + 1] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15] [i_15 + 1] [i_15 + 1]))) : (var_11)));
                        var_33 = ((/* implicit */short) (~(-4551489180862521895LL)));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 1; i_16 < 17; i_16 += 4) 
                    {
                        var_34 ^= ((/* implicit */unsigned short) -9223372036854775802LL);
                        var_35 = ((((/* implicit */_Bool) var_11)) ? ((-(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-114)) * (((/* implicit */int) (unsigned short)26255))));
                    }
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29143)) >> (((((/* implicit */int) (short)9287)) - (9279)))))), (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_9] [i_1] [i_1]))) : (arr_39 [i_0] [i_0] [i_0]))))))));
                    arr_57 [i_1] [i_1] [i_9] [i_1] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)15484))))));
                }
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_38 = ((/* implicit */signed char) ((((/* implicit */int) arr_54 [i_0] [i_0] [i_1] [i_1] [i_1] [i_17])) - (((/* implicit */int) arr_22 [i_0] [i_0]))));
                    var_39 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                    arr_60 [i_0] [i_1] = ((/* implicit */long long int) ((((arr_39 [i_0] [i_0] [i_17]) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_17]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3)));
                    var_40 = ((/* implicit */short) ((signed char) 6468895539560217592LL));
                }
            }
        } 
    } 
    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) (short)-4435)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34901))) : (var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30628)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (_Bool)0))))) : (var_11))))));
}
