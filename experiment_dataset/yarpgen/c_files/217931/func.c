/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217931
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_15)), (var_19)));
    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [8LL] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                arr_5 [i_0] = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_13);
}
