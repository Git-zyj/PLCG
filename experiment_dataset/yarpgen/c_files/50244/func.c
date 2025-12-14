/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50244
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)179)) >= (782129324))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) 5U))))))))));
    var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) (-((+(((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_17)) : (max((0LL), (((/* implicit */long long int) var_2))))))));
    var_22 *= ((/* implicit */long long int) (~(min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) var_9)), (var_19))))))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (max((((var_18) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) != (var_19))))) % (max((var_1), (((/* implicit */long long int) var_11)))))))));
}
