/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44687
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
    var_20 &= ((/* implicit */unsigned char) max(((unsigned short)59160), (((/* implicit */unsigned short) var_16))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((2169212910U), (2125754386U)));
        var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) -1702429483)), (144114638320041984ULL)));
        arr_5 [i_0] [i_0] = (signed char)33;
        var_22 = ((/* implicit */short) arr_1 [i_0]);
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    var_23 |= ((/* implicit */unsigned int) min((144114638320041984ULL), (((/* implicit */unsigned long long int) -579403696))));
}
