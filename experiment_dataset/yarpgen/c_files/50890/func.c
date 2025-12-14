/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50890
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2181633270595464751LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_5)) - (414))))) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned short)2144)) ? (2147482624ULL) : (1019584917950241902ULL))) : (((/* implicit */unsigned long long int) 5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-2181633270595464769LL)))) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (signed char)-13))));
                var_15 = ((/* implicit */unsigned char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? ((-(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))))));
                var_16 = ((/* implicit */unsigned char) (short)26043);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) 1984218609))));
}
