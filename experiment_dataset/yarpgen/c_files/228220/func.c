/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228220
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
    var_10 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? ((~(((((/* implicit */_Bool) 1415548359)) ? (-1077635760) : (((/* implicit */int) (unsigned char)48)))))) : (((/* implicit */int) var_4))));
    var_11 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_12 = ((/* implicit */short) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_13 = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_1]))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (arr_0 [(short)18])))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (arr_0 [i_1]))) : (arr_0 [i_1])))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
    }
    var_15 = var_1;
    var_16 = (~(((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_0)))))));
}
