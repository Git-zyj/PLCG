/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211663
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
    var_19 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 1])) / (((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (-3011883413754050072LL)))) - (min((4716613864548807263ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (var_2)));
    }
}
