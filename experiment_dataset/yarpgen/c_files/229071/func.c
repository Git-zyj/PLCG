/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229071
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
    var_16 = ((/* implicit */unsigned char) var_3);
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)33320)), (var_3)));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_2))))) + (var_9)))) ? (((/* implicit */int) (unsigned short)33320)) : (min((((/* implicit */int) (unsigned short)33293)), (17)))));
    var_19 |= ((/* implicit */signed char) (~(var_8)));
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-17)), (((((/* implicit */_Bool) 31)) ? (((/* implicit */int) (unsigned short)33320)) : (774816666))))))));
}
