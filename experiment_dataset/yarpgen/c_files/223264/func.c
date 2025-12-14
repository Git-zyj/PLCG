/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223264
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
    var_19 = ((/* implicit */int) var_7);
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) var_16))));
        var_23 = var_8;
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (((13948566558810914765ULL) ^ (11154018424800499654ULL)))))) ? (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (var_2) : (var_2))), (((/* implicit */long long int) ((signed char) var_15))))))));
    var_25 = ((/* implicit */signed char) (-(var_16)));
}
