/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25163
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
    var_14 &= ((/* implicit */int) var_12);
    var_15 = ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((-(((/* implicit */int) var_11))))))) ? (max((var_8), (((/* implicit */unsigned long long int) (unsigned char)83)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)83))))));
    var_16 = ((/* implicit */int) (short)32767);
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(-2147483634)))) ? (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_7)), (var_9))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (min((var_2), (((/* implicit */unsigned long long int) var_12))))))));
    var_18 &= ((/* implicit */int) max((var_5), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), ((unsigned char)156)))))))));
}
