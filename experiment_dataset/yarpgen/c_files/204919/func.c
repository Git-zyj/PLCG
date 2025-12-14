/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204919
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) && (arr_0 [i_0] [i_0])));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((((/* implicit */int) (unsigned short)304)) / (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((2070985406U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_5 [i_1]) << (((((/* implicit */int) (short)12428)) - (12425))))) + (arr_5 [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) (unsigned short)22292))))) | (((/* implicit */int) ((((/* implicit */unsigned int) 222383946)) != (arr_3 [i_1]))))))) : (((((/* implicit */_Bool) 2070985406U)) ? (((arr_3 [(unsigned char)8]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)14] [i_1])))))));
    }
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))))));
}
