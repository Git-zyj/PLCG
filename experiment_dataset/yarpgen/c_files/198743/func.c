/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198743
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-118)) - (((/* implicit */int) var_0))))));
        var_16 = ((/* implicit */unsigned short) ((int) ((arr_0 [i_0]) != (((/* implicit */int) (unsigned short)65280)))));
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned short)64720);
    }
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned int) var_3)), (var_12))))));
}
