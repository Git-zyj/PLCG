/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30905
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_17 &= (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)254)) ? (arr_2 [i_0]) : (((/* implicit */int) var_11)))))));
        var_18 = ((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-116)), (arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned int) arr_2 [i_0 + 1])) : (arr_1 [i_0 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2691460474151218883LL))))))));
    }
    var_19 = ((/* implicit */unsigned short) ((var_5) + ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_1))))))));
}
