/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219902
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7311)) ? (696321258U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_10 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_9))))), (var_6)))) ? (((/* implicit */int) ((unsigned short) (-(16066006025966750442ULL))))) : (((/* implicit */int) ((min((2497828568246614494ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_0]))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? ((~(9223372036854775792LL))) : (((/* implicit */long long int) var_3)))));
}
