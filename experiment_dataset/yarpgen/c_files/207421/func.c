/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207421
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */int) -5431246982471543409LL);
                    arr_9 [i_0] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 1124589251U))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) var_2);
}
