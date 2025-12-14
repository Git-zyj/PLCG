/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201638
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_11)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))));
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) var_9)), ((short)-14885)))))))));
    var_18 &= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))) ? (var_4) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2273))) : (var_4)))))));
}
