/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20229
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0 - 2]) | (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) : (9223372036854775807LL)));
        arr_3 [i_0 + 1] [i_0] |= ((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 2]);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / ((~(5608002182126729187LL)))));
    }
    var_21 |= ((/* implicit */_Bool) var_17);
}
