/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52141
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (short)32134)) && (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [15U] [(_Bool)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)50))))))) && (((/* implicit */_Bool) arr_0 [i_1]))));
                var_20 = ((/* implicit */unsigned long long int) min((8444249301319680LL), (((/* implicit */long long int) arr_0 [i_0 + 1]))));
            }
        } 
    } 
}
