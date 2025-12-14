/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51971
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
    var_14 &= ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (unsigned char)240))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */signed char) 585757763);
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)100)), (var_7)))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31194)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) var_9))))), (((var_12) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((((/* implicit */int) var_12)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 0))))))) >= (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_11)))) ? (((/* implicit */int) ((signed char) 7083131800707871488ULL))) : (((/* implicit */int) ((unsigned short) var_13)))))));
    }
}
