/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27902
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((var_12) / (((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) arr_0 [i_1] [i_1]);
                    var_20 = ((/* implicit */long long int) ((unsigned short) min(((signed char)-17), ((signed char)59))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_6 [(signed char)4] [i_2] [4] [4])), (arr_7 [i_0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 3545558191327799358ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)63)))))))) - (max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_2] [i_0])), (((unsigned long long int) arr_2 [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((long long int) ((signed char) max((var_16), (((/* implicit */unsigned long long int) var_3)))))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (var_0)))) ? (min((max((var_16), (var_6))), (((/* implicit */unsigned long long int) ((signed char) var_7))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)45)))))));
}
