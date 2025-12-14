/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228188
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_10 |= ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_2 [i_0])), (arr_1 [i_0]))) <= ((+(arr_1 [i_0])))));
        var_11 = (~(((/* implicit */int) var_6)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((237532550U) - (((/* implicit */unsigned int) -2075570529)))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)9862)) / (arr_1 [i_1])));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */int) (short)9865)) != (((((/* implicit */_Bool) (short)16298)) ? (((/* implicit */int) (short)-18620)) : (((/* implicit */int) (unsigned short)53761)))))))));
        var_15 = ((/* implicit */unsigned short) var_7);
        var_16 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)24)) : (775172720)))) * (var_9)));
    }
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_7)), (var_9))))));
}
