/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223913
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
    var_16 |= ((/* implicit */unsigned short) ((var_8) << (((((((/* implicit */_Bool) var_11)) ? (11881215941843704230ULL) : (((/* implicit */unsigned long long int) var_11)))) - (11881215941843704202ULL)))));
    var_17 = ((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)0)))), (((((/* implicit */int) (short)30001)) & (((/* implicit */int) var_14))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))) ^ (var_13))) % (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) > (var_8)))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) % (min((min((((/* implicit */unsigned int) (signed char)80)), (var_13))), (((/* implicit */unsigned int) ((var_15) < (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
}
