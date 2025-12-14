/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245737
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
    var_10 = ((/* implicit */int) min((((/* implicit */unsigned int) var_6)), ((-(min((((/* implicit */unsigned int) var_7)), (var_2)))))));
    var_11 ^= ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned int) (~(var_6)))), (var_2))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_1))) ? (((((var_5) - (-6583139562028493020LL))) - (((/* implicit */long long int) (-(var_6)))))) : (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((signed char) ((_Bool) var_3)));
                arr_5 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned int) var_7);
}
