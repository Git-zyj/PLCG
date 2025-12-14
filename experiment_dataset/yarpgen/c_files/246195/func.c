/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246195
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
    var_17 = ((/* implicit */unsigned char) ((unsigned int) var_6));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_18 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [12] [(signed char)8])) ? (((/* implicit */int) arr_1 [i_0 + 1] [6LL])) : (((/* implicit */int) arr_1 [2U] [2LL]))))), (9223372036854775808ULL)));
        var_19 = (~(((unsigned int) var_16)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0]))))), ((-(4207800896U)))));
        var_20 = ((/* implicit */unsigned int) (unsigned short)33409);
    }
}
