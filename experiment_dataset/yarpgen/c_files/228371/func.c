/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228371
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
    var_17 |= ((/* implicit */unsigned long long int) var_16);
    var_18 *= ((/* implicit */short) ((2495638656U) <= (1109135338U)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [14ULL] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((((/* implicit */_Bool) 1109135353U)) && (((/* implicit */_Bool) (short)4095)))))))) ^ (((((/* implicit */_Bool) (short)31924)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7693))) : (arr_1 [i_0] [i_0])))));
        var_19 *= ((/* implicit */short) var_15);
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        arr_6 [(short)2] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-8))));
        var_20 = ((/* implicit */unsigned long long int) (+((~(3826331360U)))));
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(short)6])) ? (arr_5 [(signed char)2]) : (arr_5 [(short)14])));
    }
    var_22 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1799328640U)))))));
}
