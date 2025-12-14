/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30138
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((1089517282437065579ULL) >= (((/* implicit */unsigned long long int) 1829077029))))), (((1829077029) / (-1829077027)))));
                    var_11 = ((/* implicit */signed char) max((((unsigned long long int) 3142840444101959537ULL)), (((((/* implicit */unsigned long long int) ((-473415791) * (((/* implicit */int) (_Bool)1))))) & (((8448723823996960617ULL) + (3142840444101959540ULL)))))));
                    var_12 = ((/* implicit */_Bool) (-(((3142840444101959540ULL) - (((/* implicit */unsigned long long int) 1829077024))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) -808428996))));
}
