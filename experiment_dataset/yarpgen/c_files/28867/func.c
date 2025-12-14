/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28867
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))) & (((/* implicit */long long int) ((unsigned int) 1174876280U)))))) ? (((/* implicit */long long int) ((var_15) >> ((((((_Bool)1) ? (((/* implicit */long long int) var_15)) : (-9223372036854775780LL))) - (109308660LL)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))) : (((((/* implicit */long long int) var_8)) - (var_14)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_5 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))), (min((arr_4 [i_1] [i_1 - 1]), (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(var_8))), (4294967295U)))) ? (min(((+(-6544408257719699559LL))), (((/* implicit */long long int) ((unsigned int) 4294967295U))))) : (((/* implicit */long long int) ((arr_1 [i_1 - 1] [i_1 - 1]) - ((+(2761168749U))))))));
            }
        } 
    } 
    var_20 = (!((_Bool)1));
}
