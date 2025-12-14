/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240683
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
    var_18 = ((/* implicit */unsigned char) var_16);
    var_19 += ((/* implicit */unsigned char) 4294967285U);
    var_20 = ((/* implicit */long long int) 4294967282U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 13U)) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_0 [(short)14])) + (((/* implicit */int) var_1))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)-7))))));
        var_23 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_24 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (8U))));
    }
    for (unsigned char i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((/* implicit */long long int) 2009332631)), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [0U] [0U]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [8U] [8U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) : ((+(-21LL))))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */long long int) var_12);
    }
}
