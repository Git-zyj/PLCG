/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245026
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
    var_11 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned int) 2727602284U))) ? (((/* implicit */unsigned long long int) var_1)) : (((unsigned long long int) (unsigned short)59136)))), (((/* implicit */unsigned long long int) ((2727602276U) % (2727602280U))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))) >= (arr_3 [i_0] [i_0]))) ? (((arr_3 [i_1] [i_0]) % (9910209231701709527ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) << (((((/* implicit */int) (signed char)(-127 - 1))) + (137))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) (-(((((_Bool) (_Bool)1)) ? (var_6) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (max((12897956321976707738ULL), (var_5)))))) || (((/* implicit */_Bool) 9223372036854775807LL))));
}
