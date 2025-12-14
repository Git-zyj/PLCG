/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202560
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32765))) : (arr_2 [i_0])))) && (((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (short)-32765)))))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32765)) % (((/* implicit */int) (unsigned char)3))))) ? (((((/* implicit */_Bool) (unsigned char)252)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13833))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_15 = ((((/* implicit */_Bool) (-(arr_3 [i_0])))) ? (((arr_3 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)127))))) : (arr_3 [i_0]));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) var_10);
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)13850)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13833))) : (2608035914U))) << (((((((((/* implicit */int) (short)-26437)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) - (2147457189)))))) : (min((11382036470877551239ULL), (((/* implicit */unsigned long long int) 4294967295U))))));
        var_16 = ((/* implicit */short) 24U);
    }
    var_17 = var_11;
}
