/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209681
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_3))));
    var_18 = (~(((/* implicit */int) max((((unsigned short) var_10)), (((/* implicit */unsigned short) var_9))))));
    var_19 = ((/* implicit */unsigned int) var_11);
    var_20 &= min((max((((/* implicit */long long int) max((((/* implicit */unsigned char) var_2)), (var_8)))), (((long long int) (signed char)-110)))), (((/* implicit */long long int) var_9)));
}
