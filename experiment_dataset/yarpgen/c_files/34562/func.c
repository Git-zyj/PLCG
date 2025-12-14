/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34562
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((155525688U) | (2935664430U)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) var_5);
        var_16 = ((/* implicit */signed char) var_10);
        arr_3 [i_0 + 1] = ((/* implicit */signed char) max((((1359302836U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))))), (((/* implicit */unsigned int) min((((((/* implicit */int) var_13)) * (((/* implicit */int) var_11)))), (((/* implicit */int) var_4)))))));
    }
}
