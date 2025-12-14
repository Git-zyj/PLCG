/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191883
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) arr_2 [i_1 - 1]);
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) var_2))))), (min((((/* implicit */unsigned int) (signed char)112)), (arr_3 [i_1] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1 - 2]))) : (max((((/* implicit */long long int) arr_1 [i_0] [i_1 + 1])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (var_14)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_13);
}
