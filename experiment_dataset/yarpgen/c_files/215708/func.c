/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215708
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (-885298115)))))) ? (min((-885298115), (885298139))) : ((~(var_5)))));
    var_13 |= ((/* implicit */unsigned char) ((((int) ((int) var_9))) - (((-885298115) + (((/* implicit */int) (unsigned char)87))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [2U] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0] [(signed char)10])) ? (((/* implicit */int) arr_1 [(signed char)12])) : (((/* implicit */int) arr_1 [(signed char)16])))), (((/* implicit */int) ((unsigned char) (unsigned char)93)))));
        arr_3 [i_0] [1ULL] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) -1518048330)) + (-6619537593340682501LL))), (((/* implicit */long long int) min((((int) (unsigned char)101)), (((/* implicit */int) (signed char)63)))))));
    }
}
