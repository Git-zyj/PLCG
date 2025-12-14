/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40603
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
    var_17 = ((/* implicit */int) (~(min((((var_7) >> (((((/* implicit */int) var_4)) - (31933))))), (((/* implicit */unsigned long long int) var_6))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) ^ ((~(939524096U)))))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) 939524096U);
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((+((~(var_10))))) != (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)0)), (213439422)))))))));
            }
        } 
    } 
}
