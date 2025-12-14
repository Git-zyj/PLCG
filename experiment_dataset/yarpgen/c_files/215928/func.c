/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215928
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_11)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-25)), ((~(2587754640U)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_3))))), (arr_4 [i_2 + 3] [i_2 + 1] [i_2]))) : ((~(((((/* implicit */_Bool) 3ULL)) ? (6694611348291284290ULL) : (((/* implicit */unsigned long long int) var_12)))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)-33);
                    var_18 = (-((-(max((0U), (((/* implicit */unsigned int) arr_6 [i_0])))))));
                }
            } 
        } 
    } 
}
