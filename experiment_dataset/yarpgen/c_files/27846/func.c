/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27846
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (var_12)));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [(short)13]);
                }
            } 
        } 
    } 
    var_15 = var_13;
    var_16 = ((/* implicit */unsigned char) var_5);
}
