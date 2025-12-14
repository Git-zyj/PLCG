/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50545
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
    var_15 = ((/* implicit */unsigned char) (signed char)-35);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_16 ^= (((!(arr_1 [i_0 + 1] [i_0 - 1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))));
        var_17 *= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
    }
}
