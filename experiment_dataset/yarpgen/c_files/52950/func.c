/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52950
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
    var_10 = ((/* implicit */long long int) var_2);
    var_11 = ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) min((-9223372036854775791LL), (((/* implicit */long long int) (short)23170)))))), ((~(min((-9223372036854775795LL), (9223372036854775791LL)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0 + 1]);
        arr_4 [i_0 + 1] [i_0 + 1] = ((11155047085793598438ULL) >> (((-8LL) + (58LL))));
    }
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
}
