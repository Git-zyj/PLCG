/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228308
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))))));
    var_14 &= ((/* implicit */_Bool) var_8);
    var_15 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4294967289U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3179742592U))), ((+(var_0)))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-(((/* implicit */int) ((9223372036854775807LL) > (9223372036854775805LL)))))))));
}
