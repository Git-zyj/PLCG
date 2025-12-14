/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43934
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4291))) : (arr_3 [i_0 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)28318)) : (268435456)))) : (min((var_2), (((/* implicit */long long int) var_4)))));
        var_11 = ((/* implicit */unsigned short) max((var_11), (arr_2 [i_0 - 1] [i_0 + 2])));
    }
    var_12 = min((((/* implicit */long long int) (unsigned short)37205)), (8193367614279040385LL));
}
