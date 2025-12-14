/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48289
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
    var_10 = ((/* implicit */signed char) var_7);
    var_11 = ((/* implicit */int) 1048575ULL);
    var_12 -= ((/* implicit */short) ((14522319011625294080ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (((((/* implicit */unsigned int) ((/* implicit */int) (short)26187))) | (var_8))))))));
    var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) var_3))))) : (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) var_9))));
    var_14 = ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), ((signed char)-100)))) ? (((((/* implicit */unsigned int) var_1)) * (var_0))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (-341439681))))))) : (((((/* implicit */_Bool) ((short) (short)26187))) ? (min((((/* implicit */long long int) var_1)), (-5020030889493323432LL))) : (((/* implicit */long long int) min((-2035409287), (((/* implicit */int) (short)32760))))))));
}
