/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37048
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_8))));
    var_13 = ((/* implicit */signed char) min((max(((~(var_9))), (((/* implicit */unsigned long long int) ((3782476483U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) 1822990636269126622ULL))), (var_4))))));
    var_14 ^= ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [(signed char)7] [i_2] [i_1 - 1] [i_2] = ((((/* implicit */unsigned long long int) var_5)) * (max((((/* implicit */unsigned long long int) ((arr_2 [i_0] [(signed char)3] [i_0]) ^ (((/* implicit */int) (signed char)73))))), ((+(1822990636269126622ULL))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */short) arr_3 [i_0] [i_1]))))) ? (min(((~(1184601225269600148ULL))), (((/* implicit */unsigned long long int) ((int) (_Bool)1))))) : (max((arr_5 [i_0] [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_1 + 1] [i_2 - 1] [i_2])))));
                }
            } 
        } 
    } 
}
