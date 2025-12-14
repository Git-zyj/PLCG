/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23219
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
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) var_17);
        arr_2 [8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) (-(max((11340311478822443480ULL), (max((11340311478822443482ULL), (((/* implicit */unsigned long long int) (signed char)-113))))))));
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned char) 1059650228U))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [(signed char)9])))) != (((/* implicit */int) arr_0 [i_0]))));
    }
    var_20 = ((/* implicit */unsigned int) var_5);
}
