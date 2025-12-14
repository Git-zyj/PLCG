/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190700
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
    var_12 += ((/* implicit */_Bool) var_11);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (var_7))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_4 [16U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_1))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) max((var_1), (((/* implicit */unsigned long long int) (unsigned char)106))));
        arr_6 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11601440219313514555ULL)) ? (arr_2 [2ULL]) : (var_8)))) && (((/* implicit */_Bool) arr_0 [i_0])))))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [16])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8)))))));
        var_14 ^= ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (((/* implicit */long long int) var_0))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0 + 1] [i_0]) - (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (var_11)))) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned char)11] [13ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 + 1] [i_1] [i_2] [(unsigned short)5]))) : (2119759411U))))))))));
                        arr_18 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? ((+(((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2])))) : (((/* implicit */int) var_0))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [5U] [i_4] [i_4] [i_4]))) | (var_8)))) ? (var_4) : (((/* implicit */int) ((unsigned short) arr_7 [6ULL] [i_4]))))))))));
                            arr_21 [i_2] = ((/* implicit */unsigned int) var_4);
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(max((arr_9 [i_0 + 1] [i_2 + 1]), (((/* implicit */unsigned long long int) arr_11 [i_0] [(_Bool)1])))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        arr_25 [i_5] = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) var_0)))));
        arr_26 [i_5] [i_5] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_24 [i_5])) / (max((((/* implicit */int) var_2)), (-1788077088))))), (((/* implicit */int) var_9))));
        arr_27 [i_5] [15ULL] = ((/* implicit */signed char) arr_24 [i_5]);
    }
}
