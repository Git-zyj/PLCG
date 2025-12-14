/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41660
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((min((var_9), (1683750024767842603ULL))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_15))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (((17317308137472ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0 - 1] [i_0] = ((((/* implicit */_Bool) (+(((1683750024767842605ULL) ^ (var_4)))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6916))) > (1683750024767842605ULL))));
                arr_5 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                var_17 |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1])))), ((-(((/* implicit */int) (signed char)127))))));
                arr_6 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)212))));
            }
        } 
    } 
}
