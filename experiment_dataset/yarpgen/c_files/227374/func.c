/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227374
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
    var_18 = ((/* implicit */signed char) (~(max(((+(((/* implicit */int) (signed char)-46)))), (((/* implicit */int) (_Bool)0))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_8)), (var_13)))))) : ((-(((long long int) (unsigned char)64))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-34))))) ? (((arr_0 [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)50)))) : (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0])), (((1133079150U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))));
                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1])))))));
            }
        } 
    } 
}
