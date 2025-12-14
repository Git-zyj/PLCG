/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227686
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
    var_17 = ((((/* implicit */_Bool) (-((~(var_1)))))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) var_15))))) : (var_16));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((((/* implicit */int) arr_6 [i_0] [i_0])) + (((/* implicit */int) arr_6 [i_0] [i_0])))) : (((/* implicit */int) var_10))));
                    arr_8 [i_1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_5 [i_1 - 1] [i_2 - 1]))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-39)) >= (((/* implicit */int) arr_6 [i_1] [i_2 - 1])))))));
                }
            } 
        } 
    } 
}
