/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204278
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
    var_17 -= ((/* implicit */short) var_3);
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_12))));
    var_19 *= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) ((short) (_Bool)1))) - ((+(((/* implicit */int) (unsigned short)65535))))))), (-4804006347088842980LL)));
    var_20 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned long long int) var_3)) : (var_1))), (((/* implicit */unsigned long long int) (unsigned short)7)))), (((/* implicit */unsigned long long int) var_12))));
}
