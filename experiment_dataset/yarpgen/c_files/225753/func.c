/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225753
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
    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_0)) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))) != (var_0))))) : (max((18446744073709551604ULL), (((/* implicit */unsigned long long int) (unsigned char)17)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)56)))))));
    var_15 += ((/* implicit */unsigned char) 3474936026U);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((unsigned char) ((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_1 + 1])))))))));
                var_17 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)14336)), (var_13)))) || ((!(((/* implicit */_Bool) var_2)))))));
            }
        } 
    } 
}
