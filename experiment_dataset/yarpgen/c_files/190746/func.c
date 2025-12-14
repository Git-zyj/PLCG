/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190746
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
    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_10))))) > (((unsigned int) var_9))))), (max((((/* implicit */unsigned int) var_11)), (var_9)))));
    var_16 = ((/* implicit */short) ((unsigned int) max((((/* implicit */long long int) var_5)), (min((var_1), (var_1))))));
    var_17 = var_9;
    var_18 += ((/* implicit */signed char) var_10);
    var_19 += ((/* implicit */unsigned long long int) var_10);
}
