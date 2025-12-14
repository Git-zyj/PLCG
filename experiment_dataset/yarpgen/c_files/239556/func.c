/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239556
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
    var_20 = ((/* implicit */long long int) var_12);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 1073741823LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0))))) && (((_Bool) var_14)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_22 *= (~(((((arr_1 [i_0 - 1]) + (9223372036854775807LL))) >> (((arr_1 [i_0 - 1]) + (6186151671276024890LL))))));
        var_23 ^= ((/* implicit */short) (((~(arr_1 [i_0 - 1]))) % (((long long int) arr_1 [i_0 - 1]))));
    }
    var_24 = ((/* implicit */_Bool) min(((+(((/* implicit */int) var_13)))), (((int) (-(var_7))))));
}
