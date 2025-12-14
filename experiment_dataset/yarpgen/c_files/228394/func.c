/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228394
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
    var_11 = ((/* implicit */unsigned char) 2646425380533438710ULL);
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_0)), (var_3))), ((~(var_3)))))), ((+(((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) var_6)))))))))));
    var_13 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((arr_0 [i_1 + 1]) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 2])))) : (((/* implicit */int) arr_0 [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (min((var_3), (((/* implicit */unsigned int) (unsigned char)221)))) : (((/* implicit */unsigned int) arr_8 [i_0] [i_4 - 1])))));
                                arr_10 [9U] [i_1] [i_4] [i_1 - 2] [i_1] = min((((((/* implicit */_Bool) arr_1 [i_4 + 3])) ? (arr_1 [i_4 + 2]) : (arr_1 [i_4 + 3]))), ((~(arr_1 [i_4 - 2]))));
                                arr_11 [i_0] [i_4] = ((/* implicit */_Bool) ((short) var_3));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_1 - 2] [15] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_6 [i_1 - 2] [0U] [i_5 - 1] [i_1 - 2]))));
                        arr_14 [i_5] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned char) var_0);
                    }
                    for (short i_6 = 3; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned long long int) (+(min((var_4), (-6698111656802982414LL)))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) > (var_7)))), (arr_7 [i_0] [(short)2] [i_2] [i_6 + 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [17] [i_1 - 1] [i_2] [i_1]))) > (var_3))))) - (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 2] [i_1] [i_6 - 1])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_6 + 1])) : (((/* implicit */int) var_5)))))))));
                        arr_20 [i_6 - 1] [i_6] [i_6] [12LL] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (unsigned short)63330)), (var_9))), ((+(arr_1 [16LL])))));
                    }
                    for (short i_7 = 3; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) var_1);
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 4; i_8 < 19; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (~((+(max((((/* implicit */unsigned int) arr_8 [i_8] [0U])), (var_3))))))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_21 [i_8 - 3] [i_7 - 3])) ? (((/* implicit */int) arr_21 [i_8 - 3] [i_7 - 3])) : (((/* implicit */int) arr_21 [i_8 - 3] [i_7 - 3])))), (((((/* implicit */_Bool) arr_21 [i_8 - 3] [i_7 - 3])) ? (((/* implicit */int) arr_21 [i_8 - 3] [i_7 - 3])) : (((/* implicit */int) arr_21 [i_8 - 3] [i_7 - 3])))))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_9] [i_7] [i_7] [i_9] = ((/* implicit */short) var_0);
                            var_21 -= ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0] [i_0]);
                            arr_30 [i_0] [i_0] [(unsigned char)11] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_7] [i_9] [(short)16] [(unsigned char)14] [i_9])) ? (((/* implicit */int) arr_28 [i_0] [i_9] [i_2] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_28 [i_2] [i_9] [i_0] [i_7] [i_0]))))) / (min((max((var_10), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_9])))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((var_2) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)107)) : (var_1))) - (92))))))));
                            var_23 += (unsigned short)2204;
                        }
                        var_24 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_1 - 2] [i_1] [i_7 - 3] [i_7 - 3] [i_7 - 1])) ? (((/* implicit */int) arr_28 [i_1 - 1] [i_1] [i_7 - 1] [i_7 - 2] [i_7 + 1])) : (((/* implicit */int) arr_28 [i_1 + 1] [i_1] [i_7 - 1] [i_7 - 3] [i_1]))))), (max((((/* implicit */unsigned int) var_5)), (max((((/* implicit */unsigned int) (unsigned char)58)), (var_7)))))));
                        arr_35 [(unsigned short)20] = ((/* implicit */int) (_Bool)1);
                    }
                    var_25 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1])) ? (var_1) : (((/* implicit */int) (short)2793)))) | (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (~(var_10)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63303)))))));
                }
            } 
        } 
    } 
}
