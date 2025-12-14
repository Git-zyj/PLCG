/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28363
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_7))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)125)) : (1023))))))) : (var_7)));
    var_12 = (((((((_Bool)0) ? (var_5) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((unsigned short) (unsigned char)255))))) / (((int) -1)));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) >> (((((/* implicit */int) (unsigned char)131)) - (118))))) * (((/* implicit */int) (_Bool)0)))))));
}
