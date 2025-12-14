/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238877
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)0), (((/* implicit */short) (signed char)97))))) ? (var_2) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2))))))));
                var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_4), (var_4))))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */short) var_8);
    var_14 = ((/* implicit */long long int) min((var_14), (var_9)));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))), (var_5))))));
}
