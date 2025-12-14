/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218850
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
    var_19 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_3)))));
    var_20 = ((((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_1))) >> (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_18)))))) * ((+(((unsigned long long int) var_2)))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (short)23245))));
    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_6))))) : (((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) (short)23245))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((var_5) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)65535)))) == (((/* implicit */int) var_14))))))));
}
