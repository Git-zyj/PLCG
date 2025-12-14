/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190501
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1718667010U)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (arr_1 [i_0])));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_1 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)123)) - (31)))));
        var_20 &= ((/* implicit */short) 1039830314U);
    }
    var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -387741785)) ? (var_8) : (var_1)))) ? (var_7) : (((/* implicit */unsigned long long int) ((unsigned int) (short)14788)))))));
    var_22 &= ((/* implicit */short) ((var_14) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))));
}
