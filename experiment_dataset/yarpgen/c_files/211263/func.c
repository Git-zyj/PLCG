/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211263
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) 3482973600638997721LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (-6943867587926904702LL))))) & (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) var_15)))))));
                arr_7 [i_0] = ((/* implicit */short) ((max((min((var_10), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) max((var_13), (var_7)))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (short)15801)) ? (((((/* implicit */int) (signed char)4)) >> (((3716970978U) - (3716970971U))))) : (((/* implicit */int) (unsigned char)15)))))));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) var_9)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_16);
    var_19 = (+(((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_15)) - (81)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_7)))));
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_14))));
}
