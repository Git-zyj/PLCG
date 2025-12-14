/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31265
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((arr_0 [i_0 + 2] [i_0 - 2]) * (arr_0 [i_0 + 2] [i_0 - 2])));
        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18226)))))) ? (-1443705141) : (1443705155)));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_15))));
    }
    var_22 = ((/* implicit */unsigned char) (signed char)-84);
}
