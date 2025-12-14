/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39155
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (short)63)) >= (((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142)))))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_3] [i_2])))))));
                        arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_3] [i_3])) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2]))))))) & (min((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)114)))), (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0 + 1] [i_1])), ((short)63))))))));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((((/* implicit */_Bool) (~(arr_9 [i_2] [i_1] [i_2] [i_1] [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_2]))) / (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_5 [i_0 + 1] [i_1] [i_2] [i_3])), (arr_3 [i_0 + 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                        arr_14 [i_0 - 1] [i_1] [i_2] [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 + 1])) ? ((+(((/* implicit */int) arr_10 [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1]))) >= (var_12))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        var_14 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-24394)) : (((/* implicit */int) (unsigned char)0)))), ((~(((/* implicit */int) (unsigned char)255)))))))));
                        var_15 ^= ((/* implicit */short) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) > (((/* implicit */int) arr_2 [i_0] [i_2]))))), (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))) : ((-9223372036854775807LL - 1LL)))))));
                        var_16 = ((/* implicit */long long int) arr_10 [i_0 + 1]);
                        arr_17 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_4] [i_1]))))), (max((((/* implicit */unsigned char) arr_4 [i_1] [i_1] [i_1])), (var_6)))))) && (((/* implicit */_Bool) arr_16 [i_0 + 1]))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */int) min((arr_7 [i_0 + 1] [i_0 - 1]), (arr_7 [i_0 + 1] [i_0 + 1])))) - (((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])) << (((/* implicit */int) (_Bool)0))))));
                        arr_20 [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) min((arr_6 [i_5] [i_1] [i_2]), (var_1)))) : (((((/* implicit */_Bool) (unsigned short)57006)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) var_0))))))));
                        var_18 = ((/* implicit */int) arr_19 [i_5] [i_2] [i_1] [i_1] [i_0] [i_0 - 1]);
                    }
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */int) ((_Bool) (unsigned char)154))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))));
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((var_7) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (unsigned char)114)))) >= (((/* implicit */int) var_8))))), ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9)))))));
}
