/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224506
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
    var_20 = (((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((max((var_18), (((/* implicit */long long int) var_1)))) - (6377555501877298846LL))));
    var_21 = ((/* implicit */unsigned long long int) ((unsigned int) var_12));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) 8280621790864555242LL))));
}
