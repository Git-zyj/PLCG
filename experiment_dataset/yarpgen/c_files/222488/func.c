/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222488
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
    var_12 = ((/* implicit */_Bool) var_2);
    var_13 |= ((/* implicit */short) min((((/* implicit */long long int) var_1)), (var_11)));
    var_14 = ((/* implicit */int) (+((+(((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) min((var_3), (var_10)))), (((short) var_10)))))) / ((-((((_Bool)0) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_11))));
}
