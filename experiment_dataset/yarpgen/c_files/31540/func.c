/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31540
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
    var_18 |= ((/* implicit */unsigned char) (~((((+(((/* implicit */int) (signed char)75)))) - (((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33830))))) : ((~(((/* implicit */int) arr_0 [i_0 - 1] [i_0])))))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))) : (((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10)))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_0 [i_0] [i_0]))));
        arr_2 [(unsigned char)2] = ((/* implicit */long long int) arr_0 [i_0] [i_0 - 1]);
    }
    var_22 = (!(((/* implicit */_Bool) var_16)));
    var_23 = ((/* implicit */int) var_0);
}
