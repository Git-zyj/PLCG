/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216866
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_16 = var_11;
                    arr_7 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-1488960786), (((/* implicit */int) (unsigned char)0))))) ? (((max((0ULL), (8493912890751335451ULL))) - (arr_1 [i_1]))) : (var_4)));
                    arr_8 [i_2] [i_2] [i_2] [i_2] = min((((unsigned long long int) arr_1 [i_2])), ((+(var_1))));
                }
            } 
        } 
    } 
    var_17 = var_0;
}
