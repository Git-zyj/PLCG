/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41118
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
    var_20 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) arr_2 [i_0]);
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) var_9);
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_0 - 3]) ? (((/* implicit */int) var_17)) : ((~(1564754322))))))));
                    }
                    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 2; i_5 < 8; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_5 + 2] [(unsigned char)3] [i_0] [i_0 - 2] [i_0 + 1])) == (((/* implicit */int) ((((/* implicit */int) arr_13 [i_5 - 1] [(unsigned char)2] [i_2] [i_0 + 1] [i_0 - 2])) != (((/* implicit */int) (short)2016)))))));
                            var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_12 [i_0 - 1])) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (unsigned char)63))))));
                            arr_14 [i_0] [i_1] [(_Bool)1] [i_4] [i_5] = ((/* implicit */unsigned short) ((_Bool) min(((unsigned short)32789), (((/* implicit */unsigned short) arr_3 [i_0 - 3])))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243))));
                            arr_20 [i_6] [i_4] [(unsigned char)6] [i_0 - 1] = ((/* implicit */unsigned char) arr_3 [i_4]);
                            var_26 = ((/* implicit */unsigned short) arr_2 [i_0]);
                            arr_21 [i_6] [i_6] [(unsigned char)7] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) min((var_8), (((/* implicit */unsigned long long int) ((_Bool) arr_10 [i_0] [i_1] [i_0] [i_2] [i_4] [i_6]))))));
                        }
                        arr_22 [i_0] [4ULL] [i_2] [(unsigned char)6] = ((/* implicit */unsigned int) var_11);
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_6 [i_0 + 1] [i_0 - 3] [i_0 - 1]), (((/* implicit */unsigned short) (unsigned char)253)))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) arr_26 [i_7]);
                                var_29 = ((/* implicit */_Bool) var_12);
                                var_30 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_7]))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2117908507U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))) ? ((+(((/* implicit */int) arr_24 [(short)5])))) : (((((/* implicit */_Bool) arr_23 [i_7] [i_7])) ? (((/* implicit */int) (short)2923)) : (((/* implicit */int) arr_30 [i_7])))))));
                                var_31 = ((/* implicit */int) min((var_31), ((-(((/* implicit */int) var_10))))));
                                var_32 ^= ((((/* implicit */_Bool) arr_26 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10]))) : (max((max((17668030717786381398ULL), (((/* implicit */unsigned long long int) (short)2009)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2937)) | (((/* implicit */int) (unsigned char)31))))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) ((unsigned int) (short)-13673));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 2; i_12 < 12; i_12 += 2) 
                    {
                        arr_39 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)26566))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9])))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-51)) : (1978945122))) : (min((arr_25 [i_7]), (((/* implicit */int) arr_31 [i_7] [i_8] [i_7] [i_12])))))))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)15)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_28 [i_7]))));
                    }
                    arr_40 [i_7] [i_8] [i_7] = (_Bool)1;
                }
            } 
        } 
        var_35 = ((unsigned char) ((((unsigned int) var_3)) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    }
    var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
}
