/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30942
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
    var_19 *= ((/* implicit */unsigned short) min(((~((-(1242819663))))), (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0]))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)15))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 3])) : ((-(arr_2 [i_0 - 4] [i_0 + 1])))));
        var_21 *= ((/* implicit */short) (~(((/* implicit */int) (signed char)3))));
        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */int) (signed char)86))));
    }
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)0), (((/* implicit */short) (_Bool)1)))))))))))));
}
