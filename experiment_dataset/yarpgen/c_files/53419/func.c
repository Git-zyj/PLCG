/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53419
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 510U))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) var_3)) + (((((/* implicit */long long int) 4294966785U)) & (8223062228039884794LL))))) / (((/* implicit */long long int) var_3))));
                var_18 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) -8223062228039884795LL)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (short)8388)))) : (((/* implicit */int) ((unsigned short) var_3))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_6);
}
