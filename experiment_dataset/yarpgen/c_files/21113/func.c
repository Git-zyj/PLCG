/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21113
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) var_7))))))))));
                arr_6 [(signed char)18] [i_1] [i_0] = 0U;
            }
        } 
    } 
    var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((-9223372036854775807LL), ((((_Bool)1) ? (var_6) : (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    var_16 = ((/* implicit */unsigned short) var_14);
}
