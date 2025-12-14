/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192931
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
    var_14 = ((/* implicit */unsigned char) ((long long int) max(((~(var_10))), (((/* implicit */unsigned int) ((signed char) var_3))))));
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((int) var_12)), (((/* implicit */int) ((_Bool) var_5))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) min(((~(((/* implicit */int) var_0)))), ((~(((/* implicit */int) var_8))))))) % (((long long int) (~(((/* implicit */int) var_12)))))));
}
