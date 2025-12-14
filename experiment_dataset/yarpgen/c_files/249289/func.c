/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249289
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((arr_4 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)24749)) : (((/* implicit */int) (unsigned short)46933)))))))) ^ (((((/* implicit */_Bool) (unsigned char)155)) ? (2130301062020042728ULL) : (18446744073709551615ULL)))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) arr_1 [3U])) < (25ULL))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_4] [i_3] [i_2] [i_1 + 1])), (0ULL)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [2LL] [i_2] [3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)65)))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_2] [i_1] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) (_Bool)1)))))))))));
                            arr_16 [(unsigned short)6] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16352)) ? (((/* implicit */int) (signed char)49)) : (1124380526)));
                            var_15 = ((/* implicit */unsigned short) arr_13 [i_0] [i_1 + 2] [i_3] [i_3] [i_3] [i_1]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_10) : (arr_4 [(unsigned short)4]))) != (((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0])))))))) & (arr_1 [i_1 - 1]))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)0))));
                        }
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17018))) : (var_0))))), (var_0))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((((((/* implicit */unsigned long long int) arr_17 [i_6] [i_2] [i_1] [i_0 + 2])) + (var_0))) > (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned char) arr_4 [i_6]);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3584)) ? (((/* implicit */int) arr_22 [i_6] [i_0] [i_2] [i_1])) : (((/* implicit */int) (unsigned short)19507))))) ? ((~(var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775798LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [(signed char)14] [(unsigned short)2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_6] [i_1] [i_0]))) : (arr_5 [i_0 + 2] [i_1 - 1] [i_1 - 2])));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >= (7)));
                            arr_24 [i_6] [i_6] [i_2] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) arr_2 [i_0 + 1]))))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_6])) : (((/* implicit */int) ((unsigned short) 3285874654U)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_4))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1 + 2] [i_1] [i_2])))))));
                        var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [2ULL] [i_2] [i_8])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_2] [(signed char)11])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1 - 3] [i_2] [i_8]))))) : (((/* implicit */long long int) ((arr_7 [i_1]) / (arr_2 [i_2]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 2; i_9 < 13; i_9 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0 - 2]))) < ((-(var_12))));
                            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_9 - 2] [i_1 + 1] [i_0 + 2])) ? ((-(var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_2] [i_9] [i_10])) ? (((/* implicit */int) arr_28 [i_0] [(unsigned short)9])) : (-825928590))))));
                        }
                        for (unsigned short i_11 = 3; i_11 < 14; i_11 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46049)) - (((/* implicit */int) arr_3 [i_0] [i_2] [i_9]))))) >= (((var_0) ^ (((/* implicit */unsigned long long int) var_7))))));
                            var_30 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)19487))));
                            arr_33 [i_0] [i_0] [(signed char)5] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [(unsigned short)12])))));
                            arr_34 [i_0] [14LL] [i_1 + 2] [i_2] [(unsigned short)8] [i_9] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)46029)) : (((/* implicit */int) arr_9 [i_11 + 1] [i_9] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_11])))))));
                        }
                        for (int i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            var_31 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_28 [i_0] [(signed char)9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))));
                            var_32 = ((/* implicit */unsigned int) (+(arr_2 [i_12])));
                        }
                        var_33 = ((/* implicit */_Bool) (signed char)-32);
                        arr_37 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1 - 3])) ? (var_7) : (((/* implicit */long long int) arr_20 [i_0] [i_1] [i_1 + 2]))));
                        var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [(signed char)14] [i_2] [(_Bool)1] [(signed char)1] [13U] [i_2])))))));
                    }
                    var_35 = ((/* implicit */long long int) (((((-(((/* implicit */int) ((unsigned char) arr_13 [i_1] [1ULL] [i_2] [i_0 + 2] [i_1] [i_0]))))) + (2147483647))) >> (((2212953677U) - (2212953660U)))));
                }
            } 
        } 
    } 
    var_36 *= ((/* implicit */unsigned int) max(((unsigned short)29640), (((unsigned short) ((((/* implicit */_Bool) (unsigned short)48517)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-63)))))));
    var_37 = ((/* implicit */int) ((unsigned int) (unsigned short)46024));
}
