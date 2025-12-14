/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197180
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((_Bool) var_8)))));
                var_18 = max((min((((/* implicit */long long int) arr_0 [i_0] [(signed char)6])), (((11LL) | (((/* implicit */long long int) arr_3 [i_1] [(short)5])))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1)));
}
