/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19785
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
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_1)))))))) % (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)111)), (var_6)))) ? (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)255), ((unsigned char)144)))))))));
    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_13))))), (((((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (unsigned char)111)))))) + (var_11)))));
}
