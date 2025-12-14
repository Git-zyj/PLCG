/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223755
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
    var_19 = ((/* implicit */int) var_7);
    var_20 ^= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (signed char)0)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_8) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) && (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_15))))))));
    var_21 = ((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((short) (signed char)127))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))))));
    var_22 |= ((/* implicit */signed char) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((signed char) var_3))) ? ((-(((/* implicit */int) var_11)))) : (var_4)))));
}
