/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45314
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0))));
    var_16 |= ((/* implicit */unsigned char) (_Bool)1);
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((((/* implicit */unsigned int) var_10)), (var_6)))))) != (var_14)));
    var_18 ^= ((/* implicit */_Bool) var_6);
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (short)-14165))))) >> ((((~(-987723487))) - (987723455)))))) != (max((var_14), (((/* implicit */unsigned long long int) var_0))))));
}
