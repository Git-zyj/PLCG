/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45577
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
    var_16 = ((/* implicit */unsigned int) var_8);
    var_17 = var_2;
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)5)))))) : (((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) var_5)), (var_0)))))));
    var_19 = min((max((((/* implicit */short) (!(var_13)))), (var_8))), (((/* implicit */short) var_4)));
    var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */long long int) (signed char)5)), (var_11)))))));
}
