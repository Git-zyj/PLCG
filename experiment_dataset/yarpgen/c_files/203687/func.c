/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203687
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) (!((_Bool)0)))), (((((16777215) * (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (_Bool)1))))));
                    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (arr_5 [(_Bool)1] [i_2]))), ((+(((/* implicit */int) (signed char)120))))))), (min((((/* implicit */unsigned int) 1477358641)), (4294967287U)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_12);
}
