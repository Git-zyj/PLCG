/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203215
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
    var_14 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_2))) * (((/* implicit */int) min(((unsigned short)14161), (((/* implicit */unsigned short) var_6)))))))), (var_12)));
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5)))) ? (min((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (short)689)) || (((/* implicit */_Bool) 370342896))))), ((short)4095)))))));
}
