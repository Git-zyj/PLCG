/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47451
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [0] [i_1 + 1] [0] &= ((/* implicit */signed char) min((((((/* implicit */_Bool) 13750813556968794309ULL)) ? (((/* implicit */int) (short)13687)) : (-1477628381))), (max(((-(((/* implicit */int) (unsigned short)23699)))), (((/* implicit */int) arr_2 [i_0] [(unsigned short)6]))))));
                    var_14 = ((/* implicit */unsigned int) (unsigned short)41854);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_0);
}
