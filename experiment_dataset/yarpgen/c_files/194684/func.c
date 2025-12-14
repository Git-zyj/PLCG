/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194684
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
    var_18 |= ((/* implicit */short) (-((~(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_9)))))))));
    var_19 = ((/* implicit */signed char) min((((((/* implicit */int) var_7)) - ((+(((/* implicit */int) var_11)))))), (((/* implicit */int) var_7))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((var_2), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_5))))) ? (min((((/* implicit */unsigned long long int) (signed char)82)), (14617596990253600534ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20996)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_6))))))))));
}
