/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51128
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
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_15)), (min(((+(-5218613096874189502LL))), (min((5218613096874189501LL), (-6027511931506179388LL)))))));
        var_19 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned long long int) arr_1 [i_0 + 3]))));
    }
    var_20 = ((/* implicit */int) var_17);
}
