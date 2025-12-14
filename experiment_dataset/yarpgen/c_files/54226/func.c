/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54226
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
    var_10 ^= ((/* implicit */int) ((unsigned int) 3612235156U));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((unsigned int) max((8888852199447111572ULL), (max((17479673673598261222ULL), (((/* implicit */unsigned long long int) 625022592))))));
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [11U] [i_0 + 3])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 3])) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0] [i_0 - 2]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (arr_1 [3] [i_0 + 3]) : (arr_1 [i_0] [i_0 + 3])))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) != (5127479449968440174ULL))))) * (var_0)));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((7594281676852564805ULL) | (1568572612084236757ULL)))) ? (((((/* implicit */unsigned int) var_2)) ^ (var_7))) : (min((((/* implicit */unsigned int) ((6558345950153173011ULL) == (((/* implicit */unsigned long long int) 0U))))), (((unsigned int) 536854528U)))))))));
    var_13 = max((var_4), (var_0));
}
