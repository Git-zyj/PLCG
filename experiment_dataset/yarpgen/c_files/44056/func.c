/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44056
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) - (1079985079U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 1041416555U)) % (arr_2 [i_0])))))))));
        var_17 = ((/* implicit */int) ((unsigned long long int) ((arr_0 [i_0]) * (((/* implicit */unsigned long long int) var_8)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) arr_3 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((arr_0 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_3 [i_1]))) * (var_8))))));
    }
    var_21 = ((/* implicit */_Bool) ((unsigned short) var_1));
}
