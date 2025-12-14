/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236490
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_11))));
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) (short)28672))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))) : (1515552933U))))))));
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))) ? (min((min((var_10), (((/* implicit */unsigned long long int) (short)-32766)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) % (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_15 = ((/* implicit */unsigned long long int) ((((int) ((((/* implicit */int) var_2)) ^ (var_3)))) * (-1)));
}
