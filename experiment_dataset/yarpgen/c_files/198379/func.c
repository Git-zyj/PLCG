/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198379
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
    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) < (((/* implicit */int) var_3)))))));
    var_14 = ((/* implicit */unsigned int) var_5);
    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (var_2)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_8)) + (var_12))))), (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_4)))), (max(((unsigned short)60798), (var_8))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_2))))) & (((((((/* implicit */int) var_5)) != (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_6))))) : (min((var_10), (((/* implicit */unsigned int) var_5))))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))), ((~(((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) min((562949945032704ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-2)))) : (((/* implicit */int) min((var_3), ((unsigned short)60791)))))))))));
}
