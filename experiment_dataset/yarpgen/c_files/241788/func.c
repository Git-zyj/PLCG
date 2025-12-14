/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241788
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = (-(((long long int) arr_6 [i_0] [i_1])));
                    arr_9 [3] [i_0] [i_0] [3] = ((/* implicit */unsigned int) ((((min((arr_8 [i_0]), (((/* implicit */unsigned long long int) arr_5 [2LL])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)5] [i_1] [(unsigned char)11]))))) ? (max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */long long int) ((var_10) + (((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5746663941626601101ULL))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_17 = (+(873545947));
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [3] [3])) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231)))));
                            var_19 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-77)) != (((/* implicit */int) (signed char)76)))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-68)) - (((/* implicit */int) (signed char)-76)))))));
                        }
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((unsigned int) max((arr_11 [i_0] [i_1]), (arr_11 [i_0] [15U]))));
                        var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)35459)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min(((signed char)76), ((signed char)108))))))));
                        arr_16 [i_0] [i_1] [i_2] [i_5] = (+(((((/* implicit */int) arr_12 [(unsigned short)7] [i_5] [i_5] [i_5 + 2] [(signed char)2] [i_5])) + (-1783582248))));
                        arr_17 [i_0] [i_0] [(unsigned char)4] [i_5 + 1] = ((/* implicit */unsigned char) (signed char)-76);
                        arr_18 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_2] [(short)8] [i_2] [i_5 - 2] [(unsigned char)7] [i_5])) : (((/* implicit */int) arr_15 [i_0] [4LL] [i_2] [i_5 + 1] [i_5] [i_5]))))), (arr_3 [i_5 + 1] [i_0])));
                    }
                    for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) arr_21 [(unsigned short)10] [i_0] [i_1] [i_2] [(_Bool)1] [i_0]);
                        /* LoopSeq 3 */
                        for (int i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            arr_26 [i_0] [7ULL] [2] [7ULL] [i_0] [i_7] = max((((max((0LL), (((/* implicit */long long int) 2745392948U)))) + (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) arr_12 [i_2] [i_6 - 2] [i_7] [i_2] [i_7] [i_7])));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) (signed char)76)) : ((~(((/* implicit */int) (unsigned short)59430))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (12571136990198605676ULL)));
                            arr_27 [i_0] [i_0] [i_1] [7U] [i_6 + 1] [i_0] = ((/* implicit */short) (+(1705590362619017285ULL)));
                        }
                        for (int i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (_Bool)1))));
                            var_26 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-48))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(-2076378297)))) ? (((/* implicit */long long int) arr_22 [13ULL] [i_1] [(_Bool)1] [i_6] [i_8])) : ((~(-3337096000664069348LL)))));
                            var_28 += ((/* implicit */long long int) arr_28 [i_1] [i_2] [i_6]);
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) (signed char)-76)))));
                            arr_33 [i_0] [i_0] [8] [i_2] [i_2] = min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))), (((5838124109520192777LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5732))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 3; i_10 < 14; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) arr_24 [(unsigned char)5] [i_1] [14LL] [i_1]);
                        var_31 = ((/* implicit */int) max((((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned char)156)))), ((+(arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */long long int) arr_11 [i_0] [4U])), (1194312762719624632LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)14760), (arr_29 [i_0] [i_1] [3] [i_0])))))))));
                    }
                    arr_38 [i_0] [i_0] = ((/* implicit */short) arr_29 [i_0] [i_1] [(unsigned char)3] [i_2]);
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */_Bool) var_12);
}
