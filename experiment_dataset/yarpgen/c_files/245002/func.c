/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245002
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
    var_10 = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) var_9))))))));
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (3908321327U)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_9) && (var_0))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
    var_12 *= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((short) 21U))) ? (max((41U), (4294967254U))) : (((4294967258U) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_13 = ((/* implicit */int) var_5);
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)6074)), (4294967256U)))) ? (((/* implicit */unsigned long long int) var_1)) : (((unsigned long long int) var_1))))));
}
