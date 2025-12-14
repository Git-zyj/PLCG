/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201539
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_10))));
    var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */unsigned long long int) var_8)) + (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) max((3920348666U), (((/* implicit */unsigned int) var_9)))))))));
    var_18 = ((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_15))))))));
    var_19 |= ((/* implicit */int) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) - ((-(var_8))))), (((/* implicit */unsigned int) var_3))));
}
