/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207156
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */int) var_8)) & ((~((~(((/* implicit */int) (_Bool)1)))))))))));
    var_11 = ((/* implicit */unsigned int) var_5);
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) var_2)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned short) var_6)))))))))));
}
