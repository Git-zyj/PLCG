/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230766
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
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [(unsigned short)4])))) - ((+(arr_1 [10ULL])))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        var_18 = ((/* implicit */unsigned short) 1887745880U);
    }
}
