/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5170
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) var_6))));
    var_12 += ((/* implicit */unsigned char) (+((~(((/* implicit */int) max(((signed char)48), ((signed char)52))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_5)) > ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)44))))))));
    var_14 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1055531162664960ULL))))), (var_1)))));
}
