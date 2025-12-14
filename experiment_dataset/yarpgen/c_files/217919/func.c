/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217919
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
    var_18 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((var_11) / (((/* implicit */unsigned long long int) var_8))))) || (((/* implicit */_Bool) var_5))))));
    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) var_4)), (var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned short)8192)))))))))) : (((((/* implicit */long long int) ((/* implicit */int) min((var_12), (var_12))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8192))) + (var_13)))))));
    var_20 = ((/* implicit */int) ((unsigned char) (unsigned short)57328));
    var_21 = ((/* implicit */signed char) var_4);
}
