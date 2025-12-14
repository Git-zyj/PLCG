/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231949
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
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-23604))))), (((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)20]))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (unsigned short)48415))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1037687677247817042LL)) && (((/* implicit */_Bool) -1037687677247817043LL))))) : (((/* implicit */int) arr_5 [i_1] [i_0 + 2] [i_0 + 2])))))));
                var_16 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1037687677247817042LL)) ? (((/* implicit */int) ((1037687677247817037LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11237)))))) : (((/* implicit */int) ((unsigned char) (unsigned short)21372))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (-(max((var_0), (((/* implicit */unsigned long long int) var_3))))));
}
