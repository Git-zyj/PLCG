/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248614
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
    var_15 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) ((unsigned int) 7U));
                arr_5 [i_0] = ((((((unsigned int) 1233930388)) <= (((/* implicit */unsigned int) ((int) 4294967295U))))) ? (((((/* implicit */_Bool) 3288246050U)) ? (((var_0) + (((/* implicit */unsigned int) -1233930395)))) : (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (1233930410) : (((/* implicit */int) ((arr_0 [i_1]) == (((/* implicit */unsigned int) arr_3 [i_0] [18U] [9U])))))))));
            }
        } 
    } 
    var_16 = ((unsigned int) 2938783822U);
}
