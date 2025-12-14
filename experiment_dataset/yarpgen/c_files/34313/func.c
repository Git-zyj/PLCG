/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34313
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
    var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))))))), (var_7)));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (var_0) : (((/* implicit */int) var_2)))))));
    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((var_11), (((/* implicit */long long int) var_1))))))) ? (max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)22))))), (max((var_4), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) ((max((var_11), (((/* implicit */long long int) var_12)))) >= (((/* implicit */long long int) var_0))))))));
}
