/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4577
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned short) (short)-3807)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) var_13);
                    var_17 *= ((short) (!(((/* implicit */_Bool) arr_5 [i_0] [(short)14] [i_2]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30308)) && (((/* implicit */_Bool) var_7))))) & (min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned short)41910))))));
}
