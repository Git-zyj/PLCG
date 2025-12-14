/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204998
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1 + 2])) ? (((((/* implicit */_Bool) var_9)) ? (arr_5 [14ULL] [i_1 + 3]) : (((/* implicit */unsigned long long int) 262143LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))))))))) ? (var_6) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(short)6]))) * (arr_1 [i_0]))))))))));
                var_17 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(7147881629851129018ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33372))) : (arr_6 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 3])))))));
                var_18 = ((unsigned long long int) ((((/* implicit */int) (signed char)58)) < (arr_4 [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_9);
}
