/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5488
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
    var_14 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_0]))))) / (((((/* implicit */_Bool) 1170923061U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((unsigned int) ((((/* implicit */_Bool) var_7)) ? (-1421453226) : (arr_2 [(short)6]))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(((((/* implicit */_Bool) ((arr_2 [i_0]) & (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((((/* implicit */int) arr_5 [i_0 + 1] [7U])) & (((/* implicit */int) (short)16128)))) : (((/* implicit */int) arr_1 [i_0 - 1])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((-860297843) / (((/* implicit */int) (short)16128)))) : (((/* implicit */int) var_10)))))));
    var_17 = ((/* implicit */long long int) max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) % (var_4))))));
}
