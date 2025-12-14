/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228522
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
    var_14 = ((/* implicit */unsigned int) var_3);
    var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) & (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) -1LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_17 = ((/* implicit */_Bool) arr_1 [i_1] [i_1]);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5)))) - (((/* implicit */int) arr_0 [i_0 + 1]))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) (-(arr_3 [i_0 - 2] [i_0 - 3])));
        arr_8 [i_0] = ((/* implicit */long long int) arr_4 [i_0 + 1] [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 8167771926614659990LL)) ? (((/* implicit */int) (unsigned short)55769)) : (((/* implicit */int) var_9))))) + (0LL))))));
    }
    var_19 = ((/* implicit */short) min((((/* implicit */long long int) var_4)), (max((max((((/* implicit */long long int) var_13)), (2275048123032146617LL))), (((/* implicit */long long int) max((var_13), (((/* implicit */signed char) (_Bool)1)))))))));
}
