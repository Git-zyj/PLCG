/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205075
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
    var_16 = var_4;
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) var_14))))), (((var_15) % (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (min((((/* implicit */unsigned long long int) var_8)), ((-(var_15)))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) var_5))))) > (((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_5)))))) : (var_15)))));
    var_19 = ((/* implicit */unsigned short) var_1);
    var_20 |= ((/* implicit */unsigned int) max(((((-(((/* implicit */int) var_10)))) | (((/* implicit */int) ((((/* implicit */int) var_10)) < (var_13)))))), ((-(var_8)))));
}
