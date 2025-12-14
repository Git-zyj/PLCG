/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246473
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
    var_10 |= ((/* implicit */short) ((((/* implicit */_Bool) max((max((0ULL), (((/* implicit */unsigned long long int) var_6)))), ((~(8059464007816128310ULL)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))));
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)59733)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 3] [i_1] = (!(((/* implicit */_Bool) ((8059464007816128308ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 - 1])) >> (((((/* implicit */int) var_7)) - (15897))))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 8059464007816128310ULL)) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0])))) == (((((/* implicit */int) arr_2 [i_1])) + (((/* implicit */int) var_5)))))) ? ((~(10387280065893423314ULL))) : (10387280065893423305ULL)));
            }
        } 
    } 
}
