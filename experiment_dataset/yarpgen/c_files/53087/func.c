/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53087
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), (max((((/* implicit */unsigned int) (short)4095)), (var_3)))))) : (var_10)));
    var_13 *= ((/* implicit */unsigned short) ((((int) (+(var_10)))) + (((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) var_4))))));
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) min((var_4), (((/* implicit */unsigned char) var_5)))))) ? (min((((((/* implicit */_Bool) 4772578703274696120ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_10))), (((/* implicit */unsigned long long int) var_11)))) : ((+(max((var_10), (((/* implicit */unsigned long long int) var_7))))))));
}
