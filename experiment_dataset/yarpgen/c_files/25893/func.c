/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25893
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
    var_15 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)53146)) + (((/* implicit */int) (_Bool)0))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)61)))) & (((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))));
                    var_17 = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)56)))), (((/* implicit */int) (signed char)125))))));
                }
            } 
        } 
    } 
}
