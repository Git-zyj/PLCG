/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239857
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) arr_2 [i_1]);
                var_19 = arr_3 [i_1] [i_0] [i_0];
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_20 = (signed char)13;
    var_21 = ((/* implicit */unsigned char) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
}
