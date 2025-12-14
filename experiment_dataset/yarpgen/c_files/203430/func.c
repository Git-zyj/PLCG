/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203430
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_4))));
        arr_3 [i_0] = ((/* implicit */long long int) min((3957976398U), (((((/* implicit */_Bool) min((var_7), (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) (~(var_7)))) : (arr_0 [i_0] [i_0])))));
    }
    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((unsigned int) min((var_4), (((/* implicit */int) var_0)))))));
    var_17 &= var_4;
    var_18 |= var_1;
}
