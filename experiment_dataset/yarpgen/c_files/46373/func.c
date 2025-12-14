/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46373
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_9))))));
        var_21 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (signed char)31))));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (var_6))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    }
}
