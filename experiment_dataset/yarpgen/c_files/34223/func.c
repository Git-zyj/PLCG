/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34223
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) - (4294967295U))), (max((((((/* implicit */_Bool) var_2)) ? (10U) : (arr_1 [i_0 + 3] [i_0 + 1]))), (((/* implicit */unsigned int) (signed char)48))))));
        var_12 = ((/* implicit */unsigned short) var_10);
    }
    var_13 = ((((/* implicit */_Bool) min((2047ULL), (((/* implicit */unsigned long long int) (unsigned char)91))))) ? (1U) : (2752054668U));
    var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(var_3))), (((/* implicit */unsigned long long int) max(((unsigned char)8), ((unsigned char)164))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))) : (var_4)));
}
