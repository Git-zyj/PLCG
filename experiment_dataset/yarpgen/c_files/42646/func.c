/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42646
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (signed char)-55))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    var_20 += ((/* implicit */signed char) max((var_15), (((int) (-(var_10))))));
    var_21 = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned char)124))))), (max((-1590817852776010274LL), (((/* implicit */long long int) (unsigned short)56705)))))));
}
