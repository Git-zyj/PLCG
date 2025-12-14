/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224646
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2])))))))) || (((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
                    var_16 = arr_7 [i_0];
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        arr_10 [i_3] = ((((/* implicit */_Bool) min((arr_9 [i_3]), (arr_9 [i_3])))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_3])) + (2147483647))) >> (((((1138433687U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)21118))))) - (1138450146U)))))) : ((~(3364371901U))));
        var_17 += ((/* implicit */short) ((min((arr_9 [i_3]), (((/* implicit */unsigned int) arr_8 [2U])))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [4U]))))))))));
    }
}
