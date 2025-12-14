/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211026
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
    var_16 |= ((/* implicit */_Bool) var_12);
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))))));
    var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-954444584750877349LL) : (((((/* implicit */_Bool) 8388607LL)) ? (3310821899876204914LL) : ((-9223372036854775807LL - 1LL))))));
    var_19 -= ((/* implicit */long long int) (+(max((min((((/* implicit */int) var_6)), (var_10))), (((/* implicit */int) var_11))))));
}
