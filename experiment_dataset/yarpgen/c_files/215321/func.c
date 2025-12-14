/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215321
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (378488113712194774ULL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 += ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_14 += ((/* implicit */signed char) ((((unsigned int) arr_0 [i_0])) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))))));
    }
}
