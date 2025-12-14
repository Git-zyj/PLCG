/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47753
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1])))))));
                var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_1]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) var_6);
}
