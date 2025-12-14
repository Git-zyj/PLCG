/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30401
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))), (var_0))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (9834744666614406583ULL) : (8611999407095145032ULL)));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_9);
        var_19 ^= ((/* implicit */unsigned long long int) var_0);
        arr_4 [i_0] = ((/* implicit */short) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3] [i_0]))) : ((+(arr_0 [i_0])))));
    }
    var_20 = ((/* implicit */long long int) max((var_11), (var_8)));
}
