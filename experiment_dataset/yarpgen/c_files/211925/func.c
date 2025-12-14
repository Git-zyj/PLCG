/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211925
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
    var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) (short)1416))))) ? ((~(var_9))) : (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))), (var_9)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? ((~(var_11))) : ((((!(((/* implicit */_Bool) (short)1412)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (arr_0 [i_0 - 1] [i_0]))) : (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_5))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (~((+((~(((/* implicit */int) (short)1402))))))));
                    arr_10 [i_0] = ((/* implicit */int) arr_4 [i_0] [i_1]);
                }
            } 
        } 
        var_19 ^= ((/* implicit */unsigned char) arr_2 [i_0] [i_0 - 1]);
    }
}
