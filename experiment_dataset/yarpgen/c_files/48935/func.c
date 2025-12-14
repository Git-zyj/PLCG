/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48935
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
    var_19 |= ((/* implicit */signed char) ((unsigned int) var_3));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
                var_21 = ((/* implicit */long long int) arr_2 [i_0]);
                arr_4 [i_0 - 1] &= ((/* implicit */signed char) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
            }
        } 
    } 
}
