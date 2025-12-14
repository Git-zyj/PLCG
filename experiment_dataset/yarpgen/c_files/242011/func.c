/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242011
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(max((((/* implicit */unsigned long long int) 1833657138)), (0ULL))))))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (min((var_17), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_3);
}
