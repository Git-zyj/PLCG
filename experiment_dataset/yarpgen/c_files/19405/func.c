/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19405
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */int) var_12)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_1 + 2] [i_2])))))));
                    var_17 ^= ((/* implicit */_Bool) (+((((+(2057133732110914249LL))) / (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_0 [i_1])))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_10);
}
