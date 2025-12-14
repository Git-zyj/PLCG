/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49186
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
    var_20 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_21 += ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)39))));
        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-3291))));
        var_23 &= ((/* implicit */_Bool) arr_1 [i_0]);
        var_24 ^= ((((/* implicit */_Bool) 1U)) ? (6731261958332580649LL) : (((/* implicit */long long int) arr_1 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_5 [i_1] [12ULL] |= ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) 2277449779U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -1729674396)) != (arr_1 [i_1]))))) : (((unsigned int) arr_0 [i_1]))))) : (max((((/* implicit */unsigned long long int) ((var_8) != (2017517516U)))), (2305843009213693952ULL))));
        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) >= (16776905007686161835ULL)));
    }
}
