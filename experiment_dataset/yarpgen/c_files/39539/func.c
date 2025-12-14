/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39539
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
    var_11 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (3674364154792782955ULL)))) ? (((/* implicit */unsigned long long int) (+(511LL)))) : (min((((/* implicit */unsigned long long int) (unsigned short)14771)), (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (short)-10362)) ? (((/* implicit */int) (signed char)121)) : (983986050))) : (((/* implicit */int) ((unsigned short) var_8))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [1ULL] [i_1] [i_1 - 2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((unsigned char) 1359860586))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (2744767226627674931LL))))) : (((483LL) ^ (((/* implicit */long long int) var_2))))))));
                    arr_7 [i_0] = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) 805306368)) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (short)14)))))), (((/* implicit */int) (!(((/* implicit */_Bool) 511LL)))))));
                }
            } 
        } 
    } 
}
