/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206772
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1924720554U)), (2461529003255565499LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_11 = var_2;
        arr_4 [i_0 + 1] &= ((/* implicit */signed char) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2])))));
    }
}
