/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51320
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) ((unsigned char) max((min((var_11), (var_8))), (((/* implicit */short) var_19)))));
            var_21 = ((/* implicit */int) ((((unsigned int) var_10)) << (((min((max((((/* implicit */int) var_16)), (arr_4 [(_Bool)1] [i_1] [(unsigned short)1]))), (arr_4 [9] [i_1] [12]))) + (1689907892)))));
        }
        var_22 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_23 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) 178499010U))))) ? (min((arr_4 [17ULL] [i_0] [i_0]), (673635954))) : (((/* implicit */int) ((_Bool) arr_5 [i_0] [(short)17] [i_0]))))) + (((/* implicit */int) arr_0 [i_0]))));
    }
    var_24 = var_19;
}
