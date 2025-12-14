/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29017
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 &= ((/* implicit */long long int) (-((~(((/* implicit */int) arr_1 [3U] [i_0]))))));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                var_18 = ((/* implicit */int) (signed char)34);
            }
        } 
    } 
    var_19 &= ((/* implicit */long long int) ((var_7) % (((/* implicit */int) var_1))));
}
