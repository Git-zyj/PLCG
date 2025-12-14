/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193115
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
    var_15 = (+((-(((unsigned long long int) var_8)))));
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) (-(var_7)))) ? (((((/* implicit */unsigned long long int) 32752U)) / (var_7))) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) -811412340))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 811412345)) < (-3066475985225907820LL)));
        arr_4 [i_0] &= ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) var_9)))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((12737797U) > (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) - (((min((var_4), (((/* implicit */long long int) var_12)))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (var_8))))))));
        var_17 = ((/* implicit */long long int) max((var_17), (min((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), (((var_6) ? (((/* implicit */long long int) -244033937)) : (var_4)))))));
    }
}
