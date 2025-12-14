/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5200
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1023)) && (((/* implicit */_Bool) ((unsigned short) var_4)))));
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((signed char) ((((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)32026)))) < (min((var_6), (((/* implicit */int) (unsigned short)33499))))))))));
    var_12 |= var_1;
}
