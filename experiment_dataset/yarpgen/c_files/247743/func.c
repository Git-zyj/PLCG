/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247743
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
    for (signed char i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_17 += min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) var_5))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [5U] [i_0 - 2]))) * (3033660154U))));
        arr_2 [(_Bool)1] = max((((/* implicit */unsigned int) (!(arr_1 [(unsigned char)10] [i_0 + 2])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [13U]))) - (2911748744U))))));
    }
    var_18 *= ((/* implicit */signed char) var_1);
}
