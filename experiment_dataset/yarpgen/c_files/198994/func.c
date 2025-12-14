/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198994
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (((+(((arr_1 [15U] [i_0]) + (var_0))))) != ((~(((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (var_0) : (arr_4 [i_0] [i_1] [i_2])))))));
                    var_15 = (+(3589677796U));
                }
            } 
        } 
    } 
    var_16 = ((((780901860U) * ((+(599737522U))))) / (599737538U));
}
