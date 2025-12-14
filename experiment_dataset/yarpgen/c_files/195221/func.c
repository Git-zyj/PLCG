/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195221
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
    var_11 |= ((/* implicit */long long int) max((((/* implicit */short) ((((int) var_9)) == (((/* implicit */int) var_4))))), (((short) var_9))));
    var_12 = var_9;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)11)) || ((_Bool)1))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) min((((var_4) ? (var_2) : (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) (unsigned char)171))))) ? (max((min((var_5), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_0)))))))))));
                }
            } 
        } 
    } 
}
