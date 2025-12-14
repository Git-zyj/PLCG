/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245022
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
    var_18 = ((/* implicit */signed char) (short)29458);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)29434)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))));
                arr_5 [i_1] = ((/* implicit */signed char) ((max((((((var_10) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-45)) + (49))) - (3))))), (((/* implicit */long long int) var_8)))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
            }
        } 
    } 
}
