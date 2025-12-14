/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235286
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) var_8);
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */long long int) (!(arr_0 [i_0])));
    }
    var_19 = ((/* implicit */short) var_14);
    var_20 = ((/* implicit */unsigned long long int) var_4);
    var_21 = ((/* implicit */signed char) ((((var_9) << (((((/* implicit */int) var_8)) - (33775))))) == (((/* implicit */unsigned long long int) min((((var_16) + (-8511908953037461874LL))), (((((/* implicit */_Bool) (signed char)-19)) ? (8511908953037461889LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))))))))));
    var_22 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (8511908953037461884LL))) >> (((((/* implicit */int) var_8)) - (33777))))), (((/* implicit */long long int) var_14))));
}
