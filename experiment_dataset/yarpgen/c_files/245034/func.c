/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245034
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_4))));
    var_11 |= ((/* implicit */short) ((min((((/* implicit */unsigned int) ((var_5) ? (var_3) : (((/* implicit */int) (unsigned short)3072))))), ((~(2097120U))))) * (2097123U)));
}
