/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214078
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
    var_11 = min((var_7), (max((var_3), (((/* implicit */int) ((signed char) 9ULL))))));
    var_12 |= min(((+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) != (var_10)))))), (var_7));
    var_13 += ((/* implicit */_Bool) (-(min(((-(((/* implicit */int) (unsigned char)102)))), (((/* implicit */int) var_9))))));
}
