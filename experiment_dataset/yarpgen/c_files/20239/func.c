/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20239
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
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_6)))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))))))))));
    var_21 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_11)))), (((2820014860169133891ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) ? (((/* implicit */int) (_Bool)0)) : (var_13)));
    var_22 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30527)) ? (((/* implicit */int) (short)1952)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_0)))))) : (var_18))), (((/* implicit */unsigned int) ((((/* implicit */int) max(((short)10105), (((/* implicit */short) (_Bool)1))))) + (((/* implicit */int) ((unsigned short) (_Bool)0))))))));
}
