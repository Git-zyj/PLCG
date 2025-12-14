/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29842
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
    var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), ((~(((18446744073709551615ULL) | (6ULL))))));
        arr_5 [9] = ((/* implicit */unsigned short) 1038478685U);
        arr_6 [i_0] = ((/* implicit */unsigned long long int) 3256488610U);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_19 &= ((/* implicit */signed char) var_2);
        arr_9 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_8))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((signed char) arr_7 [i_1 + 1] [i_1 + 1])))));
    }
}
