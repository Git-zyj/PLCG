/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225716
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_1] [i_1 + 3])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((arr_3 [i_1] [i_1]) / (arr_3 [i_1] [i_1]))) : (((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) + (309611771U)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_1] [i_1])))))));
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) min((var_10), (((unsigned int) var_9))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */long long int) var_2)) | (((((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_1))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
}
