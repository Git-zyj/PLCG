/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211381
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
    var_16 = ((/* implicit */short) ((((((8191ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) / (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (var_2)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_9))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((min((min((((/* implicit */short) (_Bool)1)), (var_1))), (((/* implicit */short) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_10))))))), (((/* implicit */short) var_9)))))));
    var_19 = ((/* implicit */unsigned long long int) var_15);
}
