/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228328
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
    var_15 += ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) : (var_0))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_5), (((/* implicit */unsigned long long int) (unsigned char)101)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)32492)))))))) ? (((/* implicit */int) max(((unsigned short)65535), ((unsigned short)65526)))) : (min((((/* implicit */int) var_7)), ((~(((/* implicit */int) var_6))))))));
    var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned short)65529)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0)));
}
