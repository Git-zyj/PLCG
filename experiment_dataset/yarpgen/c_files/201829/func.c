/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201829
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned short)18323)) : (((/* implicit */int) var_0))))), (((arr_7 [(_Bool)1]) >> (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))))) <= ((+(var_9)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)12] [i_2] [i_3]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned long long int) var_3);
                            var_15 = ((/* implicit */long long int) ((arr_10 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_0] [i_3] [i_2] [i_3] [(unsigned short)2] [i_0] = ((/* implicit */int) (!(((17236670494790179578ULL) != (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0]))))));
                            arr_18 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_3 + 2] [i_2 - 2])) ? (arr_16 [i_3 - 1] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            arr_19 [i_0] [(unsigned short)4] [(short)4] [i_0] = ((/* implicit */unsigned char) (signed char)-3);
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_2 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [(unsigned char)10] [i_2 + 1]))) : (arr_10 [i_2] [8LL] [i_2 + 3] [i_3]))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (short)-1))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_6] = ((/* implicit */_Bool) var_1);
                            arr_24 [(short)0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned int) arr_4 [0LL] [(signed char)3] [i_2]);
                        }
                        arr_25 [(_Bool)1] [i_3] [i_2] [(unsigned short)2] [i_0] = (((_Bool)1) ? (((/* implicit */int) arr_5 [i_3 + 2] [i_3] [i_2 - 1])) : (((/* implicit */int) var_0)));
                        var_18 = ((/* implicit */unsigned short) arr_4 [i_3 - 1] [i_2] [i_2 + 2]);
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 2; i_8 < 9; i_8 += 2) 
                        {
                            arr_32 [i_8] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */unsigned short) ((131071LL) | (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2 + 1] [i_8 - 2] [(short)5] [(signed char)8] [i_7])))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
                        }
                        arr_33 [i_0] [i_0] [i_7] [i_2] [i_7] [(signed char)11] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)50)) >> (((((/* implicit */int) (unsigned short)2047)) - (2030))))))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        arr_36 [i_0] [(_Bool)1] [i_9] = ((/* implicit */short) ((unsigned short) (short)13616));
                        var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (1125899906842623ULL)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_7)), ((-(((/* implicit */int) arr_5 [8] [i_1] [i_0]))))))) : (((unsigned int) arr_6 [i_9 + 1] [(unsigned short)9] [2] [i_2 + 2]))));
                        arr_37 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [(unsigned char)3] [(_Bool)0] [4] [i_1] [6] [i_2])) && (arr_8 [i_0] [i_1] [i_2]))))) & (max((arr_12 [(unsigned char)12] [i_1] [i_2] [i_9] [i_2]), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [8U] [(signed char)5])) ? (((/* implicit */int) arr_14 [i_9] [(short)2] [i_2] [(unsigned short)9] [i_0])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_28 [i_0] [11] [i_2] [i_9] [(short)8] [(unsigned char)3])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_28 [i_0] [i_1] [i_2] [i_0] [i_1] [i_2])), (var_5)))))) : (((/* implicit */int) var_4))));
                        arr_38 [(short)4] [(unsigned short)10] [i_1] [i_2] [i_9] = ((/* implicit */signed char) ((_Bool) ((min((((/* implicit */unsigned int) arr_28 [i_1] [i_1] [i_2] [i_9] [i_9] [i_0])), (3726245781U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(_Bool)1] [i_9 - 1] [i_2 + 2] [(unsigned char)1]))))));
                    }
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) % (((((/* implicit */_Bool) var_7)) ? (2147483647U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    var_22 = ((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))));
}
