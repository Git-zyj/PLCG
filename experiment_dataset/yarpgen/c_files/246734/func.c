/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246734
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) (short)-13011)), (arr_2 [i_0] [(_Bool)1]))))) | (((/* implicit */unsigned long long int) 910008323))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (signed char)47))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
}
