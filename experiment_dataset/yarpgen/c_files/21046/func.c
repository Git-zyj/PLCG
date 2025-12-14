/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21046
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
    var_19 = ((/* implicit */signed char) var_1);
    var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7))))));
    var_21 *= ((/* implicit */signed char) ((var_8) & (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)24642))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [(unsigned char)4] |= ((/* implicit */int) ((unsigned char) (-(7831042449029745753LL))));
        var_22 = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) arr_0 [i_0 - 1])), (var_15))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [0] [0]);
    }
}
