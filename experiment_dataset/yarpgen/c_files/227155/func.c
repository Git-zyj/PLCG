/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227155
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
    var_15 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((signed char) (unsigned char)255))) ? (((/* implicit */int) var_12)) : (((((var_3) + (2147483647))) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32790))))))) + (((((var_1) / (((/* implicit */int) (unsigned char)255)))) / (min((((/* implicit */int) (unsigned char)1)), (var_3)))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_8))))))) ? (max((var_1), (((/* implicit */int) var_9)))) : (((var_0) - (((/* implicit */int) min((var_8), ((unsigned char)1))))))));
    var_17 ^= ((/* implicit */unsigned char) var_0);
}
