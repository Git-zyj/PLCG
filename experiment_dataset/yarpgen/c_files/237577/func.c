/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237577
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 = arr_3 [i_1 - 2] [(unsigned short)10] [i_1 - 2];
                var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 - 2]);
                var_17 = arr_2 [10] [10] [10];
            }
        } 
    } 
    var_18 ^= var_3;
}
