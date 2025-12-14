/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240553
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-27319)) & (((/* implicit */int) ((((/* implicit */_Bool) 1120599680)) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_15)) >= (6867657487709705522ULL)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
        var_20 += ((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
    }
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (var_3)));
}
