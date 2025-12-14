/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208672
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned char) min((var_20), (min((var_8), (((/* implicit */unsigned char) (signed char)-18))))));
                var_21 = ((/* implicit */long long int) var_13);
            }
        } 
    } 
    var_22 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
}
