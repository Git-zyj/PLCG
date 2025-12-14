/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42803
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
    var_18 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) var_12)), (var_15))))), (((-9147929207636143670LL) - (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (signed char)-85);
                arr_6 [i_0] [i_0] = ((/* implicit */short) var_0);
            }
        } 
    } 
}
