/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2041
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
    var_19 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (signed char)(-127 - 1))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 += ((/* implicit */_Bool) ((long long int) (signed char)(-127 - 1)));
        var_21 += ((/* implicit */short) var_5);
        var_22 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [7LL] [3U])), (3U)))), (max((-5999413791864870594LL), (((/* implicit */long long int) (unsigned short)52677)))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [(_Bool)1]))));
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
    }
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        arr_9 [(unsigned char)5] = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */int) arr_8 [i_2 + 2])), (1167097584))));
        arr_10 [i_2] |= ((/* implicit */_Bool) ((unsigned int) max((329831019U), (((/* implicit */unsigned int) (unsigned short)52677)))));
    }
    var_25 = var_16;
}
