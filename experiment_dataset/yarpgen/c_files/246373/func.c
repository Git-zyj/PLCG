/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246373
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
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((2047ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (short)24776)))))))) : ((+((-(arr_1 [i_0 - 2] [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1993628536U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)19] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [12U]))))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (unsigned short)18130)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0] [i_0]))))) : (((/* implicit */int) (short)-24777))));
    }
    var_13 *= ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_2))))))));
}
