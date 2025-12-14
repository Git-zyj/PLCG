/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40163
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
    var_15 = ((/* implicit */_Bool) -8064189573081846798LL);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (8244497357780922682LL) : (8064189573081846797LL)))))));
        arr_2 [i_0] &= ((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */unsigned long long int) var_12)) / (arr_0 [i_0] [i_0 - 2])))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)28)))) : (((/* implicit */int) var_0)))))));
        var_17 |= ((/* implicit */_Bool) max((((/* implicit */int) max((var_9), (var_9)))), ((-(((/* implicit */int) ((_Bool) var_5)))))));
    }
}
