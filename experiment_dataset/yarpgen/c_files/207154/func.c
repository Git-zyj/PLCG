/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207154
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) ^ (var_6)))))) ^ (min((((unsigned long long int) 3347029495U)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (947937807U))))))));
    var_13 = ((unsigned short) (~(((/* implicit */int) max(((unsigned short)65274), (var_8))))));
}
