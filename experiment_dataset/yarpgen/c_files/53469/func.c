/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53469
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0 - 2] = min((((-141781627) ^ (var_3))), (((((/* implicit */_Bool) var_8)) ? ((~(var_11))) : (((/* implicit */int) var_15)))));
        var_18 ^= ((/* implicit */unsigned short) ((int) (signed char)34));
    }
    var_19 = max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)0));
}
