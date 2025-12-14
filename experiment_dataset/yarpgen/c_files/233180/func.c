/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233180
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)62))))))) / ((+(((long long int) var_9))))));
    var_11 = (+((-(min((var_9), (((/* implicit */long long int) var_1)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        var_12 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (unsigned char)194)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) % (var_1)))), (min((((/* implicit */unsigned long long int) 4294967295U)), (12685425341845310442ULL))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_10 [i_3] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((unsigned long long int) ((((/* implicit */_Bool) 144115188075855871LL)) ? (144115188075855871LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) max((arr_0 [i_0] [i_3 - 1]), (arr_0 [i_0 + 2] [(unsigned char)7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = max((((/* implicit */long long int) (-((+(arr_4 [i_0] [i_2] [i_3])))))), (((min((((/* implicit */long long int) (_Bool)1)), (4241983836868620946LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))));
                        var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 14647987731336501225ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_2])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_1 - 1] [i_2] [i_3]))))) : (2047U)));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_4 = 3; i_4 < 12; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] [(short)9] [i_4] [i_4 + 2] = ((/* implicit */signed char) var_1);
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_1] [10ULL] [i_4] [i_5] [i_0 + 1] = ((/* implicit */long long int) var_5);
                            arr_20 [i_4] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1 + 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_1 - 1] [i_0 - 1] [i_5]))) : (9223372036854775807LL))), (((/* implicit */long long int) ((signed char) var_7)))));
                            var_14 = ((/* implicit */unsigned long long int) (-(((-144115188075855872LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))));
                        }
                    }
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_15 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 1])) : (var_1))) ^ (((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]))));
                        var_16 = ((/* implicit */int) (((-((+(var_9))))) - (min((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) var_1)), (arr_16 [i_2] [i_2] [i_6])))))));
                        arr_23 [i_0] [i_2] = ((arr_13 [i_0 - 1] [i_1 + 1]) ? (((/* implicit */int) min((arr_3 [i_1] [i_1 - 2] [i_1 - 1]), (arr_3 [i_1] [i_1 + 1] [i_2])))) : (((/* implicit */int) arr_3 [i_1] [i_1 - 2] [i_1 - 1])));
                    }
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        var_17 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (short)6831)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (arr_22 [i_0 + 1] [i_1] [i_2] [i_7] [i_7]))))))));
                        arr_26 [i_2] |= ((/* implicit */int) var_4);
                        var_18 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1 + 1])) || (((/* implicit */_Bool) ((unsigned short) arr_1 [7ULL])))))) : (((/* implicit */int) arr_12 [i_2] [i_1] [i_1 - 2] [i_0 - 1]))));
                        var_19 = min((((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_0 + 2] [i_0 + 1]))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)2])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_7])) : (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */long long int) (short)1014)), (arr_17 [i_7] [i_1] [i_7] [i_7] [i_7] [i_1] [i_2]))))));
                        var_20 ^= (~(((((/* implicit */_Bool) max((-6268644769415424592LL), (((/* implicit */long long int) arr_15 [6U] [i_2]))))) ? ((~(var_2))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (arr_4 [i_1] [i_2] [i_7])))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [(short)11] [i_1])) ? (((long long int) arr_22 [i_0] [1LL] [i_2] [i_8] [i_8])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28473)))));
                        var_22 = ((/* implicit */int) arr_28 [i_8] [i_2] [i_8] [i_8] [i_0 + 2] [i_0 + 1]);
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_28 [i_0] [(signed char)2] [i_0 + 2] [i_8] [i_8] [i_8]))));
                        arr_29 [i_8] [i_2] [i_1 - 1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))) ? (((var_3) ? (arr_9 [(signed char)3]) : (((/* implicit */unsigned int) 199647530)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1 - 2] [i_2] [i_8])))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)127)) : (var_1)))))) + (var_7))))));
    var_25 = ((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_1))));
}
