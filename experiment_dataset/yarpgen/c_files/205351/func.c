/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205351
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
    var_20 = ((/* implicit */signed char) max(((+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_14))))))), (((/* implicit */int) var_17))));
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
    var_22 *= ((/* implicit */short) max((((((((/* implicit */int) var_18)) >> (((((/* implicit */int) (short)14047)) - (14047))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))), ((+(((/* implicit */int) var_5))))));
    var_23 = ((/* implicit */unsigned short) (-(min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    var_24 = ((/* implicit */short) ((min((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_1))))), (((((/* implicit */int) var_5)) - (((/* implicit */int) var_5)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_12)))))))));
}
