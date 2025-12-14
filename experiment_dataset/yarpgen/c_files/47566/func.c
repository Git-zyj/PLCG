/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47566
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
    var_16 = ((/* implicit */_Bool) var_3);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)102), (var_3)))) != (((/* implicit */int) ((((/* implicit */_Bool) max((var_12), (var_12)))) || (((/* implicit */_Bool) var_2)))))));
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 9053726494653342485ULL)) && (((/* implicit */_Bool) 4294967295U))))) >> (((((/* implicit */int) var_7)) - (119)))))) & (max((((/* implicit */unsigned int) min(((signed char)42), (((/* implicit */signed char) (_Bool)1))))), (min((((/* implicit */unsigned int) var_4)), (1U)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))) != (536870910U))))) & (3782635591468993502LL)));
        arr_3 [i_0] = ((/* implicit */int) ((arr_1 [i_0 + 1] [i_0 + 2]) & (((/* implicit */long long int) var_15))));
        var_19 = ((/* implicit */unsigned int) ((((arr_1 [i_0 - 2] [i_0 - 2]) + (((/* implicit */long long int) 4294967295U)))) < (var_9)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((318828166U) & (536870935U)));
                    arr_11 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)44)) & (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
}
