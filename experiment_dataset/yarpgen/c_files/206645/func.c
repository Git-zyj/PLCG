/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206645
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
    var_20 = ((/* implicit */_Bool) var_17);
    var_21 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (-(arr_1 [i_0 + 2])));
        arr_2 [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0 + 2])) / ((+(((/* implicit */int) var_2))))));
        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) && (var_14)));
        var_24 = ((/* implicit */signed char) ((arr_1 [i_0 - 1]) > (2147483647)));
    }
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1431509739U)) ? (2U) : (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : ((-9223372036854775807LL - 1LL))))))));
    var_26 ^= ((/* implicit */signed char) ((var_13) - (var_13)));
}
