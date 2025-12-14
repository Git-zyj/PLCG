/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246972
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
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((var_14) * ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (397248526U))))))))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((short) 3133065120805281003LL)), ((short)-20188))))) > (((((/* implicit */unsigned long long int) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) (short)-20188)))))) | (var_4))))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */long long int) var_9);
    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)39147)) ? (((/* implicit */int) (short)-18674)) : (((/* implicit */int) (short)19665))));
}
