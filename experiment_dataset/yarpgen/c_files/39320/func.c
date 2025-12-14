/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39320
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
    var_16 = ((/* implicit */signed char) var_4);
    var_17 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_9)), (var_3)));
    var_18 &= ((/* implicit */long long int) max((((/* implicit */unsigned char) ((_Bool) min(((unsigned short)6), (((/* implicit */unsigned short) (short)-8744)))))), (var_1)));
    var_19 = ((/* implicit */long long int) var_9);
}
