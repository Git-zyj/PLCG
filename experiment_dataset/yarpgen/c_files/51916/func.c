/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51916
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 += ((/* implicit */unsigned long long int) var_1);
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) var_11);
                var_16 &= (~(arr_3 [i_0]));
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_9))));
}
