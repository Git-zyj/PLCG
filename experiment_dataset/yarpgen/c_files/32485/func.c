/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32485
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
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned short) var_9))))), (var_3)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned char) (_Bool)0))))), ((-9223372036854775807LL - 1LL)))), (max((9223372036854775807LL), (((/* implicit */long long int) ((_Bool) (-9223372036854775807LL - 1LL))))))));
                var_18 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)4))))) && (((/* implicit */_Bool) arr_1 [i_1])))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1039546915)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_1])))) : (((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (min((((/* implicit */long long int) 2147483647)), (2357248879018937763LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) -1937555001)) ^ (1419031693U))))))));
                var_20 = ((unsigned char) var_6);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_14);
    var_22 = ((/* implicit */signed char) var_14);
}
