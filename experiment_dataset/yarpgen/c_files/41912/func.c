/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41912
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [4ULL] = ((/* implicit */unsigned int) ((unsigned long long int) (signed char)56));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((var_2) >> (((arr_0 [i_0 + 1] [i_0 + 1]) - (1561943497))))))))));
        arr_3 [i_0 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
    }
}
