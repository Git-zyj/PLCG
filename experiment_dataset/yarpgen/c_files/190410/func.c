/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190410
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (1512293755U)))) ? (((((/* implicit */_Bool) (signed char)127)) ? (arr_0 [i_0] [i_1]) : (arr_1 [i_0]))) : (((((/* implicit */int) arr_2 [i_1] [i_1])) >> (((arr_1 [i_0]) + (1644006368)))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0] [i_0])), (arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0]))) : (var_6)))) && (((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_10))))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */int) (signed char)116)) >> (((/* implicit */int) arr_4 [i_0] [i_1])))) : (arr_1 [7])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_6);
}
