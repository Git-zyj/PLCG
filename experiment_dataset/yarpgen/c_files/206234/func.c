/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206234
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_4))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-15123))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_7))))))) / (min((arr_0 [i_0]), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))) >= (((((/* implicit */_Bool) (short)15113)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) ? (8064U) : (max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    var_13 = ((/* implicit */unsigned short) var_9);
}
