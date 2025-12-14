/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36907
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
    var_18 = min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))));
    var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-7058706744724881685LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-23533)) ? (((((((/* implicit */int) (short)11318)) - (((/* implicit */int) (signed char)14)))) ^ (((/* implicit */int) (signed char)96)))) : (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)120)) || (((/* implicit */_Bool) 2145386496))))) + (1073741824)))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) max(((short)-11319), (((/* implicit */short) var_13))))) ? (max((var_12), (((/* implicit */unsigned long long int) (short)11319)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_14))))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (((-(arr_0 [i_0] [i_0]))) * (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11319)) ? (12038901036700933467ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((max((((/* implicit */unsigned long long int) var_13)), (var_12))), (((/* implicit */unsigned long long int) var_16))))));
}
