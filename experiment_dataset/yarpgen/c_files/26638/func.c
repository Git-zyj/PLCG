/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26638
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 54981488709231797LL)) ? (((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) -965108018))))) ^ (((((/* implicit */_Bool) 3934216290U)) ? (-1LL) : (((/* implicit */long long int) -1566967222)))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    var_17 = min((((/* implicit */long long int) var_15)), ((~(((((/* implicit */_Bool) (unsigned char)2)) ? (54981488709231797LL) : (var_5))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) ((arr_5 [(unsigned char)2] [i_1] [i_1] [(unsigned short)2]) ? (((/* implicit */long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0 - 2] [(unsigned char)2]) ? (arr_7 [9U] [9U] [i_2] [i_2]) : (((/* implicit */unsigned long long int) 54981488709231800LL))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (9194993261833261657LL)))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) -54981488709231828LL)) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)78)) ? (-10LL) : (((/* implicit */long long int) var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4 - 1] [9U] [i_4] [i_4] [9U] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0]))))), (((((/* implicit */_Bool) -237547720)) ? (((/* implicit */unsigned long long int) -1508709492)) : (arr_7 [i_1] [i_1] [i_3 - 1] [i_4])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) : (16019447843606788510ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4] [(unsigned short)2] [i_4 + 1] [i_4 + 1]))) : (((((/* implicit */_Bool) (short)26562)) ? (-5783676476823314413LL) : (arr_2 [(unsigned short)7] [i_1] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_12 [i_0] [i_0 - 1] [(unsigned short)9] [(_Bool)1])))) ? (((/* implicit */int) arr_11 [i_0] [3] [i_2] [i_4])) : ((+(((/* implicit */int) (_Bool)1)))))))));
                                var_20 = ((/* implicit */int) -5783676476823314425LL);
                                arr_16 [6ULL] [i_1] [6ULL] [i_4] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_0]);
                            }
                        } 
                    } 
                    arr_17 [i_0 + 1] [i_0 + 1] [8LL] [(short)8] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_9 [i_1] [i_2])) + (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 2] [i_0]))))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 3; i_5 < 8; i_5 += 2) 
                    {
                        arr_21 [i_0] [i_0] [(_Bool)1] [5] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_2] [i_5 + 2] [i_2] [i_5])) | (-54981488709231826LL)));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_10 [i_0 - 1])))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_30 [(unsigned char)1] [i_1] [i_6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_23 [2U] [i_0 - 1] [i_0 - 1] [i_1])) ? (arr_23 [i_0] [i_0 + 1] [i_0 + 1] [i_7]) : (arr_23 [i_0] [i_0 - 2] [i_1] [i_0]))), (min((arr_23 [i_0] [i_0 - 1] [(_Bool)1] [i_1]), (((/* implicit */unsigned int) 237547738))))));
                            var_22 = ((/* implicit */unsigned int) (unsigned char)107);
                            var_23 = ((/* implicit */_Bool) ((((arr_29 [i_0] [i_1] [i_2] [i_6] [i_7]) ^ ((-(((/* implicit */int) (_Bool)1)))))) / (max((((/* implicit */int) min((arr_6 [i_7] [i_2] [i_1]), (((/* implicit */unsigned char) var_11))))), (((((/* implicit */int) (unsigned char)4)) << (((((arr_29 [i_0] [(_Bool)1] [i_2] [i_6] [i_7]) + (1530071380))) - (21)))))))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 8; i_8 += 2) 
                        {
                            arr_35 [1U] [1U] [i_2] [i_6] [i_1] [i_6] = ((((/* implicit */_Bool) (~(var_14)))) ? (arr_23 [i_1] [i_2] [i_6] [8]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0]))))));
                            var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28205))) : (7049305145763032176LL)))), (var_9)));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_0] [i_0] [i_8 - 2] [i_8])) ? (((/* implicit */long long int) var_7)) : (6472696822767892628LL)))) ? (-54981488709231800LL) : (((/* implicit */long long int) min((((/* implicit */int) ((-237547723) < (((/* implicit */int) arr_6 [i_0] [(unsigned char)0] [(unsigned char)0]))))), (((arr_8 [i_0] [(_Bool)1] [i_0]) ^ (((/* implicit */int) arr_5 [3U] [4ULL] [i_2] [i_0])))))))));
                            var_26 = (-(max((((((/* implicit */_Bool) var_2)) ? (-6472696822767892631LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [6LL] [6LL]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -54981488709231845LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
                        }
                        var_27 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [6LL] [i_2] [i_1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (2424767305U)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned char)9]))))) : ((-(var_8))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_10 [i_0 + 1])) ^ (min((((/* implicit */long long int) -666220240)), (-5889133233792601145LL)))))) ? (((((/* implicit */_Bool) (unsigned char)80)) ? (arr_12 [i_9] [1LL] [1LL] [i_0 - 1]) : (arr_12 [i_9] [i_1] [i_1] [i_0]))) : ((~(((/* implicit */int) ((signed char) arr_9 [i_2] [(unsigned char)0])))))));
                        var_29 = ((/* implicit */unsigned char) (-(((arr_7 [i_0] [i_1] [i_2] [i_9]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [3ULL])) ? (54981488709231805LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)29))))))))));
                        var_30 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [(unsigned char)5] [i_9])) ? (((/* implicit */int) arr_34 [i_0] [i_1] [i_2] [i_9] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_13 [i_0] [i_0])) : ((-(0)))))), (arr_0 [i_0])));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) var_11);
        var_32 -= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_33 |= ((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [i_0] [i_0]);
    }
    var_34 = ((/* implicit */unsigned char) ((1802198625) >= (834348868)));
}
