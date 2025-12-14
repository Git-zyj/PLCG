/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211813
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
    var_12 = ((/* implicit */int) ((5332349341155384320LL) % (((/* implicit */long long int) var_7))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)7))))));
                var_14 = ((/* implicit */unsigned long long int) ((short) (signed char)112));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (-((((-(-5332349341155384303LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2357)))))));
}
