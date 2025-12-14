/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45321
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
    var_12 = ((/* implicit */short) max((((((/* implicit */_Bool) 32767)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49226))))) : (((/* implicit */int) (signed char)-99)))), (((/* implicit */int) ((unsigned short) (~(32767)))))));
    var_13 += ((/* implicit */signed char) (((((-(((/* implicit */int) (unsigned short)49226)))) | (((((/* implicit */int) var_11)) << (((((/* implicit */int) (unsigned short)49226)) - (49221))))))) + (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)98))))))));
    var_14 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4388))) : (var_1))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)16308)))) - (43))))), (((/* implicit */unsigned long long int) var_3))));
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) (unsigned short)30744))))) ? (((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)39)) || (((/* implicit */_Bool) 1157716979))))))));
}
