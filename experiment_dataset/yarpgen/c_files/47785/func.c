/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47785
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))));
    var_13 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_11)))) == (((/* implicit */int) var_11))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_0)))) ? (((/* implicit */int) ((short) 60761276U))) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (unsigned short)7492)))))))));
                var_16 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) min(((signed char)56), (((/* implicit */signed char) arr_2 [i_0] [i_0]))))) ? (858931550U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (var_1))))))), (((/* implicit */unsigned int) (signed char)-79))));
            }
        } 
    } 
    var_17 = var_1;
}
