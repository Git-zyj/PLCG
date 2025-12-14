/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209538
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))) != (var_1)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) var_9);
                arr_6 [i_0] [i_1] = min((arr_0 [i_1 + 1]), (((/* implicit */long long int) arr_3 [i_1 - 1])));
            }
        } 
    } 
}
