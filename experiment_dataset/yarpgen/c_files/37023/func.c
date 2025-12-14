/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37023
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_12)))) ? (((((/* implicit */_Bool) -262144)) ? (262144) : (((/* implicit */int) var_0)))) : ((-(262142)))))) ? (((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-1))))) ? (min((var_11), (((/* implicit */unsigned int) 458752)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_15 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (262134))) >> (((var_7) - (2162027413U))))) != (((/* implicit */int) (unsigned short)0))));
    var_16 = ((/* implicit */unsigned int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_7) : (0U)))) || (((/* implicit */_Bool) var_3))))))));
}
