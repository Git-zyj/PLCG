/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211264
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (~(var_5))))));
    var_14 = min((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), ((+(((var_10) + (((/* implicit */unsigned int) var_8)))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */long long int) 4294967295U)) : (9223372036854775807LL)))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)16383)))) ^ ((~(((/* implicit */int) (unsigned short)7168))))))) : ((-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)9))) : (9223372036854775807LL)))))));
    var_16 = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-6))))) ? (max((((/* implicit */unsigned int) var_12)), (var_4))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */int) var_9))))), (((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
}
