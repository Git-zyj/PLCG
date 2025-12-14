/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29376
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
    var_19 = ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */long long int) (signed char)121))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_7)), (var_18))) & (((/* implicit */unsigned long long int) (~(var_6))))))) ? (min((((/* implicit */unsigned int) var_4)), (var_2))) : (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_17)))))))));
    var_22 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (signed char)-63)) != (((/* implicit */int) (unsigned char)0)))));
    var_23 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (((((/* implicit */unsigned long long int) var_11)) * (var_18)))));
}
