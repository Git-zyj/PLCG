/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229044
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
    var_16 *= ((/* implicit */unsigned char) var_11);
    var_17 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) ^ ((~(max((((/* implicit */unsigned int) var_6)), (var_1)))))));
    var_18 = ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) var_7))))) : ((~(var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((var_2), (((/* implicit */unsigned char) var_8)))), (var_0))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_4 [i_0] [8ULL] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (var_4)))) : (var_1))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 335912035449211234ULL)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (signed char)104)))), ((~(((/* implicit */int) var_5)))))))));
            arr_5 [i_1] = var_13;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_1 [i_0])))) ? ((+(((/* implicit */int) arr_3 [i_0] [(unsigned char)1])))) : ((-(var_6)))));
            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_2] [i_2])))))));
            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [5LL] [(signed char)3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_2] [i_0]))))) ? (arr_7 [12LL]) : (((/* implicit */long long int) (+(var_4))))));
            arr_8 [i_0] [i_2] [i_2] |= ((/* implicit */unsigned long long int) var_12);
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_0 [i_2] [i_0])) : ((+(((/* implicit */int) var_2))))));
        }
        var_23 = ((/* implicit */short) (+((+(min((((/* implicit */unsigned long long int) arr_2 [6U] [i_0] [(unsigned char)7])), (arr_1 [i_0])))))));
        arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) - (var_4)))) ? ((~(var_4))) : (((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0] [i_0])) ? (var_6) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
    }
}
