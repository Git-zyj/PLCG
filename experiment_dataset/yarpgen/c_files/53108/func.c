/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53108
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((3885951642U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-489))))))));
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((((/* implicit */int) arr_3 [10U] [10U])) / (((/* implicit */int) arr_0 [i_2] [i_0]))))))) > ((~(3620686162U)))));
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) 17U)) ? (arr_4 [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
                    var_18 = arr_7 [i_1];
                }
            } 
        } 
    } 
}
