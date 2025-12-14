/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2882
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 = (~(((/* implicit */int) arr_5 [i_0])));
                    var_20 = (((+(max((arr_0 [i_0] [0]), (arr_3 [i_0 - 2] [i_1] [(signed char)20]))))) & (arr_6 [i_1] [i_0]));
                }
            } 
        } 
    } 
    var_21 = (+((~(min((((/* implicit */int) var_10)), (var_0))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((min((((/* implicit */unsigned long long int) var_6)), (min((var_18), (var_12))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
    var_23 = ((/* implicit */long long int) var_4);
}
