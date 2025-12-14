/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47231
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
    var_10 = ((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (_Bool)0)) : (var_1)));
    var_11 = ((/* implicit */_Bool) max((var_11), ((!(min((var_2), ((!(((/* implicit */_Bool) (unsigned short)0))))))))));
    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) ((int) var_2))) ? (var_5) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))));
    var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)37))))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) (_Bool)1))));
}
