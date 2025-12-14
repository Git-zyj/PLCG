/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192053
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
    var_19 = ((/* implicit */unsigned int) (((~(((/* implicit */int) min((var_8), (var_16)))))) <= (((/* implicit */int) var_12))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4294950912U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (short)23627)), (4294950912U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))))))) : (min((((/* implicit */long long int) (+(((/* implicit */int) var_15))))), (((long long int) var_10))))));
    var_21 |= ((/* implicit */short) var_2);
    var_22 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9034))) < (var_7)))) % (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))))) < (((((/* implicit */unsigned int) ((/* implicit */int) ((var_14) != (var_14))))) / (var_2)))));
}
