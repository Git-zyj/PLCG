/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3143
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
    var_18 = ((/* implicit */unsigned char) var_15);
    var_19 |= ((/* implicit */short) max((max((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)0))))))), (((/* implicit */unsigned int) ((unsigned char) ((unsigned int) var_5))))));
    var_20 = ((/* implicit */long long int) ((max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5)))))) * (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) && (((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_10))))))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_17)) : ((+(((/* implicit */int) (unsigned short)0))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_4)) <= (var_0))))) : (((long long int) var_6)))) : (var_1))))));
}
