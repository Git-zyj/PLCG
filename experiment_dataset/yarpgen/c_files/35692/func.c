/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35692
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
    var_13 = ((/* implicit */unsigned long long int) 0U);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1]);
        var_15 = ((/* implicit */_Bool) 0ULL);
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
        var_16 = var_11;
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
}
