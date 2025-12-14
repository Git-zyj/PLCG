/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209438
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
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 -= ((/* implicit */_Bool) var_18);
                arr_4 [8LL] [i_1] |= ((/* implicit */long long int) (+(((((/* implicit */int) arr_3 [i_0 + 2])) % (var_5)))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_11) > (((/* implicit */long long int) var_5))))) | (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (arr_1 [7LL])))))))));
            }
        } 
    } 
}
