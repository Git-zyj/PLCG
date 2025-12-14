/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21627
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
    var_16 = ((/* implicit */signed char) var_11);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */int) (unsigned char)0)), (var_14))))) || (((/* implicit */_Bool) (~(var_10))))));
    var_18 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_3)))) * (((/* implicit */int) (unsigned char)49)))), (((((((/* implicit */int) var_11)) / (((/* implicit */int) (unsigned char)49)))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)49))))))));
}
