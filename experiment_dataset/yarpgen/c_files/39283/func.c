/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39283
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
    var_14 -= ((/* implicit */unsigned long long int) var_9);
    var_15 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)14420))))), (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)32911)), (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [i_1 + 3])))));
                arr_6 [i_0 - 1] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned short)37316))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))) >= (var_1)))), (var_5)));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((~(var_11))) : (var_2)))) || ((((-(((/* implicit */int) var_12)))) > (((((/* implicit */int) (unsigned short)14419)) >> (((((/* implicit */int) var_8)) - (36905)))))))));
}
