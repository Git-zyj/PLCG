/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213286
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (short)2136);
                arr_6 [i_1] [i_1] [i_0] = max((((/* implicit */unsigned int) var_1)), (var_8));
            }
        } 
    } 
    var_12 = ((/* implicit */short) var_6);
    var_13 = ((/* implicit */int) (unsigned short)62214);
    var_14 ^= ((/* implicit */unsigned int) var_0);
}
