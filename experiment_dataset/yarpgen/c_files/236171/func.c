/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236171
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
    var_19 = ((/* implicit */unsigned short) 17302408774968667267ULL);
    var_20 = ((/* implicit */signed char) min((min((1144335298740884348ULL), (((/* implicit */unsigned long long int) ((unsigned int) var_17))))), (((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (17302408774968667267ULL) : (var_14))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (arr_4 [8U]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 - 3])))))));
                arr_5 [(signed char)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0 + 3])) : (var_7))) % (((unsigned long long int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)91), ((signed char)-91))))) : (max((((((/* implicit */unsigned long long int) var_16)) ^ (var_4))), (max((var_15), (17302408774968667267ULL)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_9);
}
