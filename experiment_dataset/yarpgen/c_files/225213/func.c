/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225213
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
    var_12 = ((/* implicit */long long int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_11)))))) % (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (var_3) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1)))))))));
    var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-8013)) : (((/* implicit */int) var_7)))))) : ((-(((/* implicit */int) var_1))))));
    var_14 = ((/* implicit */int) ((var_10) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (unsigned char)17))))))) : (((((/* implicit */_Bool) max(((short)14127), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15252))) : (var_2)))));
}
