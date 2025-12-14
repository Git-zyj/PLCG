/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47250
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */short) var_3);
        var_15 -= ((/* implicit */unsigned long long int) (unsigned char)131);
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
        var_17 = ((/* implicit */unsigned short) (short)-8365);
        arr_8 [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1])) * (((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_6 [8U])) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))))));
    }
    var_18 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-347613748) : (((/* implicit */int) (unsigned char)94))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))));
}
