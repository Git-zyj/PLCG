/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243480
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
    var_17 = var_1;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = (+(((((/* implicit */unsigned int) 2147483647)) & (12U))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) : (((arr_0 [i_0]) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        var_19 = (~(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [10U]))))), (arr_2 [i_0]))));
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((arr_2 [i_0]) ^ (0U)))))));
        arr_4 [i_0] = (~(4294967283U));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */long long int) ((arr_6 [i_1] [(short)12]) ? ((+(min((((/* implicit */unsigned int) (_Bool)1)), (2097152U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) arr_7 [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1])) | (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)(-32767 - 1))))) : (((((/* implicit */unsigned int) 32767)) & (var_15)))))));
    }
}
