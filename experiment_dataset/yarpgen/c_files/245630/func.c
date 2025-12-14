/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245630
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
    var_19 = ((/* implicit */unsigned long long int) var_16);
    var_20 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) ((long long int) var_17))), (((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) 432778021)), (min((min((((/* implicit */long long int) 432778021)), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && ((_Bool)1))))))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)82))))), (((unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
}
