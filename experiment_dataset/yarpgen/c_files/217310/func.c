/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217310
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
    var_11 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (short)32767)))), (((/* implicit */int) var_4))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_4))))))));
    var_13 = ((/* implicit */short) var_8);
    var_14 &= min((min((max((var_9), (((/* implicit */unsigned long long int) var_7)))), (((unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) max((var_7), (min((var_7), (((/* implicit */long long int) var_4))))))));
}
