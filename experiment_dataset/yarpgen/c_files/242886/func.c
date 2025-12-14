/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242886
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
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
    var_18 = var_16;
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((var_10), (var_6))), (((/* implicit */long long int) var_11))))) || (((/* implicit */_Bool) (unsigned short)0))));
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)255)), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_5))) / (var_15)))));
}
