/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208253
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_4);
        arr_2 [i_0] = ((/* implicit */signed char) (((-(var_11))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        var_17 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)127), ((unsigned short)65420)))) ? (((((/* implicit */_Bool) 1152912708513824768ULL)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    var_19 = ((/* implicit */long long int) var_2);
    var_20 *= var_2;
}
