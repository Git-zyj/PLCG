/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192066
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_15 &= ((/* implicit */short) 6ULL);
                    var_16 = ((/* implicit */unsigned int) min((((_Bool) arr_7 [i_1] [i_2 + 1] [i_2 + 1])), (((_Bool) 45387077))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min(((~(min((arr_0 [i_1]), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) var_2))))) || (((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) & (var_12))))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((var_9), (((signed char) 14ULL)))))));
}
