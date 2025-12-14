/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25636
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-13206))));
        var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) (short)13352))))) : (((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */_Bool) (short)-16404)) ? (58720256) : (var_9))), (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(1424251047U)))) || (((/* implicit */_Bool) ((unsigned short) (signed char)(-127 - 1)))))))));
        var_12 ^= ((/* implicit */signed char) (-(((int) (+(((/* implicit */int) var_10)))))));
    }
    var_13 -= ((/* implicit */short) var_10);
}
