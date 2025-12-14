/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43571
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
    var_15 ^= ((/* implicit */int) 562949953421296ULL);
    var_16 ^= ((/* implicit */signed char) ((((/* implicit */int) (short)32764)) >> (((((/* implicit */int) (short)17167)) - (17138)))));
    var_17 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (_Bool)1)))))) & (((((/* implicit */unsigned long long int) var_10)) ^ (562949953421296ULL))))), (((/* implicit */unsigned long long int) var_3))));
}
