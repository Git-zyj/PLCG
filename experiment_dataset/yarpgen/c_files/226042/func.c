/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226042
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_3))));
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(2822302702009584281ULL))))));
    var_18 |= ((/* implicit */unsigned long long int) (((+(var_14))) % (((((/* implicit */_Bool) ((2822302702009584282ULL) | (((/* implicit */unsigned long long int) 288230376151711743LL))))) ? (min((((/* implicit */int) var_13)), ((-2147483647 - 1)))) : ((~(((/* implicit */int) var_8))))))));
}
