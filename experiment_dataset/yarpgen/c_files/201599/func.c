/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201599
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
    var_19 |= ((/* implicit */signed char) min((var_16), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))))));
    var_20 = ((/* implicit */signed char) 2719110394U);
    var_21 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(var_0)))), (((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)16)))))));
                arr_4 [i_0] [i_1] [i_1 + 3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_1 + 1]))))));
                arr_5 [i_0] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_1 - 1]))))) > (((((/* implicit */unsigned int) arr_3 [i_0])) % (arr_1 [i_1] [i_0])))));
            }
        } 
    } 
}
