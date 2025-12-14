/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22707
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0]))));
        var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (287303047U) : (((/* implicit */unsigned int) arr_0 [i_0])))) - (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((/* implicit */int) (unsigned short)14883)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1327813524U)) ? (arr_1 [i_0]) : (arr_1 [6U])))))))));
        var_20 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) : (((((/* implicit */_Bool) (unsigned short)53771)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (((2137658454U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
}
