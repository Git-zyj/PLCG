/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245511
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
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    var_13 += ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 300228670)) : (var_10))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */short) var_1))))))))));
    var_14 = ((/* implicit */unsigned short) ((long long int) ((min((var_2), ((_Bool)1))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_9)) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -300228671)) ? (((/* implicit */int) var_2)) : (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((+(((/* implicit */int) var_11))))))), (var_6)));
}
