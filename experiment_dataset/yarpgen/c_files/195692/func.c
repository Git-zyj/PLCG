/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195692
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
    var_18 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [(short)12]);
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(6345097391552439235ULL)))) ? (((/* implicit */int) ((var_15) != (((/* implicit */long long int) ((/* implicit */int) (signed char)32)))))) : (((/* implicit */int) (signed char)31)))))));
        arr_5 [5U] [(_Bool)1] = ((/* implicit */signed char) ((4294967295U) >> (((var_3) - (3221930506U)))));
        arr_6 [(_Bool)1] [(short)0] = ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) 1492194950)) : (12101646682157112380ULL)));
        arr_7 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) var_11);
    }
}
