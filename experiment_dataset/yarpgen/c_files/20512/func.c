/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20512
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
    var_17 = -19;
    var_18 = ((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_8))))), (((long long int) var_12)))));
    var_19 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) + (16780807154767886167ULL))) - (288230376134934528ULL)));
    var_20 += ((/* implicit */signed char) max((max((((/* implicit */int) ((unsigned char) var_6))), (((((/* implicit */int) var_6)) + (((/* implicit */int) var_14)))))), (((/* implicit */int) (short)32767))));
}
