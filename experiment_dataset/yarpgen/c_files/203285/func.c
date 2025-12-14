/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203285
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((min((2920241556434153291ULL), (var_0))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) ^ (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_5)) ^ (arr_2 [i_1] [(_Bool)1]))), (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_1))))))))))));
                var_16 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                var_17 *= ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-22))))) > (min((((/* implicit */unsigned long long int) var_13)), (var_0))))))));
    var_19 -= ((/* implicit */unsigned short) max((((short) 668460601626483123ULL)), (((/* implicit */short) var_7))));
}
