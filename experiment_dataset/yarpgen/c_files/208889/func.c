/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208889
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) % (var_1)))), (((((/* implicit */unsigned long long int) 1023U)) | (((var_8) - (281472829227008ULL)))))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) var_16)) : (((var_0) | (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))), (var_1)))) : (var_10));
}
