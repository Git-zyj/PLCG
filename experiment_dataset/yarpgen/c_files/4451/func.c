/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4451
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
    var_17 = ((/* implicit */unsigned long long int) ((signed char) (~(((((/* implicit */_Bool) var_0)) ? (var_5) : (var_1))))));
    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)6458)) : (((/* implicit */int) var_9)))))) ? ((-(var_0))) : (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) (signed char)-25))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((signed char) (signed char)-123)))));
    }
    var_21 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) min(((short)11321), (var_13)))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(67100672U))))))))));
}
