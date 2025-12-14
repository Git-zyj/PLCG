/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29388
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
    var_19 |= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
    var_20 = min((var_16), (((/* implicit */unsigned int) var_5)));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)-39)) & (var_3))) == (((/* implicit */int) var_11)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_11)) : (2147483647))))))))))));
    var_22 |= ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) ((unsigned short) var_8))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) -1207208215)) : (863945691U))))), (((/* implicit */unsigned int) var_9))));
    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)95)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)14970)) : (((/* implicit */int) (signed char)38))))))) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (_Bool)0))));
}
