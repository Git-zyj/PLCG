/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28446
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_4))))) && (((/* implicit */_Bool) ((unsigned short) ((signed char) var_13))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)63))));
    var_16 += ((/* implicit */unsigned short) min(((~(((/* implicit */int) min((((/* implicit */unsigned short) (short)20828)), ((unsigned short)65535)))))), ((+(((/* implicit */int) (short)-20828))))));
}
