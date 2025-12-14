/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214848
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
    var_16 = ((/* implicit */signed char) var_15);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [8U] [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_0)) / (4280013648327782635LL)))) - (max((((/* implicit */unsigned long long int) (signed char)0)), (var_7)))))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4280013648327782635LL)))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (7864599503095526371ULL) : (var_4))), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (max((271738401749346376ULL), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) (unsigned short)15623))))))) : (((max((var_7), (((/* implicit */unsigned long long int) var_15)))) * (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
}
