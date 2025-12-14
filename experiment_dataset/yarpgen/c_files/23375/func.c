/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23375
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] = var_13;
                var_18 &= ((/* implicit */short) (~((~(((/* implicit */int) (short)(-32767 - 1)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_8);
    var_20 = ((/* implicit */unsigned long long int) var_2);
    var_21 = ((/* implicit */unsigned long long int) var_5);
}
