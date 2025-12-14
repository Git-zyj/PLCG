/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237087
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 162898845U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) 0ULL)))))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL))))) ? (min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (unsigned short)56728)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47141)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    arr_9 [i_0] [i_2] [i_2] [i_2 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18912))) : (0ULL)));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [12U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47121))) : (14ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 1] [i_1 - 1])))));
                        arr_13 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) arr_7 [i_1] [i_1] [i_1]);
                        var_15 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_11 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51))))));
                        var_16 -= ((/* implicit */unsigned short) (!(arr_2 [i_3 + 1] [i_2 + 1] [i_1 - 1])));
                    }
                    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        arr_16 [i_2] [i_4] [3U] [(short)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_4])) ? (((unsigned long long int) arr_1 [i_0] [i_1])) : (0ULL)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            arr_20 [i_4] [i_4] [i_2 + 3] [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)18435));
                            var_17 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))));
                            arr_21 [i_4] = ((/* implicit */_Bool) (unsigned char)59);
                        }
                        arr_22 [i_4] = ((/* implicit */unsigned short) ((arr_4 [i_2 + 3]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))));
                    }
                }
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    arr_27 [10ULL] [i_1] [i_6] = ((_Bool) (~(((/* implicit */int) arr_0 [i_1 - 1] [i_1]))));
                    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)44))));
                    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((unsigned long long int) (_Bool)0)))));
                        var_21 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_24 [i_6] [i_6] [i_0]))))));
                        arr_30 [i_7] [i_7] [i_6] [i_1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [(short)0] [(short)0] [i_0] [i_0]))) * (var_8));
                        var_22 = ((/* implicit */short) ((((arr_25 [i_0] [i_0] [(_Bool)1] [i_7]) + (2147483647))) << (((((arr_25 [i_0] [i_0] [i_1 - 1] [i_7]) + (124275574))) - (11)))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        arr_35 [(unsigned short)9] [(short)7] [(short)7] [i_8] [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) (signed char)56))))) * (((arr_2 [i_1] [i_1] [i_8]) ? (4294967295U) : (arr_23 [i_0] [i_0]))))))));
                        arr_36 [i_0] [i_1] [(_Bool)0] [i_8] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 5846334363802567050LL)) ? (-2055149909) : (((/* implicit */int) arr_28 [i_0] [i_1 - 1] [(short)0] [i_1] [i_1 - 1] [i_1 - 1]))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        arr_40 [i_9] [0U] [0U] [i_6] [i_1] [i_0] = ((/* implicit */unsigned short) arr_32 [i_0] [i_1] [i_6]);
                        var_23 = ((/* implicit */unsigned char) (((-((-(arr_25 [i_0] [(_Bool)1] [i_1] [i_0]))))) ^ ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        arr_41 [i_6] = ((/* implicit */signed char) ((unsigned short) (unsigned char)222));
                        arr_42 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_10))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_1 - 1] [i_9])))))));
                        var_24 = ((((/* implicit */int) arr_15 [i_0] [12U] [i_6] [i_9])) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_9] [i_6])) ? (((/* implicit */int) arr_19 [i_0])) : (((/* implicit */int) (unsigned short)63223))))) ? (arr_18 [12] [i_1 - 1] [12] [i_1 - 1]) : (((/* implicit */long long int) ((int) arr_7 [i_0] [i_0] [i_0]))))) - (7634182152286300489LL))));
                    }
                    arr_43 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)63224), (((/* implicit */unsigned short) (unsigned char)234))))) ? (((1U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59)))))) ? (((/* implicit */unsigned long long int) max((((var_6) ? (((/* implicit */int) (unsigned short)18394)) : (((/* implicit */int) (short)-32752)))), (((/* implicit */int) arr_2 [i_0] [i_1] [i_6]))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) 2107081748671251187LL)) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_17 [i_0] [i_0] [i_6])))))));
                }
                arr_44 [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */long long int) min((2135507956U), (((/* implicit */unsigned int) (unsigned short)63223))))) & (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12)))) & (arr_39 [i_1 - 1] [(short)0] [i_0] [i_1 - 1] [i_1])))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((var_25), (var_6)));
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_2))));
}
