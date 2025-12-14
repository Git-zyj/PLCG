/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234210
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
    var_20 = ((/* implicit */unsigned int) var_14);
    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) var_17)) ? (var_3) : (((/* implicit */int) ((unsigned short) (_Bool)1))))), (((/* implicit */int) ((unsigned short) ((unsigned char) var_2))))));
    var_22 = ((/* implicit */_Bool) (((_Bool)1) ? (min((var_19), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) min((var_17), (min((((/* implicit */int) (_Bool)1)), (-1224237583))))))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((var_16) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))) ? (max(((+(((/* implicit */int) (signed char)110)))), ((~(var_6))))) : (((/* implicit */int) (signed char)-13))));
}
