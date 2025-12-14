/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27546
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
    var_12 = ((/* implicit */signed char) var_8);
    var_13 += ((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)36355), (((/* implicit */unsigned short) ((_Bool) (unsigned short)65535))))))));
    var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((-(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_9))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((_Bool) var_11))), (var_8))))));
    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-26565)) : (((/* implicit */int) (short)-26565))))) ? (min((((/* implicit */unsigned long long int) var_8)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned char) var_9)), ((unsigned char)1))))))));
}
