/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38614
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (2737245457482276293LL))), (((/* implicit */long long int) var_5))));
        arr_2 [18] [(_Bool)0] = ((/* implicit */short) (+(((((/* implicit */int) arr_0 [i_0])) / ((-(711171827)))))));
        var_18 = (short)26486;
    }
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) var_6)), (var_9)));
}
