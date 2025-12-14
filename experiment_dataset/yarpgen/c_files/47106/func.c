/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47106
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_8 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) arr_4 [i_2 - 1] [i_2 + 1] [i_2 - 1]);
                    arr_9 [i_1] = (((!(((/* implicit */_Bool) max((arr_1 [i_0 + 1]), (arr_5 [i_0] [i_0 + 1] [6U])))))) ? (((/* implicit */unsigned long long int) (-(2290216767U)))) : ((~(arr_6 [i_0 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_3);
    var_19 = -2456201261331596075LL;
}
