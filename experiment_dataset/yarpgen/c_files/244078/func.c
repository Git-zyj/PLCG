/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244078
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_13 = var_2;
        arr_2 [8LL] = ((/* implicit */signed char) var_7);
    }
    for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        var_14 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_1)))) - (((/* implicit */int) var_9))))) ? (((((((/* implicit */int) var_10)) + (((/* implicit */int) var_12)))) + (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_0 [(unsigned char)11] [i_1]))))))) : (((/* implicit */int) arr_1 [(short)0] [i_1])));
        var_15 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_0 [i_1 + 1] [i_1])))), ((+(((/* implicit */int) (unsigned char)63))))));
        var_16 = ((/* implicit */short) ((((/* implicit */int) var_3)) <= (((((/* implicit */int) min((((/* implicit */short) arr_4 [i_1])), (var_2)))) ^ (((/* implicit */int) var_5))))));
    }
    var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) var_10)) || (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11)))))), ((!(((/* implicit */_Bool) max((var_1), (var_0))))))));
    var_18 = ((/* implicit */short) ((((long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8))))) > (((/* implicit */long long int) ((/* implicit */int) var_7)))));
}
