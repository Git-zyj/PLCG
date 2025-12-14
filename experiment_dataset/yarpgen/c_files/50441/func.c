/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50441
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) 255U)) : (var_15)))))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 255U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))));
    var_19 -= ((((/* implicit */_Bool) var_8)) || (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_13)) : (var_14))))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7)))) ? (((/* implicit */int) ((unsigned char) var_14))) : (((/* implicit */int) (unsigned char)94))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19916)) > (var_13)))), (((unsigned long long int) var_13))))));
}
