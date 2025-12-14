/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211288
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
    var_10 ^= ((/* implicit */unsigned char) (short)22252);
    var_11 = ((/* implicit */long long int) (unsigned short)38494);
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-22252), ((short)-22261))))) * (var_2)));
    var_13 = ((/* implicit */short) (-(((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)12789)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) (signed char)-110))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-26)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) : ((~(var_3)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) << (((arr_1 [i_0]) - (1721480630)))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((arr_1 [i_0]) == (arr_1 [i_0]))))));
    }
}
