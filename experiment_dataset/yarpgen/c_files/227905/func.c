/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227905
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
    var_13 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)16383)))));
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_10)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (max((var_3), (((/* implicit */unsigned int) var_1)))))) >> (((((unsigned int) var_2)) >> (((((/* implicit */int) (unsigned char)117)) - (101)))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)85))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (987578234U))))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_7))))))))));
}
