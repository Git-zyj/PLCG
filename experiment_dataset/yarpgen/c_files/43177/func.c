/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43177
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) (+(7683049823232230844ULL)));
                    arr_7 [i_0] [i_2] [(short)0] [i_1] = ((/* implicit */unsigned long long int) ((var_0) + (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_19 = var_9;
}
