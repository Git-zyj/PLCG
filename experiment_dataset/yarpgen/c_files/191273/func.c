/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191273
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
    var_19 = ((/* implicit */unsigned int) var_10);
    var_20 = (+(var_18));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [13U] = ((long long int) var_5);
                arr_7 [i_0] [14U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [20LL])) ? ((+(max((var_3), (var_15))))) : (max((var_8), (arr_4 [i_0])))));
            }
        } 
    } 
}
