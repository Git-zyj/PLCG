/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203482
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
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] [i_2] = arr_5 [i_0] [(unsigned short)5] [i_2];
                    var_17 |= ((/* implicit */short) arr_1 [i_0 + 1]);
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned long long int) var_7);
}
