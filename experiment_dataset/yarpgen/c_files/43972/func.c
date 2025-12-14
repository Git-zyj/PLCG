/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43972
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
    var_10 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((3454804097U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1ULL)))))))) ? (min(((-(var_8))), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_2))))) >= (1437442305U)))))));
                var_12 = ((/* implicit */unsigned int) min((((min((5720074587522581325ULL), (((/* implicit */unsigned long long int) var_9)))) / (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1] [i_1])))), (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 2]))) : (((10912338421132800601ULL) - (var_8)))))));
            }
        } 
    } 
}
