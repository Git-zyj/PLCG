/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47100
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (min((((/* implicit */long long int) (signed char)-96)), (min((((/* implicit */long long int) (unsigned char)245)), (-5261229479072569520LL)))))));
    var_18 = ((/* implicit */_Bool) ((((6514278764278358989ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (122101597214277564ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) var_4))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_11)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21975)) ? ((-(1462293860U))) : ((~(arr_1 [(short)4] [i_0])))));
    }
}
