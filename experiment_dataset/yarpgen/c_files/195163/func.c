/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195163
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [(signed char)20] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(4174298245U))))));
                var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)2))));
                var_17 = ((/* implicit */int) (-(((arr_4 [i_1]) / (arr_4 [i_1])))));
                arr_7 [i_1] [i_1] = ((/* implicit */int) arr_3 [i_1] [i_0] [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) max((var_18), (var_11)));
}
