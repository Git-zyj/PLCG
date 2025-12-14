/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202195
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1 - 1] [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) (short)30386);
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) 1769891158023187422ULL));
                    var_11 = ((/* implicit */short) var_7);
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */_Bool) (short)30386)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30031))) : (var_5));
}
