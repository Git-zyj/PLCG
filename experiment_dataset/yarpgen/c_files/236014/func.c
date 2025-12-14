/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236014
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
    var_11 = ((/* implicit */short) var_9);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) (short)28107))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(var_6)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */long long int) arr_1 [i_0])))))) : ((+(arr_1 [i_0]))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), ((unsigned short)53507))))))))));
        var_14 = ((/* implicit */short) var_9);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) arr_2 [12LL])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_15 = ((/* implicit */signed char) var_0);
    }
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_16 ^= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)28107))) || (var_7))));
        var_17 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) -46881276)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) var_1)))))) == (((/* implicit */int) arr_4 [i_1 + 1]))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) >> (((((/* implicit */int) (short)-28107)) + (28110))))))))) | (((((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_1 - 1]))) : (((/* implicit */int) ((((/* implicit */int) (short)-28107)) <= (((/* implicit */int) arr_4 [i_1])))))))));
    }
}
