/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52326
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
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_11), (((unsigned short) var_10)))))));
    var_15 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) var_10)) - (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_8))))))) >> (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)56161), (var_11)))) >= (((/* implicit */int) var_6)))))));
}
