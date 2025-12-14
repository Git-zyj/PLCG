/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212016
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17888)) ? (3458764513820540928LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50467)))))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0])))) : ((+(((/* implicit */int) var_3))))));
    }
    var_10 = ((/* implicit */short) var_7);
}
