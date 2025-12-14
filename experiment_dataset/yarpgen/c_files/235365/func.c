/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235365
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 *= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (arr_7 [i_1 - 2] [i_1 - 2] [(signed char)0]) : (var_8)))), (max((arr_4 [i_1 - 3]), (arr_4 [i_1 + 1]))));
                    var_21 = ((/* implicit */signed char) (~(0ULL)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_9);
}
