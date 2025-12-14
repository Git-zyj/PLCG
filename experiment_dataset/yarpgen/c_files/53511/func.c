/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53511
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
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (max((var_16), (var_0))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (0U)))))), (((/* implicit */unsigned long long int) (-(((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((long long int) ((((/* implicit */_Bool) var_11)) ? (8989051517744473840LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
        arr_3 [i_0 + 2] [i_0] = ((/* implicit */long long int) var_16);
        arr_4 [i_0 + 2] = max((((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_0 [i_0 - 2]))))))), (((long long int) ((_Bool) (signed char)122))));
        var_19 = max((((/* implicit */unsigned int) var_3)), (3250444413U));
        var_20 = ((/* implicit */unsigned short) max(((((-(1044522855U))) - (4294967287U))), (min(((-(var_4))), ((-(3250444441U)))))));
    }
}
