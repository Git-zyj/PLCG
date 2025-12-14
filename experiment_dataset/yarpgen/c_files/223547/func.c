/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223547
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 893629002U))))), (var_4)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)65535))))) | (var_7))) : (((/* implicit */unsigned long long int) var_5))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) ((unsigned char) (unsigned short)65535))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)78)))) >= (((/* implicit */int) (signed char)86)))))));
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((max((var_5), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((short) var_9))))))));
    var_18 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-14390)) ^ (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))) ? ((+(((/* implicit */int) var_4)))) : (min((((((/* implicit */int) var_13)) % (((/* implicit */int) var_9)))), (((/* implicit */int) var_13))))));
}
