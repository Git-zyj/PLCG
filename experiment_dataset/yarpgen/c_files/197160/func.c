/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197160
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 14212610542885405760ULL)) ? (14212610542885405764ULL) : (max((((/* implicit */unsigned long long int) (signed char)48)), (4234133530824145856ULL))))) : (((/* implicit */unsigned long long int) 25U))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) 4234133530824145852ULL))), (((((/* implicit */_Bool) (+(4234133530824145852ULL)))) ? (max(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233)))))));
                var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 520556175))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (((((/* implicit */_Bool) max(((unsigned char)247), ((unsigned char)171)))) ? (((/* implicit */unsigned long long int) min((395492596U), (((/* implicit */unsigned int) var_13))))) : (max((14212610542885405762ULL), (14212610542885405759ULL)))))));
            }
        } 
    } 
}
