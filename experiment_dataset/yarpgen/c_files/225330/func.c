/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225330
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_3 [5LL] [i_0] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) var_13))))), (4294967295U)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_0 [i_0 - 3])), (var_1))), (((/* implicit */long long int) 1U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)46)))) : (((unsigned int) (_Bool)1))));
                    arr_9 [i_0] = ((/* implicit */unsigned short) (signed char)15);
                }
            } 
        } 
    }
    var_15 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2));
}
