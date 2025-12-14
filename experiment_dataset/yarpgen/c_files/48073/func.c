/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48073
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_18) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4135794434U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3891))) : ((+(4294967282U)))));
                var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + ((((_Bool)1) ? (((-2247111130213648142LL) + (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-11991)))))));
                var_21 |= ((_Bool) var_16);
                var_22 = ((unsigned long long int) -384213689);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 307081611)) ? (((/* implicit */int) (short)31797)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)2))))));
}
