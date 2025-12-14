/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226755
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_9) - (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned int) (unsigned char)15)), (var_5)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) || (((/* implicit */_Bool) (unsigned char)255))));
    }
}
