/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211760
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */short) min((((/* implicit */int) ((unsigned short) arr_3 [4] [(short)8]))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((signed char) arr_2 [i_0]))) : (((/* implicit */int) arr_4 [i_0 + 1]))))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) arr_0 [i_0 - 1]));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((short) var_8));
    var_16 &= ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_10)), (((long long int) var_10)))), (((/* implicit */long long int) ((unsigned short) ((short) var_11))))));
}
