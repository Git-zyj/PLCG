/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245426
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) max((472661457289936637LL), (2565472403374491105LL)))) ? ((+(((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_0]));
                var_21 &= ((/* implicit */signed char) (unsigned short)51196);
            }
        } 
    } 
}
