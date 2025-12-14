/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42742
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
    var_15 = ((/* implicit */long long int) var_5);
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_2 - 1]) : (arr_3 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)53769))) ^ (-2084432665483453759LL)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 |= ((/* implicit */short) ((7) >= (((/* implicit */int) (unsigned char)73))));
                                var_19 += (!(((/* implicit */_Bool) arr_8 [i_2] [(signed char)2] [i_2] [i_2])));
                                var_20 |= ((/* implicit */short) (~(((((/* implicit */_Bool) -7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18314))) : (8435320967751064888LL)))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned short) (-(4764561751241886812LL)));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        arr_14 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8388))) : (2934272925U))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8388)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)255)))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1544597932)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5203797275850480204ULL)))) || (((((/* implicit */_Bool) (short)18789)) && (((/* implicit */_Bool) 139903928)))));
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        var_24 |= ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_6 [i_2] [i_1] [i_1 + 1] [i_1 - 2]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (arr_10 [i_0] [i_2] [i_2] [i_6] [i_0] [i_2] [(short)6]))))))) ? ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_2])) : (arr_11 [i_0] [5ULL] [5ULL] [5ULL] [i_0] [5ULL] [i_0]))))) : (((/* implicit */int) arr_0 [i_2]))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (var_3)))) ? (((/* implicit */int) var_3)) : (min((arr_11 [i_0] [i_0] [i_1] [8LL] [i_2] [i_6 - 2] [i_0]), (((/* implicit */int) arr_0 [i_0]))))))) + (min((((arr_15 [i_0] [i_0] [i_0]) & (arr_5 [i_0] [i_1 - 2]))), ((~(arr_5 [(short)11] [2U])))))));
                        var_26 += ((/* implicit */int) arr_0 [i_2]);
                        var_27 = ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_8)) ? (arr_15 [i_1] [i_0] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [0LL]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 1] [i_6 - 2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_14)))) == (arr_4 [i_0] [(unsigned char)9] [(unsigned char)9]))))));
                    }
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_28 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_18 [i_7] [i_7] [i_2] [i_2] [i_2])))) ? (arr_11 [i_7] [i_7] [i_2 - 1] [i_2] [(short)7] [1ULL] [i_0]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) <= (var_5))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) : (arr_3 [i_0])))) ? (min((arr_8 [i_2] [i_2] [(signed char)4] [i_2]), (arr_8 [i_2] [i_1 - 1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (-7511058798947705054LL) : (((/* implicit */long long int) -8)))))))));
                        var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) arr_11 [(_Bool)1] [i_1 - 1] [i_1] [i_1] [i_2 - 1] [i_7] [(_Bool)1])) : (arr_6 [i_0] [i_0] [i_2] [i_7])))))) <= (max((153830303947892296ULL), (((/* implicit */unsigned long long int) (unsigned char)87))))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_1] [i_0])), (var_13)))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1] [i_2])) ? (arr_4 [i_1 + 1] [i_1] [(_Bool)1]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_2]))) : (((arr_4 [i_1 + 1] [i_7] [i_0]) >> (((arr_4 [i_1 + 1] [i_1 + 1] [i_2]) - (577312405)))))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
}
