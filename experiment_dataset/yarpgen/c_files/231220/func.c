/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231220
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) var_15))));
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_9)) ? ((~(var_13))) : (((unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((~(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((int) max((((/* implicit */int) var_2)), (var_9)))))));
}
