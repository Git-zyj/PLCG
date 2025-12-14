/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249094
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
    var_20 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_21 &= ((/* implicit */int) max((arr_1 [i_0]), (min((((/* implicit */unsigned int) ((arr_1 [i_0]) >= (arr_1 [i_0])))), (((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])) ? (((/* implicit */unsigned int) -1)) : (arr_1 [i_0])))))));
        arr_2 [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1816842095)) ? (1816842091) : (((/* implicit */int) (unsigned short)54728))))), (((unsigned int) (signed char)31)));
    }
    var_22 |= var_8;
}
