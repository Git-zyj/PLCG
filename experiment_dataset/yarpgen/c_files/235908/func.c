/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235908
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_9), (var_8)))), ((-(((/* implicit */int) var_7))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_3])), (var_7))))));
                        arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) 0LL);
                        arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 63)) ? (63) : (-64)))), (max((((/* implicit */long long int) arr_3 [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) var_3)) ? (2438637560715635597LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_0] [3ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0]));
                        arr_17 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-26513))) - (arr_6 [i_0] [i_1] [i_0])));
                        arr_18 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_0]))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5])) : (((((var_0) + (2147483647))) << (((((((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_0])) + (35))) - (5)))))));
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] [i_6 - 1] = ((long long int) (~(((/* implicit */int) (signed char)-44))));
                            arr_27 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1))))) % (((/* implicit */int) (signed char)-33))));
                            var_13 = (i_1 % 2 == zero) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)182)) % (((/* implicit */int) arr_2 [i_5] [i_1] [i_0]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) arr_0 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)182)) * (((/* implicit */int) arr_2 [i_5] [i_1] [i_0]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) (unsigned char)80)) : (((((/* implicit */_Bool) -2765654221375236088LL)) ? (var_0) : (((/* implicit */int) var_8)))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (7) : (((/* implicit */int) (signed char)59))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_0] [i_2] [i_5] [i_1])) ? (4881603897463885354LL) : (((/* implicit */long long int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        }
                        for (int i_8 = 1; i_8 < 22; i_8 += 2) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) -8)) ? (((((/* implicit */unsigned long long int) var_10)) & (3ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) -358298853))));
                            var_19 = arr_8 [i_2] [i_1];
                            arr_35 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) (~(((unsigned long long int) var_1))));
                        }
                        for (int i_9 = 1; i_9 < 23; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) 1729128248);
                            arr_38 [i_0] [i_1] [i_1] [i_1] [i_5] [(unsigned short)17] [i_9] = (i_1 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) ((var_4) >> (((arr_9 [i_0] [i_1] [i_2] [i_5]) + (1701637612927160675LL)))))) ? (((-5409120798929649232LL) ^ (arr_9 [i_2] [i_1] [i_2] [i_5]))) : (((2LL) % (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_1] [i_5] [i_9])))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((var_4) >> (((((arr_9 [i_0] [i_1] [i_2] [i_5]) + (1701637612927160675LL))) - (7657376573115446561LL)))))) ? (((-5409120798929649232LL) ^ (arr_9 [i_2] [i_1] [i_2] [i_5]))) : (((2LL) % (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_1] [i_5] [i_9]))))))));
                        }
                        arr_39 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)45))))) % (((/* implicit */int) (unsigned char)12))));
                    }
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        var_21 = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_0) + (2147483647))) << (((((((((/* implicit */int) var_11)) | (((/* implicit */int) arr_2 [i_10] [i_1] [i_0])))) + (88))) - (21)))))) ? (arr_9 [i_0] [i_1] [i_2] [i_10]) : (min((max((((/* implicit */long long int) arr_0 [i_1])), (arr_23 [i_0] [i_1] [i_1] [i_1] [i_10] [i_10]))), (((/* implicit */long long int) (short)10908))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_0) + (2147483647))) << (((((((((((((/* implicit */int) var_11)) | (((/* implicit */int) arr_2 [i_10] [i_1] [i_0])))) + (88))) - (21))) + (9))) - (8)))))) ? (arr_9 [i_0] [i_1] [i_2] [i_10]) : (min((max((((/* implicit */long long int) arr_0 [i_1])), (arr_23 [i_0] [i_1] [i_1] [i_1] [i_10] [i_10]))), (((/* implicit */long long int) (short)10908)))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_11)))))) : (-41)));
                    }
                }
            } 
        } 
        arr_43 [(unsigned char)21] = ((/* implicit */short) var_5);
    }
    var_23 *= ((/* implicit */_Bool) -64);
    var_24 = ((/* implicit */unsigned short) ((long long int) (unsigned char)112));
}
