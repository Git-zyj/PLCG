/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220299
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
    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned char) (_Bool)0))))))))) / ((((-(var_10))) << (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 4095U)))))))));
    var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((((((/* implicit */int) (short)-32767)) * (((/* implicit */int) var_14)))) + (2147483647))) << (((max((652329530U), (3642637765U))) - (3642637765U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_13)));
    var_18 = ((/* implicit */unsigned char) var_11);
}
