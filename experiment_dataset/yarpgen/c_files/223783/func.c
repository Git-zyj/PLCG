/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223783
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
    var_10 = ((/* implicit */unsigned char) (+(((unsigned int) (!(((/* implicit */_Bool) var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2269814212194729984LL)) ? (arr_3 [i_0] [i_1 + 3] [i_1]) : (-133886024644124073LL)))));
                arr_5 [i_1] = ((/* implicit */unsigned int) 133886024644124072LL);
                var_12 = arr_1 [i_1];
            }
        } 
    } 
}
