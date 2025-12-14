/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226458
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
    var_13 = ((/* implicit */short) ((unsigned char) var_1));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((425280711) != (425280711)));
        var_14 = ((/* implicit */unsigned int) ((-425280711) / (425280711)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_5 [(short)1] = ((/* implicit */unsigned char) arr_1 [16]);
        arr_6 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_12))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */int) arr_0 [i_2])) + (((/* implicit */int) arr_10 [i_2]))))));
        var_16 = ((/* implicit */short) max((var_16), (((short) 268427264U))));
        arr_11 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2])))));
    }
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */int) var_12)), ((-((~(((/* implicit */int) var_0)))))))))));
}
