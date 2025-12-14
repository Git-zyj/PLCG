/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190882
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) arr_0 [i_1]);
                arr_5 [i_0] [i_0 - 1] = ((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 1]);
                var_13 &= ((/* implicit */int) max((((/* implicit */unsigned short) ((short) ((unsigned int) var_4)))), (var_9)));
            }
        } 
    } 
    var_14 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-117)) || (((/* implicit */_Bool) -1152667949))));
    var_15 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((-3214833867453034284LL) ^ (((/* implicit */long long int) -1272156003))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (2158316778839344684LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
}
